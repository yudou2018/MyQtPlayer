#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("MyQtPlayer");
    connect(ui->btnQuit,&QPushButton::clicked,this,&QWidget::close);

    connect(ui->actOpen,&QAction::triggered,[=](){
        QString path = QFileDialog::getOpenFileName(this,"Open File","D:/resource");
        qDebug()<<path;
    });
    connect(ui->btnPlayPause,&QPushButton::clicked,[=](){
        if(!isPlaying()){
            play();
        }else{
            pause();
        }
    });

    // 视频处理
    pPlayer = new QMediaPlayer(this); // 放映员
    pVideoWidget = new QVideoWidget(this); // 屏幕

    pPlayer->setVideoOutput(pVideoWidget);
}

bool MainWindow::isPlaying(){
    return is_playing;
}

void MainWindow::play(){
    if(isPlaying()){
        return;
    }
    is_playing = true;
    ui->btnPlayPause->setText("Pause");
}

void MainWindow::pause(){
    if(!isPlaying()){
        return;
    }
    is_playing = false;
    ui->btnPlayPause->setText("Play");
}

MainWindow::~MainWindow()
{
    delete ui;
}

