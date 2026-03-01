#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QMediaCaptureSession>
#include <QCameraDevice>
#include <QMediaDevices>
#include <QAudioInput>
#include <QAudioDevice>
#include <QCamera>
#include <QImageCapture>
#include <QMediaRecorder>
#include <QMediaFormat>
#include <QCloseEvent>

// 相机设备信息
void MainWindow::showCameraDeviceInfo(QCameraDevice *device)
{
    ui->comboCam_position->setCurrentIndex(device->position()); // conbo的索引 和 position 枚举值相对应
    ui->comboCam_photoRes->clear(); //
    ui->comboImage_resSolution->clear();
    for(const auto &item : device->photoResolutions() ) // 照片分辨率  返回 QList<QSize>
    {
        ui->comboCam_photoRes->addItem(QString("%1 X %2").arg(item.width()).arg(item.height()),QVariant::fromValue(item));
        ui->comboImage_resSolution->addItem(QString("%1 X %2").arg(item.width()).arg(item.height()),QVariant::fromValue(item));
    }


    ui->comboCam_frameRate->clear(); // 帧率范围
    ui->comboCam_videoRes->clear();
    ui->comboVideo_Resolution->clear();
    for(const auto &item : device->videoFormats())
    {
       QSize resolution =  item.resolution(); // 返回分辨率

        ui->comboVideo_Resolution->addItem(QString("%1 X %2").arg(resolution.width()).arg(resolution.height()));
        ui->comboCam_videoRes->addItem(QString("%1 X %2").arg(resolution.width()).arg(resolution.height()));

       QString frameRate = QString("%1 ~ %2").arg(item.minFrameRate()).arg(item.maxFrameRate());// 最小最大帧率
        ui->comboCam_frameRate->addItem(frameRate,QVariant::fromValue(item));
    }


}

void MainWindow::showCameraSupportFeatures(QCamera *aCamera)
{
    QCamera::Features features=aCamera->supportedFeatures();
    bool supported=features.testFlag(QCamera::Feature::ColorTemperature);
    ui->checkBox_Color->setChecked(supported);
    supported=features.testFlag(QCamera::Feature::ExposureCompensation);
    ui->checkBox_Exposure->setChecked(supported);
    supported=features.testFlag(QCamera::Feature::IsoSensitivity);
    ui->checkBox_Iso->setChecked(supported);
    supported=features.testFlag(QCamera::Feature::ManualExposureTime);
    ui->checkBox_Manual->setChecked(supported);
    supported=features.testFlag(QCamera::Feature::CustomFocusPoint);
    ui->checkBox_Custom->setChecked(supported);
    supported=features.testFlag(QCamera::Feature::FocusDistance);
    ui->checkBox_Focus->setChecked(supported);
}

void MainWindow::do_activeChanged(bool active)
{

    is_working = true;

    ui->actStartCamera->setEnabled(!active); // 打开相机
    ui->actStopCamera->setEnabled(active);//关闭相机
    ui->actVideoRecord->setEnabled(active); // 开始录像
    ui->actVideoStop->setEnabled(active); //停止录像
    ui->comboCam_List->setEnabled(!active);

    ui->actCapture->setEnabled(active);// 拍照
}

// 改变相机
void MainWindow::do_currentIndexChanged(int index)
{
    QCameraDevice device = ui->comboCam_List->itemData(index).value<QCameraDevice>();
    camera->setCameraDevice(device);

     //
    showCameraDeviceInfo(&device);
    showCameraSupportFeatures(camera); // 显示相机所支持的功能
}

void MainWindow::do_readyForCaptureChanged(bool ready)
{
    ui->actCapture->setEnabled(ready);
}

void MainWindow::do_imageCaptured(int id, const QImage &preview)
{
    Q_UNUSED(id);

    ui->label_preImage->setPixmap(QPixmap::fromImage(preview));
    ui->label_preImage->setScaledContents(true);
}

void MainWindow::do_imageSaved(int id, const QString &fileName)
{
    Q_UNUSED(id);
    ui->label_savePath->setText(fileName);
}

void MainWindow::do_recorderStateChanged(QMediaRecorder::RecorderState state)
{

}

void MainWindow::do_durationChanged(qint64 duration)
{
    int m = 0;
    int s = 0;

    ui->label_duration->setText(QString::number(duration));
}

void MainWindow::do_errorOccurred(QMediaRecorder::Error error, const QString &errorString)
{

}




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 摄像头
    int index = 0;
    int i=0;
    const QList<QCameraDevice> videoDevices =  QMediaDevices::videoInputs();

    // 添加相机设备
    for(const QCameraDevice &camers : videoDevices)
    {
        if(camers.id() == QMediaDevices::defaultVideoInput().id())
        {
            ui->comboCam_List->addItem(camers.description()+" 默认",QVariant::fromValue(camers));
            index = i;
        }
        else
        ui->comboCam_List->addItem(camers.description(),QVariant::fromValue(camers));

        ++i;
    }

    ui->comboCam_List->setCurrentIndex(index);


    // QMediaCaptureSession  管理音频 视频 相机
    Session = new QMediaCaptureSession(this); // 创建音频视频管理对象
    Session->setVideoOutput(ui->videoPreView); // 视频输出
    QAudioInput *audioInput = new QAudioInput(this);
    audioInput->setDevice(QMediaDevices::defaultAudioInput());
    Session->setAudioInput(audioInput);


    // 相机
    camera = new QCamera(this);
    camera->setCameraDevice(QMediaDevices::defaultVideoInput()); // 相机设置默认的
    Session->setCamera(camera);
    connect(camera,&QCamera::activeChanged,this,&MainWindow::do_activeChanged);
    connect(ui->comboCam_List,&QComboBox::currentIndexChanged,this,&MainWindow::do_currentIndexChanged);
    do_currentIndexChanged(index);


    //  imagechanged  图片捕获   拍照
    imageCapture = new QImageCapture(this);
    imageCapture->setFileFormat(QImageCapture::PNG); // 设置文件拍照格式
    imageCapture->setQuality(QImageCapture::VeryHighQuality); // 设置image的编码品质
    Session->setImageCapture(imageCapture);

    // 当图像捕获器的准备状态发生变化时（如从"忙"变为"空闲"） bool ready：true表示已准备好捕获，false表示正在处理前一次捕获
    connect(imageCapture,&QImageCapture::readyForCaptureChanged,this,&MainWindow::do_readyForCaptureChanged);

    //当捕获具有请求 ID 的帧但尚未处理和保存时发出信号。可以向用户显示帧预览。
    connect(imageCapture,&QImageCapture::imageCaptured,this,&MainWindow::do_imageCaptured);

    //当设置 QImageCapture::CaptureToFile 并将具有请求 id 的帧保存到 fileName 时发出信号。
    connect(imageCapture,&QImageCapture::imageSaved,this,&MainWindow::do_imageSaved);



    //录像
    recorder = new QMediaRecorder(this);
    Session->setRecorder(recorder);

    /*
        enum RecorderState
    {
        StoppedState,
        RecordingState,
        PausedState
    }; */
    connect(recorder,&QMediaRecorder::recorderStateChanged,this,&MainWindow::do_recorderStateChanged); // 状态发生变化
    connect(recorder,&QMediaRecorder::durationChanged,this,&MainWindow::do_durationChanged); // 录屏时长发生变化
    connect(recorder,&QMediaRecorder::errorOccurred,this,&MainWindow::do_errorOccurred);


    //视频编码和文件格式
    QMediaFormat format;
    for(const auto &item : format.supportedVideoCodecs(QMediaFormat::Encode))
    {
        ui->comboVideo_Codec->addItem(QMediaFormat::videoCodecDescription(item),QVariant::fromValue(item));
    }


    for(const auto& item : format.supportedFileFormats(QMediaFormat::Encode))
    {
        ui->comboVideo_FileFormat->addItem(QMediaFormat::fileFormatDescription(item),
                                           QVariant::fromValue(item));
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if(is_working)
    {
        if(recorder->recorderState()==QMediaRecorder::RecordingState)
            recorder->stop();
        camera->stop();
    }

    this->close();
    event->accept();
}

void MainWindow::on_actStartCamera_triggered()
{
    camera->start();

    is_working = true;
}


void MainWindow::on_actStopCamera_triggered()
{
    if(recorder->recorderState() == QMediaRecorder::RecordingState)
    {
        recorder->stop();
    }

    if(camera->isActive())
        camera->stop();

    is_working = false;
}


void MainWindow::on_actCapture_triggered()
{
    imageCapture->setQuality(QImageCapture::Quality( ui->comboImage_Quality->currentIndex())); // 设置图片的编码质量
    int index = ui->comboImage_resSolution->currentIndex();
    QVariant var = ui->comboImage_resSolution->itemData(index,Qt::UserRole);
    imageCapture->setResolution(var.toSize());

    imageCapture->capture();
}


void MainWindow::on_actVideoRecord_triggered()
{

    if(ui->editVideo_OutputFile->text().isNull()) return;

    recorder->setQuality(QMediaRecorder::Quality(ui->comboVideo_Quality->currentIndex()));// 设置录像质量编码
    recorder->setEncodingMode(QMediaRecorder::ConstantQualityEncoding);   // 设置编码模式设置。ConstantQualityEncoding: 编码的目标是具有恒定的质量，并调整比特率以适应。

    // 设置格式
    QMediaFormat mediaFormat;
     int index = ui->comboVideo_Codec->currentIndex();
    QVariant var = ui->comboVideo_Codec->itemData(index,Qt::UserRole);
    mediaFormat.setVideoCodec(var.value<QMediaFormat::VideoCodec>()); // 设置视频编解码器

    index = ui->comboVideo_FileFormat->currentIndex();
    var = ui->comboVideo_FileFormat->itemData(index,Qt::UserRole);
    mediaFormat.setFileFormat(var.value<QMediaFormat::FileFormat>()); // 设置文件格式



    recorder->setMediaFormat(mediaFormat);// 设置给 QMediaRecorder


    // 分辨率
    index = ui->comboVideo_Resolution->currentIndex();
    recorder->setVideoResolution(ui->comboVideo_Resolution->itemData(index,Qt::UserRole).toSize());

    recorder->setOutputLocation(QUrl::fromLocalFile(ui->editVideo_OutputFile->text()));

    recorder->record(); // 开始录屏

}


void MainWindow::on_actVideoStop_triggered()
{
    recorder->stop();
}


void MainWindow::on_exit_triggered()
{
    if(is_working)
    {

        if(recorder->recorderState() == QMediaRecorder::RecordingState)
        {
            recorder->stop();
        }
        camera->stop();
    }
}

