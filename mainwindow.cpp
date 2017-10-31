#include "mainwindow.h"
#include "ui_mainwindow.h"

// TODO: Set Validadors for the Steam ID64, Steam Profile and Games fields.


QString findSum(QString str1, QString str2);

QDir userdataFolder("C:/");
QDir userdataFolder760("C:/");
QDir userdataFolderRemote("C:/");
QDir userdataFolderGame("C:/");

QFile vdfFileGlobal("");
QString vdfFileString;

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
        ui->comboBoxGame->clear();
        ui->comboBoxGame->setDisabled(1);
        ui->comboBoxGame->clear();
        ui->comboBoxScreenshotFile->setDisabled(1);
        ui->lineEditLocation->clear();
        ui->lineEditLocation->setDisabled(1);
        ui->lineEditSteamProfile->clear();
        ui->lineEditSteamProfile->setDisabled(1);
        ui->checkBoxLocationEdit->setDisabled(1);
    }
    else{
        qDebug() << "Userdata: " << userdataFolder.absolutePath();
        ui->toolButtonConfirmUserdataFolder->setDisabled(1);
        // Filling the combobox with users:
        ui->comboBoxUsers->setEnabled(1);
        ui->comboBoxUsers->clear();
        ui->comboBoxUsers->addItems(userdataFolder.entryList(QDir::Dirs));
        ui->comboBoxUsers->setCurrentIndex(0);
        ui->comboBoxUsers->removeItem(0);
        ui->comboBoxUsers->removeItem(0);
    }
}

// Get the location name for the selected screenshot from screenshots.vdf
QString MainWindow::getLocation(QString * vdfStringLocal, QString screenshotFile){
    qDebug() << "getLocation of screenshot " << screenshotFile << " from file " << vdfFileGlobal.fileName();
    QString screenshotVdfString = "";
    QString location = "Map Name";

    // location = vdfStringLocal->mid(738, 9); // de_mirage example test

    // Gets only the selected screenshot related information:
    screenshotVdfString = vdfStringLocal->mid(
                vdfStringLocal->lastIndexOf("\n\t\t{\n", vdfStringLocal->indexOf(screenshotFile)),
                vdfStringLocal->indexOf("\n\t\t}\n") + 7);
    qDebug() << "Screenshot to VDF:\n" << screenshotVdfString;

    // If there's a location parameter, get's it, if not, set to the game ID
    // TODO: Make it set to the game name when available. Don't trust Steam API for that. Some games have wrong names. (See CSGO)
    ui->checkBoxLocationEdit->setEnabled(1);
    if (screenshotVdfString.indexOf("\"location\"", 0 , Qt::CaseInsensitive) != -1){
        // Searshes for a "location" and gets the text after "\t\t\""
        location = screenshotVdfString.mid(
                        screenshotVdfString.indexOf("\t\t\"", screenshotVdfString.indexOf("\"location\"", 0 , Qt::CaseInsensitive)) + 3
                    );
        // Truncates at "\"\n"
        location.truncate(location.indexOf("\"\n"));
        ui->checkBoxLocationEdit->setChecked(0);
        ui->lineEditLocation->setDisabled(1);
    }
    else{
        location = ui->comboBoxGame->currentText();
        ui->checkBoxLocationEdit->setChecked(1);
        ui->lineEditLocation->setEnabled(1);
    }

    return location;
}

void MainWindow::writeScreenshotString(QFile *vdfFileLocal, QString vdfStringLocal)
{
    vdfFileGlobal.close();
    vdfFileGlobal.setFileName(userdataFolder760.absoluteFilePath("screenshots.vdf"));
    if (!vdfFileGlobal.open(QIODevice::ReadWrite | QIODevice::Text))
        QMessageBox::critical(this, "File not found!", "File was not found!");
    else{
        QTextStream vdfFileStream(&vdfFileGlobal);
        vdfFileString = vdfFileStream.readAll();
        qDebug() << vdfFileString;
    }
    vdfFileGlobal.close();

}

// TODO: Load games names using SteamAPI, other site or a local text file with most games
void MainWindow::on_comboBoxUsers_currentIndexChanged(const QString &arg1)
{
    if (arg1 != "." && arg1 != ".." && arg1 != ""){
        userdataFolder760.setPath(userdataFolder.absolutePath() + "/" + arg1 + "/760/");
        if (!userdataFolder760.exists()){
            QMessageBox::critical(this, "Folder not found!", "Userdata \"" + arg1 +"/760/\" folder was not found.\nUnable to continue.");
            ui->comboBoxGame->setDisabled(1);
            ui->comboBoxGame->clear();
            ui->comboBoxFriend->setDisabled(1);
            ui->comboBoxFriend->clear();
            ui->lineEditSteamProfile->setDisabled(true);
            ui->lineEditSteamProfile->clear();
        }
        else{
            qDebug() << "760: " + userdataFolder760.absolutePath();

            vdfFileGlobal.close();
            vdfFileGlobal.setFileName(userdataFolder760.absoluteFilePath("screenshots.vdf"));
            if (!vdfFileGlobal.open(QIODevice::ReadWrite | QIODevice::Text))
                QMessageBox::critical(this, "File not found!", "File was not found!");
            else{
                QTextStream vdfFileStream(&vdfFileGlobal);
                vdfFileString = vdfFileStream.readAll();
                qDebug() << vdfFileString;
            }
            vdfFileGlobal.close();

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
            ui->comboBoxScreenshotFile->clear();
            ui->comboBoxScreenshotFile->addItems(userdataFolderGame.entryList(QDir::Files));
            ui->comboBoxScreenshotFile->setCurrentIndex(0);
            ui->comboBoxScreenshotFile->setEnabled(1);
        }
    }
    else {
        ui->comboBoxScreenshotFile->setDisabled(1);
        ui->comboBoxScreenshotFile->clear();
    }
}

// When changing selected screenshot file, load the "map location" and the image preview
void MainWindow::on_comboBoxScreenshotFile_currentIndexChanged(const QString &arg1)
{
    qDebug() << getLocation(&vdfFileString, arg1);

    QString screenshotPreviewPath;
    screenshotPreviewPath = ui->lineEditUserdataFolder->text() + "userdata/" + ui->comboBoxUsers->currentText() + "/760/remote/" + ui->comboBoxGame->currentText() + "/screenshots/" + arg1;
    qDebug() << "Screenshot Preview: " << screenshotPreviewPath;
    QPixmap screenshotPreviewPixmap(screenshotPreviewPath);
    ui->labelImagePreviewPixel->setPixmap(screenshotPreviewPixmap.scaled(600, 600, Qt::KeepAspectRatio));
    ui->lineEditLocation->setText(getLocation(&vdfFileString, arg1));
    if (arg1 != "") {
        ui ->lineEditSteamProfile->setEnabled(1);
    }
}

void MainWindow::on_checkBoxLocationEdit_clicked(bool checked)
{
    if (checked == true){
        if (ui->comboBoxScreenshotFile->currentText().length() > 1){
            ui->lineEditLocation->setEnabled(true);
        } else
            ui->lineEditLocation->setDisabled(true);
    } else
        ui->lineEditLocation->setDisabled(true);
}

void MainWindow::on_lineEditSteamProfile_textChanged(const QString &arg1)
{
    QString steamId64;
    if (arg1 != ""){
        steamId64 = findSum(arg1, "76561197960265728");
        ui->lineEditSteamID64->setText(steamId64);
    }
    else ui->lineEditSteamID64->clear();
}

void MainWindow::on_lineEditSteamID64_textChanged(const QString &arg1)
{
    if (arg1 != ""){
        ui->pushButtonRunTagFriend->setEnabled(1);
    }
    else{
        ui->pushButtonRunTagFriend->setDisabled(1);
    }
}

void MainWindow::on_radioButtonFriend_toggled(bool checked)
{
    switch (checked) {
    case false:
        ui->comboBoxFriend->setDisabled(true);
        break;
    case true:
        ui->comboBoxFriend->setEnabled(true);
        // TODO: This part below is just warning the user about future improvements. Remove when friends list implemented
        QMessageBox::critical(this, "Feature not yet implemented!", "This will allow you to select the profile to be "
                                                                    "tagged from your steam friends. For now you should "
                                                                    "use a tool to find your friend\'s Steam ID or Steam "
                                                                    "ID64 and paste manually below.\n"
                                                                    "Please, check the \"Help\" section for more info on "
                                                                    "how to find your friend's ID.");
        ui->radioButtonSteamProfile->setChecked(true);
        break;
    default:
        break;
    }
}

void MainWindow::on_lineEditSteamProfile_textEdited(const QString &arg1)
{

}


void MainWindow::on_pushButtonHelp_clicked()
{
    // TODO: Link to a more specific step-by-step help page when the Wiki becomes more complex.
    QString link = "https://github.com/lucianopeixoto/SteamFriendsTagger/wiki";
    QDesktopServices::openUrl(QUrl(link));
}
