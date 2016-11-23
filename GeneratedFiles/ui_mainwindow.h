/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionMute;
    QAction *actionVolume;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuVideo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(401, 310);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icons/ic_action_folder_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icons/control_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon1);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/icons/control_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon2);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/icons/control_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon3);
        actionMute = new QAction(MainWindow);
        actionMute->setObjectName(QStringLiteral("actionMute"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/icons/ic_action_volume_mute.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMute->setIcon(icon4);
        actionVolume = new QAction(MainWindow);
        actionVolume->setObjectName(QStringLiteral("actionVolume"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/icons/ic_action_volume_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVolume->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 401, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuVideo = new QMenu(menuBar);
        menuVideo->setObjectName(QStringLiteral("menuVideo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuVideo->menuAction());
        menuFile->addAction(actionOpen);
        menuVideo->addAction(actionPlay);
        menuVideo->addAction(actionPause);
        menuVideo->addAction(actionStop);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPlay);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPause);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionStop);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionMute);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionVolume);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open a file", 0));
#endif // QT_NO_TOOLTIP
        actionPlay->setText(QApplication::translate("MainWindow", "Play", 0));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", 0));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        actionMute->setText(QApplication::translate("MainWindow", "Mute", 0));
        actionVolume->setText(QApplication::translate("MainWindow", "Volume", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuVideo->setTitle(QApplication::translate("MainWindow", "Video", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
