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
    QFormLayout *formLayout_2;
    QLabel *labelSreenshotFile;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditImageFile;
    QToolButton *toolButtonOpenImageFile;
    QLabel *labelSteamProfile;
    QLineEdit *lineEditSteamProfile;
    QLabel *labelSteamID64;
    QLineEdit *lineEditSteamID64;
    QLabel *labelLocation;
    QLineEdit *lineEditLocation;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonAbout;
    QPushButton *pushButtonHelp;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonRunTagFriend;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(551, 151);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        labelSreenshotFile = new QLabel(centralWidget);
        labelSreenshotFile->setObjectName(QStringLiteral("labelSreenshotFile"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelSreenshotFile);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEditImageFile = new QLineEdit(centralWidget);
        lineEditImageFile->setObjectName(QStringLiteral("lineEditImageFile"));
        lineEditImageFile->setMinimumSize(QSize(400, 0));

        horizontalLayout->addWidget(lineEditImageFile);

        toolButtonOpenImageFile = new QToolButton(centralWidget);
        toolButtonOpenImageFile->setObjectName(QStringLiteral("toolButtonOpenImageFile"));

        horizontalLayout->addWidget(toolButtonOpenImageFile);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        labelSteamProfile = new QLabel(centralWidget);
        labelSteamProfile->setObjectName(QStringLiteral("labelSteamProfile"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelSteamProfile);

        lineEditSteamProfile = new QLineEdit(centralWidget);
        lineEditSteamProfile->setObjectName(QStringLiteral("lineEditSteamProfile"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEditSteamProfile);

        labelSteamID64 = new QLabel(centralWidget);
        labelSteamID64->setObjectName(QStringLiteral("labelSteamID64"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelSteamID64);

        lineEditSteamID64 = new QLineEdit(centralWidget);
        lineEditSteamID64->setObjectName(QStringLiteral("lineEditSteamID64"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEditSteamID64);

        labelLocation = new QLabel(centralWidget);
        labelLocation->setObjectName(QStringLiteral("labelLocation"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelLocation);

        lineEditLocation = new QLineEdit(centralWidget);
        lineEditLocation->setObjectName(QStringLiteral("lineEditLocation"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEditLocation);


        gridLayout->addLayout(formLayout_2, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushButtonAbout = new QPushButton(centralWidget);
        pushButtonAbout->setObjectName(QStringLiteral("pushButtonAbout"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonAbout->sizePolicy().hasHeightForWidth());
        pushButtonAbout->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButtonAbout);

        pushButtonHelp = new QPushButton(centralWidget);
        pushButtonHelp->setObjectName(QStringLiteral("pushButtonHelp"));
        sizePolicy1.setHeightForWidth(pushButtonHelp->sizePolicy().hasHeightForWidth());
        pushButtonHelp->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButtonHelp);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonRunTagFriend = new QPushButton(centralWidget);
        pushButtonRunTagFriend->setObjectName(QStringLiteral("pushButtonRunTagFriend"));
        sizePolicy1.setHeightForWidth(pushButtonRunTagFriend->sizePolicy().hasHeightForWidth());
        pushButtonRunTagFriend->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButtonRunTagFriend);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SFT - Steam Friends Tagger - v0.1", Q_NULLPTR));
        labelSreenshotFile->setText(QApplication::translate("MainWindow", "Screenshot File:", Q_NULLPTR));
        toolButtonOpenImageFile->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        labelSteamProfile->setText(QApplication::translate("MainWindow", "Steam User Profile:", Q_NULLPTR));
        labelSteamID64->setText(QApplication::translate("MainWindow", "Steam User ID64:", Q_NULLPTR));
        labelLocation->setText(QApplication::translate("MainWindow", "Location (Map):", Q_NULLPTR));
        pushButtonAbout->setText(QApplication::translate("MainWindow", "About SFT", Q_NULLPTR));
        pushButtonHelp->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        pushButtonRunTagFriend->setText(QApplication::translate("MainWindow", "Tag Friend!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
