#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("MyQtPlayer");
    connect(ui->btnQuit,&QPushButton::clicked,this,&QWidget::close);
    ui->lblTime->setText(QString::number(0));

    // 视频处理
    pPlayer = new QMediaPlayer(this); // 放映员
    pPlaylist = new QMediaPlaylist(this); // 胶卷
    pVideoWidget = new QVideoWidget(ui->lblVideo); // 屏幕
    pPlaylist->clear();
    pPlayer->setPlaylist(pPlaylist);
    pPlayer->setVideoOutput(pVideoWidget);

    connect(ui->actionOpen,&QAction::triggered,[=](){
        QString path = QFileDialog::getOpenFileName(this,"Open File","C:\\Users\\yudou\\Videos\\Captures","mp4(*.mp4)");
        qDebug()<<path;
        pPlaylist->addMedia(QUrl(path));
        play();
    });
    connect(ui->btnPlayPause,&QPushButton::clicked,[=](){
        if(!isPlaying()){
            play();
        }else{
            pause();
        }
    });
    connect(ui->btnStop,&QPushButton::clicked,[=](){
        stop();
    });

    connect(ui->horizontalSlider,&QSlider::valueChanged,[=](){
        int sliderVal = ui->horizontalSlider->value();
        qDebug()<<"slide value: "<<sliderVal;
        qDebug()<<"player duration: "<<pPlayer->duration();
        ui->lblTime->setText(QString::number(sliderVal));
        pPlayer->setPosition((double)sliderVal/100*pPlayer->duration());
    });


//    connect(timer,&QTimer::timeout,[=](){
//        static int time = 1;
//        ui->lblTime->setText(QString::number(time++));
//    });
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
    pVideoWidget->resize(ui->lblVideo->size());
    pPlayer->play();
}

void MainWindow::pause(){
    if(!isPlaying()){
        return;
    }
    is_playing = false;
    ui->btnPlayPause->setText("Play");
    pPlayer->pause();
}

void MainWindow::stop(){
    pPlayer->stop();
    timer->stop();
}

MainWindow::~MainWindow()
{
    delete ui;
}

