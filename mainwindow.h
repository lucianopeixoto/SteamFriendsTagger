#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDir>
#include <QDebug>
#include <QStringList>
#include <QJsonValue>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonAbout_clicked();

    void on_pushButtonRunTagFriend_clicked();

    void on_toolButtonConfirmUserdataFolder_clicked();

    void on_lineEditUserdataFolder_textEdited(const QString &arg1);

    void on_comboBoxUsers_currentIndexChanged(const QString &arg1);

    void on_comboBoxGame_currentIndexChanged(const QString &arg1);

    void on_comboBoxScreenshotFile_currentIndexChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    void OpenUserdataFolder();
    QString getLocation(QString* vdfStringLocal, QString screenshotFile);
};

#endif // MAINWINDOW_H
