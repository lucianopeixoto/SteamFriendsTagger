#include "mainwindow.h"
#include "ui_mainwindow.h"

//#include <QListWidget>

QString findSum(QString str1, QString str2);

QDir userdataFolder("C:/");
QDir userdataFolder760("C:/");
QDir userdataFolderRemote("C:/");
QDir userdataFolderGame("C:/");

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditUserdataFolder->setText("C:/Program Files (x86)/Steam/");
    OpenUserdataFolder();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Display the about window
// TODO: About window should be better implemented, with better layout and web links
void MainWindow::on_pushButtonAbout_clicked()
{
    QMessageBox::about(this, "About SFT", "SFT - Steam Friends Tagger v0.1\nhttps://github.com/lucianopeixoto/SteamFriendsTagger\nCreated by Luciano Peixoto\nlucianopeixoto@hotmail.com");
}

// Run the edit on the file for Tagging the desired friend
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

// On confirm folder button clicked, update the userdata path. If folder is invalid, display message.

void MainWindow::on_toolButtonConfirmUserdataFolder_clicked()
{
    OpenUserdataFolder();
}

// On text for the userdata path edited, enabke the "Confirm" button.

void MainWindow::on_lineEditUserdataFolder_textEdited(const QString &arg1)
{
    ui->toolButtonConfirmUserdataFolder->setEnabled(1);
}

void MainWindow::OpenUserdataFolder(){
    userdataFolder.setPath( ui->lineEditUserdataFolder->text()+"userdata/");
    if (!userdataFolder.exists()){
        QMessageBox::critical(this, "Folder not found!", "Userdata folder was not found here.\nPlease fix it!");
        ui->comboBoxUsers->clear();
        ui->comboBoxUsers->setDisabled(1);
    }
    else{
        qDebug() << "Userdata: " << userdataFolder.absolutePath();
        ui->toolButtonConfirmUserdataFolder->setDisabled(1);
        // Preenchendo o combobox com a lista de usuários:
        ui->comboBoxUsers->setEnabled(1);
        ui->comboBoxUsers->clear();
        ui->comboBoxUsers->addItems(userdataFolder.entryList(QDir::Dirs));
        ui->comboBoxUsers->setCurrentIndex(0);
        ui->comboBoxUsers->removeItem(0);
        ui->comboBoxUsers->removeItem(0);
    }
}

QStringList MainWindow::getGames(QFile * vdfFile){
    QStringList stringList;
    QString vdfFileString;
    QTextStream vdfStream(vdfFile);

    vdfFileString = vdfStream.readAll();

    qDebug() << "File String:\n" << vdfFileString;
    while (vdfFileString.indexOf("\t") != -1)
            vdfFileString.remove(vdfFileString.indexOf("\t"), 2);

    qDebug() << "File String Without \\t:\n" << vdfFileString;
    return stringList;
}

void MainWindow::on_comboBoxUsers_currentIndexChanged(const QString &arg1)
{
    if (arg1 != "." && arg1 != ".." && arg1 != ""){
        userdataFolder760.setPath(userdataFolder.absolutePath() + "/" + arg1 + "/760/");
        if (!userdataFolder760.exists()){
            QMessageBox::critical(this, "Folder not found!", "Userdata \"" + arg1 +"/760/\" folder was not found.\nUnable to continue.");
            ui->comboBoxGame->setDisabled(1);
            ui->comboBoxGame->clear();
        }
        else{
            qDebug() << "760: " + userdataFolder760.absolutePath();
            QFile vdfFile(userdataFolder760.absoluteFilePath("screenshots.vdf"));
            if (!vdfFile.open(QIODevice::ReadWrite | QIODevice::Text))
                QMessageBox::critical(this, "File not found!", "File was not found!");
            //qDebug() << getGames(&vdfFile);
            userdataFolderRemote.setPath(userdataFolder760.absolutePath() + "/remote/");
            if (!userdataFolderRemote.exists()){
                QMessageBox::critical(this, "Folder not found!", "Remote folder not found at\"" + arg1 +"/760/\" folder was not found.\nUnable to continue.");
                ui->comboBoxGame->setDisabled(1);
                ui->comboBoxGame->clear();
                ui->comboBoxScreenshotFile->setDisabled(1);
                ui->comboBoxScreenshotFile->clear();
            }
            else{
                qDebug() << "Remote: " << userdataFolderRemote.absolutePath();
                ui->comboBoxGame->setEnabled(1);
                ui->comboBoxGame->clear();
                ui->comboBoxGame->addItems(userdataFolderRemote.entryList(QDir::Dirs));
                ui->comboBoxGame->setCurrentIndex(0);
                ui->comboBoxGame->removeItem(0);
                ui->comboBoxGame->removeItem(0);
            }
        }
    }
}

void MainWindow::on_comboBoxGame_currentIndexChanged(const QString &arg1)
{
    if (arg1 != "." && arg1 != ".." && arg1 != ""){
        userdataFolderGame.setPath(userdataFolderRemote.absolutePath() + "/" + arg1 + "/screenshots");
        if (!userdataFolderGame.exists()){
            QMessageBox::critical(this, "Folder not found!", "This game folder was not found.\nUnable to continue.");
            ui->comboBoxScreenshotFile->setDisabled(1);
            ui->comboBoxScreenshotFile->clear();
        }
        else{
            qDebug() << "Game: " << userdataFolderGame.absolutePath();
            ui->comboBoxScreenshotFile->setEnabled(1);
            ui->comboBoxScreenshotFile->clear();
            ui->comboBoxScreenshotFile->addItems(userdataFolderGame.entryList(QDir::Files));
            ui->comboBoxScreenshotFile->setCurrentIndex(0);
        }
    }
}
