/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actStartCamera;
    QAction *actStopCamera;
    QAction *actCapture;
    QAction *actVideoRecord;
    QAction *actVideoStop;
    QAction *exit;
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboCam_List;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboCam_position;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboCam_photoRes;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboCam_videoRes;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboCam_frameRate;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *checkBox_Color;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_16;
    QCheckBox *checkBox_Exposure;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_17;
    QCheckBox *checkBox_Iso;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *checkBox_Manual;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBox_Custom;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *checkBox_Focus;
    QLabel *label_14;
    QWidget *widget_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_9;
    QVideoWidget *videoPreView;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QComboBox *comboImage_Quality;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *chkBox_Sound;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QComboBox *comboImage_resSolution;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *chkBox_SaveToFile;
    QLabel *label_18;
    QLabel *label_preImage;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_9;
    QComboBox *comboVideo_Codec;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_10;
    QComboBox *comboVideo_FileFormat;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_11;
    QComboBox *comboVideo_Quality;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_19;
    QComboBox *comboVideo_Resolution;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *btnVideoFile;
    QLineEdit *editVideo_OutputFile;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_10;
    QVideoWidget *videoSink;
    QLabel *label_savePath;
    QLabel *label_21;
    QLabel *label_duration;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 663);
        actStartCamera = new QAction(MainWindow);
        actStartCamera->setObjectName("actStartCamera");
        actStartCamera->setMenuRole(QAction::NoRole);
        actStopCamera = new QAction(MainWindow);
        actStopCamera->setObjectName("actStopCamera");
        actStopCamera->setMenuRole(QAction::NoRole);
        actCapture = new QAction(MainWindow);
        actCapture->setObjectName("actCapture");
        actCapture->setMenuRole(QAction::NoRole);
        actVideoRecord = new QAction(MainWindow);
        actVideoRecord->setObjectName("actVideoRecord");
        actVideoRecord->setMenuRole(QAction::NoRole);
        actVideoStop = new QAction(MainWindow);
        actVideoStop->setObjectName("actVideoStop");
        actVideoStop->setMenuRole(QAction::NoRole);
        exit = new QAction(MainWindow);
        exit->setObjectName("exit");
        exit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 10, 791, 151));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setMaximumSize(QSize(50, 16777215));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        comboCam_List = new QComboBox(groupBox);
        comboCam_List->setObjectName("comboCam_List");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboCam_List->sizePolicy().hasHeightForWidth());
        comboCam_List->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboCam_List);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        comboCam_position = new QComboBox(groupBox);
        comboCam_position->addItem(QString());
        comboCam_position->addItem(QString());
        comboCam_position->addItem(QString());
        comboCam_position->setObjectName("comboCam_position");

        horizontalLayout_2->addWidget(comboCam_position);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_7->addWidget(groupBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        comboCam_photoRes = new QComboBox(widget);
        comboCam_photoRes->setObjectName("comboCam_photoRes");

        horizontalLayout_3->addWidget(comboCam_photoRes);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        comboCam_videoRes = new QComboBox(widget);
        comboCam_videoRes->setObjectName("comboCam_videoRes");

        horizontalLayout_4->addWidget(comboCam_videoRes);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(100, 16777215));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        comboCam_frameRate = new QComboBox(widget);
        comboCam_frameRate->setObjectName("comboCam_frameRate");

        horizontalLayout_5->addWidget(comboCam_frameRate);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_7->addLayout(verticalLayout_2);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_6 = new QHBoxLayout(groupBox_2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        checkBox_Color = new QCheckBox(groupBox_2);
        checkBox_Color->setObjectName("checkBox_Color");
        checkBox_Color->setMaximumSize(QSize(15, 15));

        horizontalLayout_15->addWidget(checkBox_Color);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName("label_15");

        horizontalLayout_15->addWidget(label_15);


        verticalLayout_6->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        checkBox_Exposure = new QCheckBox(groupBox_2);
        checkBox_Exposure->setObjectName("checkBox_Exposure");
        checkBox_Exposure->setMaximumSize(QSize(15, 15));

        horizontalLayout_16->addWidget(checkBox_Exposure);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName("label_16");

        horizontalLayout_16->addWidget(label_16);


        verticalLayout_6->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        checkBox_Iso = new QCheckBox(groupBox_2);
        checkBox_Iso->setObjectName("checkBox_Iso");
        checkBox_Iso->setMaximumSize(QSize(15, 15));

        horizontalLayout_17->addWidget(checkBox_Iso);

        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName("label_20");

        horizontalLayout_17->addWidget(label_20);


        verticalLayout_6->addLayout(horizontalLayout_17);


        horizontalLayout_6->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        checkBox_Manual = new QCheckBox(groupBox_2);
        checkBox_Manual->setObjectName("checkBox_Manual");
        checkBox_Manual->setMaximumSize(QSize(15, 15));

        horizontalLayout_12->addWidget(checkBox_Manual);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName("label_12");

        horizontalLayout_12->addWidget(label_12);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        checkBox_Custom = new QCheckBox(groupBox_2);
        checkBox_Custom->setObjectName("checkBox_Custom");
        checkBox_Custom->setMaximumSize(QSize(15, 15));

        horizontalLayout_13->addWidget(checkBox_Custom);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName("label_13");

        horizontalLayout_13->addWidget(label_13);


        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        checkBox_Focus = new QCheckBox(groupBox_2);
        checkBox_Focus->setObjectName("checkBox_Focus");
        checkBox_Focus->setMaximumSize(QSize(15, 15));

        horizontalLayout_14->addWidget(checkBox_Focus);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName("label_14");

        horizontalLayout_14->addWidget(label_14);


        verticalLayout_5->addLayout(horizontalLayout_14);


        horizontalLayout_6->addLayout(verticalLayout_5);


        horizontalLayout_7->addWidget(groupBox_2);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 170, 781, 461));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 0, 361, 401));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(widget_3);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_9 = new QVBoxLayout(groupBox_3);
        verticalLayout_9->setObjectName("verticalLayout_9");
        videoPreView = new QVideoWidget(groupBox_3);
        videoPreView->setObjectName("videoPreView");

        verticalLayout_9->addWidget(videoPreView);


        verticalLayout_3->addWidget(groupBox_3);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(370, 0, 421, 401));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        tabWidget = new QTabWidget(widget_4);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(0, 10, 391, 111));
        verticalLayout_7 = new QVBoxLayout(groupBox_4);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(60, 0));
        label_6->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_8->addWidget(label_6);

        comboImage_Quality = new QComboBox(groupBox_4);
        comboImage_Quality->addItem(QString());
        comboImage_Quality->addItem(QString());
        comboImage_Quality->addItem(QString());
        comboImage_Quality->addItem(QString());
        comboImage_Quality->addItem(QString());
        comboImage_Quality->setObjectName("comboImage_Quality");

        horizontalLayout_8->addWidget(comboImage_Quality);


        horizontalLayout_18->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        chkBox_Sound = new QCheckBox(groupBox_4);
        chkBox_Sound->setObjectName("chkBox_Sound");
        chkBox_Sound->setMaximumSize(QSize(15, 15));

        horizontalLayout_10->addWidget(chkBox_Sound);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName("label_17");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);
        label_17->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_10->addWidget(label_17);


        horizontalLayout_18->addLayout(horizontalLayout_10);

        horizontalLayout_18->setStretch(0, 3);
        horizontalLayout_18->setStretch(1, 1);

        verticalLayout_7->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(60, 0));
        label_7->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_9->addWidget(label_7);

        comboImage_resSolution = new QComboBox(groupBox_4);
        comboImage_resSolution->setObjectName("comboImage_resSolution");

        horizontalLayout_9->addWidget(comboImage_resSolution);


        horizontalLayout_19->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        chkBox_SaveToFile = new QCheckBox(groupBox_4);
        chkBox_SaveToFile->setObjectName("chkBox_SaveToFile");
        chkBox_SaveToFile->setMaximumSize(QSize(15, 15));

        horizontalLayout_11->addWidget(chkBox_SaveToFile);

        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName("label_18");

        horizontalLayout_11->addWidget(label_18);


        horizontalLayout_19->addLayout(horizontalLayout_11);

        horizontalLayout_19->setStretch(0, 3);
        horizontalLayout_19->setStretch(1, 1);

        verticalLayout_7->addLayout(horizontalLayout_19);

        label_preImage = new QLabel(tab);
        label_preImage->setObjectName("label_preImage");
        label_preImage->setGeometry(QRect(10, 140, 371, 261));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(10, 50, 371, 301));
        verticalLayout_8 = new QVBoxLayout(groupBox_5);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName("label_9");

        horizontalLayout_21->addWidget(label_9);

        comboVideo_Codec = new QComboBox(groupBox_5);
        comboVideo_Codec->setObjectName("comboVideo_Codec");

        horizontalLayout_21->addWidget(comboVideo_Codec);

        horizontalLayout_21->setStretch(0, 1);
        horizontalLayout_21->setStretch(1, 4);

        verticalLayout_8->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName("label_10");

        horizontalLayout_22->addWidget(label_10);

        comboVideo_FileFormat = new QComboBox(groupBox_5);
        comboVideo_FileFormat->setObjectName("comboVideo_FileFormat");

        horizontalLayout_22->addWidget(comboVideo_FileFormat);

        horizontalLayout_22->setStretch(0, 1);
        horizontalLayout_22->setStretch(1, 4);

        verticalLayout_8->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName("label_11");

        horizontalLayout_23->addWidget(label_11);

        comboVideo_Quality = new QComboBox(groupBox_5);
        comboVideo_Quality->addItem(QString());
        comboVideo_Quality->addItem(QString());
        comboVideo_Quality->addItem(QString());
        comboVideo_Quality->addItem(QString());
        comboVideo_Quality->addItem(QString());
        comboVideo_Quality->setObjectName("comboVideo_Quality");

        horizontalLayout_23->addWidget(comboVideo_Quality);

        horizontalLayout_23->setStretch(0, 1);
        horizontalLayout_23->setStretch(1, 4);

        verticalLayout_8->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName("label_19");

        horizontalLayout_24->addWidget(label_19);

        comboVideo_Resolution = new QComboBox(groupBox_5);
        comboVideo_Resolution->setObjectName("comboVideo_Resolution");

        horizontalLayout_24->addWidget(comboVideo_Resolution);

        horizontalLayout_24->setStretch(0, 1);
        horizontalLayout_24->setStretch(1, 4);

        verticalLayout_8->addLayout(horizontalLayout_24);

        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 361, 24));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        btnVideoFile = new QPushButton(layoutWidget);
        btnVideoFile->setObjectName("btnVideoFile");

        horizontalLayout_20->addWidget(btnVideoFile);

        editVideo_OutputFile = new QLineEdit(layoutWidget);
        editVideo_OutputFile->setObjectName("editVideo_OutputFile");

        horizontalLayout_20->addWidget(editVideo_OutputFile);

        horizontalLayout_20->setStretch(1, 4);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_10 = new QVBoxLayout(tab_3);
        verticalLayout_10->setObjectName("verticalLayout_10");
        videoSink = new QVideoWidget(tab_3);
        videoSink->setObjectName("videoSink");

        verticalLayout_10->addWidget(videoSink);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_4->addWidget(tabWidget);

        label_savePath = new QLabel(widget_2);
        label_savePath->setObjectName("label_savePath");
        label_savePath->setGeometry(QRect(420, 420, 351, 31));
        label_21 = new QLabel(widget_2);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(350, 430, 61, 21));
        label_duration = new QLabel(widget_2);
        label_duration->setObjectName("label_duration");
        label_duration->setGeometry(QRect(20, 420, 101, 31));
        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actStartCamera);
        toolBar->addAction(actStopCamera);
        toolBar->addSeparator();
        toolBar->addAction(actCapture);
        toolBar->addSeparator();
        toolBar->addAction(actVideoRecord);
        toolBar->addAction(actVideoStop);
        toolBar->addSeparator();
        toolBar->addAction(exit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actStartCamera->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", nullptr));
        actStopCamera->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", nullptr));
        actCapture->setText(QCoreApplication::translate("MainWindow", "\346\213\215\347\205\247", nullptr));
        actVideoRecord->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\345\275\225\345\203\217", nullptr));
        actVideoStop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\345\275\225\345\203\217", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\350\256\276\345\244\207", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\350\256\276\347\275\256", nullptr));
        comboCam_position->setItemText(0, QCoreApplication::translate("MainWindow", "\346\234\252\350\256\276\347\275\256", nullptr));
        comboCam_position->setItemText(1, QCoreApplication::translate("MainWindow", "\345\220\216\347\275\256", nullptr));
        comboCam_position->setItemText(2, QCoreApplication::translate("MainWindow", "\345\211\215\347\275\256", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\346\224\257\346\214\201\347\232\204\346\213\215\347\205\247\345\210\206\350\276\250\347\216\207", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\224\257\346\214\201\347\232\204\350\247\206\351\242\221\345\210\206\350\276\250\347\216\207", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\345\270\247\347\216\207\350\214\203\345\233\264", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\346\216\247\345\210\266\347\211\271\346\200\247", nullptr));
        checkBox_Color->setText(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "ColorTemPerature", nullptr));
        checkBox_Exposure->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "ExposureCompensation", nullptr));
        checkBox_Iso->setText(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "IsoSensitivity", nullptr));
        checkBox_Manual->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "ManuaIExposureTime", nullptr));
        checkBox_Custom->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "CustomFocusPoint", nullptr));
        checkBox_Focus->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "FocusDistance", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\351\242\204\350\247\210", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\346\213\215\347\205\247\350\256\276\347\275\256", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\347\274\226\347\240\201\345\223\201\350\264\250", nullptr));
        comboImage_Quality->setItemText(0, QCoreApplication::translate("MainWindow", "VeryLowQuality", nullptr));
        comboImage_Quality->setItemText(1, QCoreApplication::translate("MainWindow", "LowQuality", nullptr));
        comboImage_Quality->setItemText(2, QCoreApplication::translate("MainWindow", "NormalQuality", nullptr));
        comboImage_Quality->setItemText(3, QCoreApplication::translate("MainWindow", "HighQuality", nullptr));
        comboImage_Quality->setItemText(4, QCoreApplication::translate("MainWindow", "VeryHighQuality", nullptr));

        chkBox_Sound->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\351\237\263\346\225\210", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\345\210\206\350\276\250\347\216\207", nullptr));
        chkBox_SaveToFile->setText(QString());
        label_18->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\344\270\272\346\226\207\344\273\266", nullptr));
        label_preImage->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\346\213\215\346\221\204\347\232\204\347\205\247\347\211\207", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\345\275\225\345\203\217\350\256\276\347\275\256", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\347\274\226\347\240\201", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\346\240\274\345\274\217", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\347\274\226\347\240\201\350\264\250\351\207\217", nullptr));
        comboVideo_Quality->setItemText(0, QCoreApplication::translate("MainWindow", "VeryLowQuality", nullptr));
        comboVideo_Quality->setItemText(1, QCoreApplication::translate("MainWindow", "LowQuality", nullptr));
        comboVideo_Quality->setItemText(2, QCoreApplication::translate("MainWindow", "NormalQuality", nullptr));
        comboVideo_Quality->setItemText(3, QCoreApplication::translate("MainWindow", "HighQuality", nullptr));
        comboVideo_Quality->setItemText(4, QCoreApplication::translate("MainWindow", "VeryHighQuality", nullptr));

        label_19->setText(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\345\210\206\350\276\250\347\216\207", nullptr));
        btnVideoFile->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        editVideo_OutputFile->setText(QCoreApplication::translate("MainWindow", "C:/Users/22700/Pictures/", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\345\275\225\345\203\217\350\256\276\347\275\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
        label_savePath->setText(QString());
        label_21->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\344\275\215\347\275\256", nullptr));
        label_duration->setText(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
