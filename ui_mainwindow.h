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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFormLayout *formLayoutMainForm;
    QLabel *labelSteamUserdataFolder;
    QHBoxLayout *horizontalLayoutFolder;
    QLineEdit *lineEditUserdataFolder;
    QToolButton *toolButtonConfirmUserdataFolder;
    QLabel *labelYourProfile;
    QComboBox *comboBoxUsers;
    QLabel *labelGame;
    QComboBox *comboBoxGame;
    QLabel *labelScreenshotFile;
    QComboBox *comboBoxScreenshotFile;
    QLabel *labelSteamProfile;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButtonFriend;
    QComboBox *comboBoxFriend;
    QLabel *label;
    QLabel *labelSteamID64;
    QLabel *labelLocation;
    QHBoxLayout *horizontalLayoutLocation;
    QCheckBox *checkBoxLocationEdit;
    QLineEdit *lineEditLocation;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonSteamProfile;
    QLineEdit *lineEditSteamProfile;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButtonSteamID64;
    QLineEdit *lineEditSteamID64;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonQuit;
    QPushButton *pushButtonHelp;
    QPushButton *pushButtonAbout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonRunTagFriend;
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
        formLayoutMainForm = new QFormLayout();
        formLayoutMainForm->setSpacing(6);
        formLayoutMainForm->setObjectName(QStringLiteral("formLayoutMainForm"));
        labelSteamUserdataFolder = new QLabel(centralWidget);
        labelSteamUserdataFolder->setObjectName(QStringLiteral("labelSteamUserdataFolder"));

        formLayoutMainForm->setWidget(1, QFormLayout::LabelRole, labelSteamUserdataFolder);

        horizontalLayoutFolder = new QHBoxLayout();
        horizontalLayoutFolder->setSpacing(6);
        horizontalLayoutFolder->setObjectName(QStringLiteral("horizontalLayoutFolder"));
        lineEditUserdataFolder = new QLineEdit(centralWidget);
        lineEditUserdataFolder->setObjectName(QStringLiteral("lineEditUserdataFolder"));
        lineEditUserdataFolder->setMinimumSize(QSize(200, 0));

        horizontalLayoutFolder->addWidget(lineEditUserdataFolder);

        toolButtonConfirmUserdataFolder = new QToolButton(centralWidget);
        toolButtonConfirmUserdataFolder->setObjectName(QStringLiteral("toolButtonConfirmUserdataFolder"));
        toolButtonConfirmUserdataFolder->setEnabled(false);

        horizontalLayoutFolder->addWidget(toolButtonConfirmUserdataFolder);


        formLayoutMainForm->setLayout(1, QFormLayout::FieldRole, horizontalLayoutFolder);

        labelYourProfile = new QLabel(centralWidget);
        labelYourProfile->setObjectName(QStringLiteral("labelYourProfile"));

        formLayoutMainForm->setWidget(3, QFormLayout::LabelRole, labelYourProfile);

        comboBoxUsers = new QComboBox(centralWidget);
        comboBoxUsers->setObjectName(QStringLiteral("comboBoxUsers"));

        formLayoutMainForm->setWidget(3, QFormLayout::FieldRole, comboBoxUsers);

        labelGame = new QLabel(centralWidget);
        labelGame->setObjectName(QStringLiteral("labelGame"));

        formLayoutMainForm->setWidget(5, QFormLayout::LabelRole, labelGame);

        comboBoxGame = new QComboBox(centralWidget);
        comboBoxGame->setObjectName(QStringLiteral("comboBoxGame"));
        comboBoxGame->setEnabled(false);

        formLayoutMainForm->setWidget(5, QFormLayout::FieldRole, comboBoxGame);

        labelScreenshotFile = new QLabel(centralWidget);
        labelScreenshotFile->setObjectName(QStringLiteral("labelScreenshotFile"));

        formLayoutMainForm->setWidget(6, QFormLayout::LabelRole, labelScreenshotFile);

        comboBoxScreenshotFile = new QComboBox(centralWidget);
        comboBoxScreenshotFile->setObjectName(QStringLiteral("comboBoxScreenshotFile"));
        comboBoxScreenshotFile->setEnabled(false);

        formLayoutMainForm->setWidget(6, QFormLayout::FieldRole, comboBoxScreenshotFile);

        labelSteamProfile = new QLabel(centralWidget);
        labelSteamProfile->setObjectName(QStringLiteral("labelSteamProfile"));

        formLayoutMainForm->setWidget(7, QFormLayout::LabelRole, labelSteamProfile);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButtonFriend = new QRadioButton(centralWidget);
        radioButtonFriend->setObjectName(QStringLiteral("radioButtonFriend"));
        radioButtonFriend->setChecked(false);

        horizontalLayout_3->addWidget(radioButtonFriend);

        comboBoxFriend = new QComboBox(centralWidget);
        comboBoxFriend->setObjectName(QStringLiteral("comboBoxFriend"));
        comboBoxFriend->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxFriend->sizePolicy().hasHeightForWidth());
        comboBoxFriend->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(comboBoxFriend);


        formLayoutMainForm->setLayout(7, QFormLayout::FieldRole, horizontalLayout_3);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayoutMainForm->setWidget(9, QFormLayout::LabelRole, label);

        labelSteamID64 = new QLabel(centralWidget);
        labelSteamID64->setObjectName(QStringLiteral("labelSteamID64"));

        formLayoutMainForm->setWidget(11, QFormLayout::LabelRole, labelSteamID64);

        labelLocation = new QLabel(centralWidget);
        labelLocation->setObjectName(QStringLiteral("labelLocation"));

        formLayoutMainForm->setWidget(12, QFormLayout::LabelRole, labelLocation);

        horizontalLayoutLocation = new QHBoxLayout();
        horizontalLayoutLocation->setSpacing(6);
        horizontalLayoutLocation->setObjectName(QStringLiteral("horizontalLayoutLocation"));
        checkBoxLocationEdit = new QCheckBox(centralWidget);
        checkBoxLocationEdit->setObjectName(QStringLiteral("checkBoxLocationEdit"));

        horizontalLayoutLocation->addWidget(checkBoxLocationEdit);

        lineEditLocation = new QLineEdit(centralWidget);
        lineEditLocation->setObjectName(QStringLiteral("lineEditLocation"));
        lineEditLocation->setEnabled(false);
        lineEditLocation->setClearButtonEnabled(false);

        horizontalLayoutLocation->addWidget(lineEditLocation);


        formLayoutMainForm->setLayout(12, QFormLayout::FieldRole, horizontalLayoutLocation);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButtonSteamProfile = new QRadioButton(centralWidget);
        radioButtonSteamProfile->setObjectName(QStringLiteral("radioButtonSteamProfile"));
        radioButtonSteamProfile->setChecked(true);

        horizontalLayout_4->addWidget(radioButtonSteamProfile);

        lineEditSteamProfile = new QLineEdit(centralWidget);
        lineEditSteamProfile->setObjectName(QStringLiteral("lineEditSteamProfile"));
        lineEditSteamProfile->setEnabled(false);

        horizontalLayout_4->addWidget(lineEditSteamProfile);


        formLayoutMainForm->setLayout(9, QFormLayout::FieldRole, horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        radioButtonSteamID64 = new QRadioButton(centralWidget);
        radioButtonSteamID64->setObjectName(QStringLiteral("radioButtonSteamID64"));

        horizontalLayout_5->addWidget(radioButtonSteamID64);

        lineEditSteamID64 = new QLineEdit(centralWidget);
        lineEditSteamID64->setObjectName(QStringLiteral("lineEditSteamID64"));
        lineEditSteamID64->setEnabled(false);

        horizontalLayout_5->addWidget(lineEditSteamID64);


        formLayoutMainForm->setLayout(11, QFormLayout::FieldRole, horizontalLayout_5);


        gridLayout->addLayout(formLayoutMainForm, 8, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushButtonQuit = new QPushButton(centralWidget);
        pushButtonQuit->setObjectName(QStringLiteral("pushButtonQuit"));

        horizontalLayout_2->addWidget(pushButtonQuit);

        pushButtonHelp = new QPushButton(centralWidget);
        pushButtonHelp->setObjectName(QStringLiteral("pushButtonHelp"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonHelp->sizePolicy().hasHeightForWidth());
        pushButtonHelp->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(pushButtonHelp);

        pushButtonAbout = new QPushButton(centralWidget);
        pushButtonAbout->setObjectName(QStringLiteral("pushButtonAbout"));
        sizePolicy2.setHeightForWidth(pushButtonAbout->sizePolicy().hasHeightForWidth());
        pushButtonAbout->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(pushButtonAbout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonRunTagFriend = new QPushButton(centralWidget);
        pushButtonRunTagFriend->setObjectName(QStringLiteral("pushButtonRunTagFriend"));
        pushButtonRunTagFriend->setEnabled(false);
        sizePolicy2.setHeightForWidth(pushButtonRunTagFriend->sizePolicy().hasHeightForWidth());
        pushButtonRunTagFriend->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(pushButtonRunTagFriend);


        gridLayout->addLayout(horizontalLayout_2, 10, 1, 1, 1);

        labelImagePreviewPixel = new QLabel(centralWidget);
        labelImagePreviewPixel->setObjectName(QStringLiteral("labelImagePreviewPixel"));
        labelImagePreviewPixel->setMinimumSize(QSize(0, 0));
        labelImagePreviewPixel->setScaledContents(false);

        gridLayout->addWidget(labelImagePreviewPixel, 9, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
#ifndef QT_NO_SHORTCUT
        labelSteamUserdataFolder->setBuddy(lineEditUserdataFolder);
        labelYourProfile->setBuddy(comboBoxUsers);
        labelGame->setBuddy(comboBoxGame);
        labelScreenshotFile->setBuddy(comboBoxScreenshotFile);
        labelSteamProfile->setBuddy(comboBoxFriend);
        label->setBuddy(lineEditSteamProfile);
        labelSteamID64->setBuddy(lineEditSteamID64);
        labelLocation->setBuddy(checkBoxLocationEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEditUserdataFolder, toolButtonConfirmUserdataFolder);
        QWidget::setTabOrder(toolButtonConfirmUserdataFolder, comboBoxUsers);
        QWidget::setTabOrder(comboBoxUsers, comboBoxGame);
        QWidget::setTabOrder(comboBoxGame, comboBoxScreenshotFile);
        QWidget::setTabOrder(comboBoxScreenshotFile, radioButtonFriend);
        QWidget::setTabOrder(radioButtonFriend, comboBoxFriend);
        QWidget::setTabOrder(comboBoxFriend, radioButtonSteamProfile);
        QWidget::setTabOrder(radioButtonSteamProfile, lineEditSteamProfile);
        QWidget::setTabOrder(lineEditSteamProfile, radioButtonSteamID64);
        QWidget::setTabOrder(radioButtonSteamID64, lineEditSteamID64);
        QWidget::setTabOrder(lineEditSteamID64, checkBoxLocationEdit);
        QWidget::setTabOrder(checkBoxLocationEdit, lineEditLocation);
        QWidget::setTabOrder(lineEditLocation, pushButtonRunTagFriend);
        QWidget::setTabOrder(pushButtonRunTagFriend, pushButtonHelp);
        QWidget::setTabOrder(pushButtonHelp, pushButtonAbout);
        QWidget::setTabOrder(pushButtonAbout, pushButtonQuit);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonQuit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SFT - Steam Friends Tagger", Q_NULLPTR));
        labelSteamUserdataFolder->setText(QApplication::translate("MainWindow", "Steam  Folder:", Q_NULLPTR));
        lineEditUserdataFolder->setText(QString());
        toolButtonConfirmUserdataFolder->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        labelYourProfile->setText(QApplication::translate("MainWindow", "Your Profile:", Q_NULLPTR));
        labelGame->setText(QApplication::translate("MainWindow", "Game:", Q_NULLPTR));
        labelScreenshotFile->setText(QApplication::translate("MainWindow", "Screenshot:", Q_NULLPTR));
        labelSteamProfile->setText(QApplication::translate("MainWindow", "Tag Friend:", Q_NULLPTR));
        radioButtonFriend->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Tag Steam ID:", Q_NULLPTR));
        labelSteamID64->setText(QApplication::translate("MainWindow", "Tag ID64:", Q_NULLPTR));
        labelLocation->setText(QApplication::translate("MainWindow", "Location (Map):", Q_NULLPTR));
        checkBoxLocationEdit->setText(QString());
        radioButtonSteamProfile->setText(QString());
        radioButtonSteamID64->setText(QString());
        pushButtonQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        pushButtonHelp->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        pushButtonAbout->setText(QApplication::translate("MainWindow", "About SFT", Q_NULLPTR));
        pushButtonRunTagFriend->setText(QApplication::translate("MainWindow", "Tag Friend!", Q_NULLPTR));
        labelImagePreviewPixel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
