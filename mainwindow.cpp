#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QDir>
#include <QDebug>

//#include <QListWidget>

QString findSum(QString str1, QString str2);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditImageFile->setText("C:/Program Files (x86)/Steam/userdata/66942368/760/remote/220/screenshots");
    QDir imageFolder("C:/Program Files (x86)/Steam/userdata/66942368/760/remote/220/screenshots");
    if (!imageFolder.exists()) QMessageBox::critical(this, "Folder not found!", "Steam's screenshot folder was not found.");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAbout_clicked()
{
    QMessageBox::about(this, "About SFT", "SFT - Steam Friends Tagger v0.1\nhttps://github.com/lucianopeixoto/SteamFriendsTagger\nCreated by Luciano Peixoto\nlucianopeixoto@hotmail.com");
}

void MainWindow::on_pushButtonRunTagFriend_clicked()
{
    //unsigned long int steamId32 = (1 + ui->lineEditSteamProfile->text().toInt()); //descobrir como somar 64bits
    QString steamId64;
    steamId64 = findSum(ui->lineEditSteamProfile->text(), "76561197960265728");
    ui->lineEditSteamID64->setText(steamId64);
}

// Function for finding sum of larger numbers
QString findSum(QString str1, QString str2)
{
    qDebug() << "findSum( " << str1 << ", " << str2 << ")";
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length() > str2.length())
        swap(str1, str2);

    // Take an empty string for storing result
    QString str = "";

    // Calculate lenght of both string
    int n1 = str1.length(), n2 = str2.length();

    qDebug() << "n1 = str1.length = " << n1 << "n2 = str2.length = " << n2;

    // Reverse both of strings
    std::reverse(str1.begin(), str1.end());
    std::reverse(str2.begin(), str2.end());

    qDebug() << "After reversion: str1 = " << str1 << "str2 = " << str2;

    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1.at(i).toLatin1()- '0') + (str2.at(i).toLatin1() - '0') + carry);
        str.push_back(sum%10 + '0');

        // Calculate carry for next step
        carry = sum/10;
    }

    // Add remaining digits of larger number
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2.at(i).toLatin1()-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');

    // reverse resultant string
    std::reverse(str.begin(), str.end());

    return str;
}
