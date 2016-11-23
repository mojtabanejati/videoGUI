#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);
    //render the video to videowidget
    vw = new QVideoWidget(this);
    //the video should be in the central of ui
    player->setVideoOutput(vw);
    this->setCentralWidget(vw);





    slider = new QSlider(this);
    bar = new QProgressBar(this);

    //for the slider and progressbar to connect to actual video
    slider->setOrientation(Qt::Horizontal);
    ui->statusBar->addPermanentWidget(slider);
    ui->statusBar->addPermanentWidget(bar);


    connect(player,&QMediaPlayer::durationChanged,slider,&QSlider::setMaximum);
    connect(player,&QMediaPlayer::positionChanged,slider,&QSlider::setValue);
    connect(slider,&QSlider::sliderMoved,player,&QMediaPlayer::setPosition);


    connect(player,&QMediaPlayer::durationChanged,bar,&QProgressBar::setMaximum);
    connect(player,&QMediaPlayer::positionChanged,bar,&QProgressBar::setValue);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    //open a dialog file
QString filename = QFileDialog::getOpenFileName(this,"Open A file","","video file(*.*)");


on_actionStop_triggered();

//set the media
player->setMedia(QUrl::fromLocalFile(filename));
//and play it automatically
on_actionPlay_triggered();


}

void MainWindow::on_actionPlay_triggered()
{
player->play();
ui->statusBar->showMessage("Video is Plying");
}

void MainWindow::on_actionPause_triggered()
{
    player->pause();
    ui->statusBar->showMessage("Video is paused");
}

void MainWindow::on_actionStop_triggered()
{
    player->stop();
    ui->statusBar->showMessage("Video is stopped");
}

void MainWindow::on_actionMute_triggered()
{

}

void MainWindow::on_actionVolume_triggered()
{

}
