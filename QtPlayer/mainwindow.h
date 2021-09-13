#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>

#include <QFileDialog>
#include <QMediaPlayer> // 播放器
#include <QMediaPlaylist>
#include <QVideoWidget> // 显示窗口
#include <QMouseEvent>
#include <QSlider>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool isPlaying();
    void play();
    void pause();
    void stop();
private:
    Ui::MainWindow *ui;
    bool is_playing = false;
    QMediaPlayer* pPlayer;
    QMediaPlaylist* pPlaylist;
    QVideoWidget* pVideoWidget;
    QTimer* timer;
};
#endif // MAINWINDOW_H
