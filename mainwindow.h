#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDir>
#include <QDebug>

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

private:
    Ui::MainWindow *ui;
    void OpenUserdataFolder();
};

#endif // MAINWINDOW_H
