/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButtonHelp;
    QPushButton *pushButtonAbout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonRunTagFriend;
    QFormLayout *formLayout_2;
    QLabel *labelSteamProfile;
    QLineEdit *lineEditSteamProfile;
    QLabel *labelSteamID64;
    QLineEdit *lineEditSteamID64;
    QLabel *labelLocation;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxLocationEdit;
    QLineEdit *lineEditLocation;
    QLabel *labelYourProfile;
    QComboBox *comboBoxUsers;
    QLabel *labelSteamUserdataFolder;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditUserdataFolder;
    QToolButton *toolButtonConfirmUserdataFolder;
    QLabel *labelScreenshotFile;
    QComboBox *comboBoxScreenshotFile;
    QLabel *labelGame;
    QComboBox *comboBoxGame;
    QLabel *labelImagePreviewPixel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(404, 467);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(404, 467));
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButtonHelp = new QPushButton(centralWidget);
        pushButtonHelp->setObjectName(QStringLiteral("pushButtonHelp"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonHelp->sizePolicy().hasHeightForWidth());
        pushButtonHelp->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButtonHelp);

        pushButtonAbout = new QPushButton(centralWidget);
        pushButtonAbout->setObjectName(QStringLiteral("pushButtonAbout"));
        sizePolicy1.setHeightForWidth(pushButtonAbout->sizePolicy().hasHeightForWidth());
        pushButtonAbout->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButtonAbout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonRunTagFriend = new QPushButton(centralWidget);
        pushButtonRunTagFriend->setObjectName(QStringLiteral("pushButtonRunTagFriend"));
        pushButtonRunTagFriend->setEnabled(false);
        sizePolicy1.setHeightForWidth(pushButtonRunTagFriend->sizePolicy().hasHeightForWidth());
        pushButtonRunTagFriend->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButtonRunTagFriend);


        gridLayout->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        labelSteamProfile = new QLabel(centralWidget);
        labelSteamProfile->setObjectName(QStringLiteral("labelSteamProfile"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, labelSteamProfile);

        lineEditSteamProfile = new QLineEdit(centralWidget);
        lineEditSteamProfile->setObjectName(QStringLiteral("lineEditSteamProfile"));
        lineEditSteamProfile->setEnabled(false);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, lineEditSteamProfile);

        labelSteamID64 = new QLabel(centralWidget);
        labelSteamID64->setObjectName(QStringLiteral("labelSteamID64"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, labelSteamID64);

        lineEditSteamID64 = new QLineEdit(centralWidget);
        lineEditSteamID64->setObjectName(QStringLiteral("lineEditSteamID64"));
        lineEditSteamID64->setEnabled(false);

        formLayout_2->setWidget(8, QFormLayout::FieldRole, lineEditSteamID64);

        labelLocation = new QLabel(centralWidget);
        labelLocation->setObjectName(QStringLiteral("labelLocation"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, labelLocation);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkBoxLocationEdit = new QCheckBox(centralWidget);
        checkBoxLocationEdit->setObjectName(QStringLiteral("checkBoxLocationEdit"));

        horizontalLayout_3->addWidget(checkBoxLocationEdit);

        lineEditLocation = new QLineEdit(centralWidget);
        lineEditLocation->setObjectName(QStringLiteral("lineEditLocation"));
        lineEditLocation->setEnabled(false);
        lineEditLocation->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(lineEditLocation);


        formLayout_2->setLayout(9, QFormLayout::FieldRole, horizontalLayout_3);

        labelYourProfile = new QLabel(centralWidget);
        labelYourProfile->setObjectName(QStringLiteral("labelYourProfile"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelYourProfile);

        comboBoxUsers = new QComboBox(centralWidget);
        comboBoxUsers->setObjectName(QStringLiteral("comboBoxUsers"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, comboBoxUsers);

        labelSteamUserdataFolder = new QLabel(centralWidget);
        labelSteamUserdataFolder->setObjectName(QStringLiteral("labelSteamUserdataFolder"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelSteamUserdataFolder);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEditUserdataFolder = new QLineEdit(centralWidget);
        lineEditUserdataFolder->setObjectName(QStringLiteral("lineEditUserdataFolder"));
        lineEditUserdataFolder->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(lineEditUserdataFolder);

        toolButtonConfirmUserdataFolder = new QToolButton(centralWidget);
        toolButtonConfirmUserdataFolder->setObjectName(QStringLiteral("toolButtonConfirmUserdataFolder"));
        toolButtonConfirmUserdataFolder->setEnabled(false);

        horizontalLayout->addWidget(toolButtonConfirmUserdataFolder);


        formLayout_2->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        labelScreenshotFile = new QLabel(centralWidget);
        labelScreenshotFile->setObjectName(QStringLiteral("labelScreenshotFile"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, labelScreenshotFile);

        comboBoxScreenshotFile = new QComboBox(centralWidget);
        comboBoxScreenshotFile->setObjectName(QStringLiteral("comboBoxScreenshotFile"));
        comboBoxScreenshotFile->setEnabled(false);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, comboBoxScreenshotFile);

        labelGame = new QLabel(centralWidget);
        labelGame->setObjectName(QStringLiteral("labelGame"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, labelGame);

        comboBoxGame = new QComboBox(centralWidget);
        comboBoxGame->setObjectName(QStringLiteral("comboBoxGame"));
        comboBoxGame->setEnabled(false);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, comboBoxGame);


        gridLayout->addLayout(formLayout_2, 2, 1, 1, 1);

        labelImagePreviewPixel = new QLabel(centralWidget);
        labelImagePreviewPixel->setObjectName(QStringLiteral("labelImagePreviewPixel"));
        labelImagePreviewPixel->setMinimumSize(QSize(0, 0));
        labelImagePreviewPixel->setScaledContents(false);

        gridLayout->addWidget(labelImagePreviewPixel, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
#ifndef QT_NO_SHORTCUT
        labelSteamProfile->setBuddy(lineEditSteamProfile);
        labelSteamID64->setBuddy(lineEditSteamID64);
        labelLocation->setBuddy(checkBoxLocationEdit);
        labelYourProfile->setBuddy(comboBoxUsers);
        labelSteamUserdataFolder->setBuddy(lineEditUserdataFolder);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(comboBoxUsers, lineEditSteamProfile);
        QWidget::setTabOrder(lineEditSteamProfile, lineEditSteamID64);
        QWidget::setTabOrder(lineEditSteamID64, checkBoxLocationEdit);
        QWidget::setTabOrder(checkBoxLocationEdit, lineEditLocation);
        QWidget::setTabOrder(lineEditLocation, pushButtonRunTagFriend);
        QWidget::setTabOrder(pushButtonRunTagFriend, pushButtonHelp);
        QWidget::setTabOrder(pushButtonHelp, pushButtonAbout);
        QWidget::setTabOrder(pushButtonAbout, pushButton);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SFT - Steam Friends Tagger", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        pushButtonHelp->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        pushButtonAbout->setText(QApplication::translate("MainWindow", "About SFT", Q_NULLPTR));
        pushButtonRunTagFriend->setText(QApplication::translate("MainWindow", "Tag Friend!", Q_NULLPTR));
        labelSteamProfile->setText(QApplication::translate("MainWindow", "Friend Profile:", Q_NULLPTR));
        labelSteamID64->setText(QApplication::translate("MainWindow", "Friend ID64:", Q_NULLPTR));
        labelLocation->setText(QApplication::translate("MainWindow", "Location (Map):", Q_NULLPTR));
        checkBoxLocationEdit->setText(QString());
        labelYourProfile->setText(QApplication::translate("MainWindow", "Your Profile:", Q_NULLPTR));
        labelSteamUserdataFolder->setText(QApplication::translate("MainWindow", "Steam  Folder:", Q_NULLPTR));
        lineEditUserdataFolder->setText(QString());
        toolButtonConfirmUserdataFolder->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        labelScreenshotFile->setText(QApplication::translate("MainWindow", "Screenshot:", Q_NULLPTR));
        labelGame->setText(QApplication::translate("MainWindow", "Game:", Q_NULLPTR));
        labelImagePreviewPixel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
