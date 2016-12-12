#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/ohhh- wonderful by travis scott.m4a"));
    player->play();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/b-help.mp3"));
    player->play();
}

void MainWindow::on_pushButton_3_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/a-imdone.mp3"));
    player->play();
}

void MainWindow::on_pushButton_4_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/a-game.mp3"));
    player->play();
}

void MainWindow::on_pushButton_5_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/a-holyfucksakes.mp3"));
    player->play();
}

void MainWindow::on_pushButton_6_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/a-ohshitson.mp3"));
    player->play();
}

void MainWindow::on_pushButton_7_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/b-aaaah.mp3"));
    player->play();
}

void MainWindow::on_pushButton_8_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/b-blbbllb.mp3"));
    player->play();
}

void MainWindow::on_pushButton_9_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/b-laugh.mp3"));
    player->play();
}

void MainWindow::on_pushButton_10_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/b-mamma.mp3"));
    player->play();
}

void MainWindow::on_pushButton_11_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/b-omg.mp3"));
    player->play();
}

void MainWindow::on_pushButton_12_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/b-toptoptoptop.mp3"));
    player->play();
}

void MainWindow::on_pushButton_13_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/e-back.mp3"));
    player->play();
}

void MainWindow::on_pushButton_14_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/e-doit.mp3"));
    player->play();
}

void MainWindow::on_pushButton_15_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/e-lose.mp3"));
    player->play();
}

void MainWindow::on_pushButton_16_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/e-rightnow.mp3"));
    player->play();
}

void MainWindow::on_pushButton_17_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/ku-gman.mp3"));
    player->play();
}

void MainWindow::on_pushButton_18_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/ld-wow.mp3"));
    player->play();
}

void MainWindow::on_pushButton_19_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/ld-alldead.mp3"));
    player->play();
}

void MainWindow::on_pushButton_20_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/ld-ding.mp3"));
    player->play();
}

void MainWindow::on_pushButton_21_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/mo-level.mp3"));
    player->play();
}

void MainWindow::on_pushButton_22_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/n-everything.mp3"));
    player->play();
}

void MainWindow::on_pushButton_23_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/n-idinahui.mp3"));
    player->play();
}

void MainWindow::on_pushButton_24_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/n-retard.mp3"));
    player->play();
}

void MainWindow::on_pushButton_25_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/n-worthit.mp3"));
    player->play();
}

void MainWindow::on_pushButton_26_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/p-mellamo.mp3"));
    player->play();
}

void MainWindow::on_pushButton_27_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/p-relpme.mp3"));
    player->play();
}

void MainWindow::on_pushButton_28_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/p-vamonos.mp3"));
    player->play();
}
void MainWindow::on_pushButton_29_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/sing-haha.mp3"));
    player->play();
}
void MainWindow::on_pushButton_30_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/t-disastah.mp3"));
    player->play();
}
