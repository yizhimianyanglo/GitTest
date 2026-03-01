#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>

#include <QMediaRecorder>

class QMediaCaptureSession;
class QCamera;
class QImageCapture;
class QSoundEffect;
class QMediaRecorder;
class QCameraDevice;


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void showCameraDeviceInfo(QCameraDevice *device);
    void showCameraSupportFeatures(QCamera *aCamera);//相机支持的功能

private:

    QMediaCaptureSession *Session; //用于协调媒体捕获会话的各个组件
    QCamera *camera;   //相机

    bool is_working = false;

    QImageCapture *imageCapture; // 图片捕获

    QSoundEffect *soundEffect; //拍照快门的声音
    QMediaRecorder *recorder; // 录像

private slots:
    void do_activeChanged(bool);
    void do_currentIndexChanged(int index);

    void do_readyForCaptureChanged(bool ready);
    void do_imageCaptured(int id, const QImage &preview);
    void do_imageSaved(int id, const QString &fileName);


    void do_recorderStateChanged(QMediaRecorder::RecorderState state);
    void do_durationChanged(qint64 duration);
    void do_errorOccurred(QMediaRecorder::Error error, const QString &errorString);


    void on_actStartCamera_triggered(); // 打开摄像头
    void on_actStopCamera_triggered(); // 关闭摄像头
    void on_actCapture_triggered(); // 拍照


    void on_actVideoRecord_triggered();

    void on_actVideoStop_triggered();

    void on_exit_triggered();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;



    // QWidget interface
protected:
    void closeEvent(QCloseEvent *event) override;
};


#endif // MAINWINDOW_H
