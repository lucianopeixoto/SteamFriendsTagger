#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
// #include <QListWidget>

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

void MainWindow::on_pushButtonAbout_clicked()
{
    QMessageBox::about(this, "About SFT", "SFT - Steam Friends Tagger v0.1\nhttps://github.com/lucianopeixoto/SteamFriendsTagger\nCreated by Luciano Peixoto\nlucianopeixoto@hotmail.com");
}
