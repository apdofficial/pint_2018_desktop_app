/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditHost;
    QLabel *label_8;
    QPushButton *buttonPing;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBoxPort;
    QPushButton *buttonConnect;
    QLabel *label_9;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditPassword;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEditTopic;
    QLabel *label_5;
    QSpinBox *spinQoS;
    QPushButton *buttonSubscribe;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *lineEditMessage;
    QLabel *label_6;
    QSpinBox *spinQoS_2;
    QLabel *label_7;
    QCheckBox *checkBoxRetain;
    QPushButton *buttonPublish;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *editLog;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonQuit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 768);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEditHost = new QLineEdit(groupBox_3);
        lineEditHost->setObjectName(QString::fromUtf8("lineEditHost"));

        gridLayout_2->addWidget(lineEditHost, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        buttonPing = new QPushButton(groupBox_3);
        buttonPing->setObjectName(QString::fromUtf8("buttonPing"));

        gridLayout_2->addWidget(buttonPing, 1, 2, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        spinBoxPort = new QSpinBox(groupBox_3);
        spinBoxPort->setObjectName(QString::fromUtf8("spinBoxPort"));
        spinBoxPort->setMaximum(99999);
        spinBoxPort->setValue(1883);

        gridLayout_2->addWidget(spinBoxPort, 1, 1, 1, 1);

        buttonConnect = new QPushButton(groupBox_3);
        buttonConnect->setObjectName(QString::fromUtf8("buttonConnect"));

        gridLayout_2->addWidget(buttonConnect, 0, 2, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        lineEditUser = new QLineEdit(groupBox_3);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));

        gridLayout_2->addWidget(lineEditUser, 2, 1, 1, 1);

        lineEditPassword = new QLineEdit(groupBox_3);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEditPassword, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout_4->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineEditTopic = new QLineEdit(groupBox_2);
        lineEditTopic->setObjectName(QString::fromUtf8("lineEditTopic"));

        gridLayout->addWidget(lineEditTopic, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        spinQoS = new QSpinBox(groupBox_2);
        spinQoS->setObjectName(QString::fromUtf8("spinQoS"));
        spinQoS->setMaximum(2);

        gridLayout->addWidget(spinQoS, 1, 1, 1, 1);

        buttonSubscribe = new QPushButton(groupBox_2);
        buttonSubscribe->setObjectName(QString::fromUtf8("buttonSubscribe"));

        gridLayout->addWidget(buttonSubscribe, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        lineEditMessage = new QLineEdit(groupBox_4);
        lineEditMessage->setObjectName(QString::fromUtf8("lineEditMessage"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditMessage);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        spinQoS_2 = new QSpinBox(groupBox_4);
        spinQoS_2->setObjectName(QString::fromUtf8("spinQoS_2"));
        spinQoS_2->setMaximum(2);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinQoS_2);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        checkBoxRetain = new QCheckBox(groupBox_4);
        checkBoxRetain->setObjectName(QString::fromUtf8("checkBoxRetain"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkBoxRetain);


        verticalLayout_3->addLayout(formLayout);

        buttonPublish = new QPushButton(groupBox_4);
        buttonPublish->setObjectName(QString::fromUtf8("buttonPublish"));

        verticalLayout_3->addWidget(buttonPublish);


        verticalLayout_4->addWidget(groupBox_4);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        editLog = new QPlainTextEdit(groupBox);
        editLog->setObjectName(QString::fromUtf8("editLog"));

        horizontalLayout_2->addWidget(editLog);


        verticalLayout_4->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonQuit = new QPushButton(centralWidget);
        buttonQuit->setObjectName(QString::fromUtf8("buttonQuit"));

        horizontalLayout_3->addWidget(buttonQuit);


        verticalLayout_4->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Connection", nullptr));
        lineEditHost->setText(QApplication::translate("MainWindow", "io.adafruit.com", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Username:", nullptr));
        buttonPing->setText(QApplication::translate("MainWindow", "Ping", nullptr));
        label->setText(QApplication::translate("MainWindow", "Host:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Port:", nullptr));
        buttonConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Password:", nullptr));
        lineEditUser->setText(QApplication::translate("MainWindow", "Vali5681", nullptr));
        lineEditPassword->setText(QApplication::translate("MainWindow", "22764f028972403784a1b7daaa2c5527", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Subscriptions", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Topic:", nullptr));
        lineEditTopic->setText(QApplication::translate("MainWindow", "Vali5681/feeds/patient-watch-publish", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "QoS:", nullptr));
        buttonSubscribe->setText(QApplication::translate("MainWindow", "Subscribe", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Messages", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Content:", nullptr));
        lineEditMessage->setText(QApplication::translate("MainWindow", "Test", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "QoS:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Retain:", nullptr));
        checkBoxRetain->setText(QString());
        buttonPublish->setText(QApplication::translate("MainWindow", "Publish", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Log Messages", nullptr));
        buttonQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
