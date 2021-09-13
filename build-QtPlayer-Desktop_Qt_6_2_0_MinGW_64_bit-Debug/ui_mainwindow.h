/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpen;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblVideo;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPlayPause;
    QPushButton *btnStop;
    QPushButton *btnQuit;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName(QString::fromUtf8("actOpen"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lblVideo = new QLabel(centralwidget);
        lblVideo->setObjectName(QString::fromUtf8("lblVideo"));
        lblVideo->setMinimumSize(QSize(0, 0));
        lblVideo->setMaximumSize(QSize(16777215, 16777215));
        lblVideo->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(lblVideo);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 150));
        groupBox->setMaximumSize(QSize(16777215, 150));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnPlayPause = new QPushButton(groupBox);
        btnPlayPause->setObjectName(QString::fromUtf8("btnPlayPause"));

        horizontalLayout->addWidget(btnPlayPause);

        btnStop = new QPushButton(groupBox);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));

        horizontalLayout->addWidget(btnStop);


        verticalLayout->addLayout(horizontalLayout);

        btnQuit = new QPushButton(groupBox);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));

        verticalLayout->addWidget(btnQuit);


        verticalLayout_2->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setSeparatorsCollapsible(true);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actOpen);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        lblVideo->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Play Control", nullptr));
        btnPlayPause->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        btnStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        btnQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
