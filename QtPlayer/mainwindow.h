#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QFileDialog>
#include <QMediaPlayer> // 播放器

#include <QVideoWidget> // 显示窗口

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    bool is_playing = false;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool isPlaying();
    void play();
    void pause();
private:
    Ui::MainWindow *ui;
    QMediaPlayer* pPlayer;
    QVideoWidget* pVideoWidget;
};
#endif // MAINWINDOW_H
