/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_9;
    QPushButton *pushButton_BuyMore;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_DecreasePencilPrice;
    QPushButton *pushButton_BuyWood;
    QPushButton *pushButton_Make_Pencil;
    QLabel *label_8;
    QPushButton *pushButton_IncreasePencilPrice;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton_BuyGraphite;
    QLabel *label_Pencil_Price;
    QLabel *label_WoodLeft;
    QLabel *label_GraphiteLeft;
    QLabel *label_BankBalance;
    QLabel *label_11;
    QLabel *label_WoodPrice;
    QLabel *label_12;
    QLabel *label_GraphitePrice;
    QLabel *label_APMPrice;
    QLabel *label_pencilsProduced;
    QLabel *label_pencilsInvent;
    QLabel *label_buyrate;
    QLabel *label_APMCount;
    QLabel *label_APM_Rate;
    QLabel *label_15;
    QCheckBox *checkBox_Debug;
    QLabel *label_Intelligence;
    QLabel *label_IntelligenceQuantity;
    QPushButton *pushButton_buyMarketing;
    QPushButton *pushButton_ActivateMarketing;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Upgrade_APM;
    QLabel *label_16;
    QPushButton *quit;
    QLabel *label_17;
    QLabel *label_Marketing;
    QLabel *label_10;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(910, 630);
        MainWindow->setMinimumSize(QSize(10, 10));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(237,237,237);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, -10, 301, 91));
        label->setMinimumSize(QSize(3, 3));
        label->setSizeIncrement(QSize(2, 2));
        QFont font1;
        font1.setFamily(QStringLiteral("FreeSans"));
        font1.setPointSize(30);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 260, 61, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("FreeSans"));
        font2.setPointSize(11);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(530, 299, 111, 21));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_BuyMore = new QPushButton(centralWidget);
        pushButton_BuyMore->setObjectName(QStringLiteral("pushButton_BuyMore"));
        pushButton_BuyMore->setGeometry(QRect(520, 470, 161, 91));
        QFont font3;
        font3.setFamily(QStringLiteral("FreeSans"));
        font3.setPointSize(15);
        pushButton_BuyMore->setFont(font3);
        pushButton_BuyMore->setAutoFillBackground(false);
        pushButton_BuyMore->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: white;"));
        pushButton_BuyMore->setCheckable(false);
        pushButton_BuyMore->setFlat(false);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 290, 101, 21));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 320, 71, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("FreeSans"));
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_6->setFont(font4);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_DecreasePencilPrice = new QPushButton(centralWidget);
        pushButton_DecreasePencilPrice->setObjectName(QStringLiteral("pushButton_DecreasePencilPrice"));
        pushButton_DecreasePencilPrice->setGeometry(QRect(250, 280, 51, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("FreeSans"));
        font5.setPointSize(18);
        pushButton_DecreasePencilPrice->setFont(font5);
        pushButton_DecreasePencilPrice->setAutoFillBackground(false);
        pushButton_DecreasePencilPrice->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 0);"));
        pushButton_DecreasePencilPrice->setCheckable(false);
        pushButton_DecreasePencilPrice->setFlat(false);
        pushButton_BuyWood = new QPushButton(centralWidget);
        pushButton_BuyWood->setObjectName(QStringLiteral("pushButton_BuyWood"));
        pushButton_BuyWood->setGeometry(QRect(40, 470, 171, 91));
        pushButton_BuyWood->setFont(font3);
        pushButton_BuyWood->setAutoFillBackground(false);
        pushButton_BuyWood->setStyleSheet(QLatin1String("background-color: rgb(139,69,19);\n"
"color: white;"));
        pushButton_BuyWood->setCheckable(false);
        pushButton_BuyWood->setFlat(false);
        pushButton_Make_Pencil = new QPushButton(centralWidget);
        pushButton_Make_Pencil->setObjectName(QStringLiteral("pushButton_Make_Pencil"));
        pushButton_Make_Pencil->setGeometry(QRect(40, 60, 181, 121));
        QFont font6;
        font6.setFamily(QStringLiteral("FreeSans"));
        font6.setPointSize(15);
        font6.setBold(false);
        font6.setWeight(50);
        pushButton_Make_Pencil->setFont(font6);
        pushButton_Make_Pencil->setAutoFillBackground(false);
        pushButton_Make_Pencil->setStyleSheet(QLatin1String("background-color: blue;\n"
"color: white;"));
        pushButton_Make_Pencil->setCheckable(false);
        pushButton_Make_Pencil->setFlat(false);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(530, 240, 61, 21));
        label_8->setMinimumSize(QSize(3, 3));
        label_8->setSizeIncrement(QSize(2, 2));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8->setMargin(1);
        pushButton_IncreasePencilPrice = new QPushButton(centralWidget);
        pushButton_IncreasePencilPrice->setObjectName(QStringLiteral("pushButton_IncreasePencilPrice"));
        pushButton_IncreasePencilPrice->setGeometry(QRect(190, 280, 51, 31));
        QFont font7;
        font7.setFamily(QStringLiteral("FreeSans"));
        font7.setPointSize(12);
        pushButton_IncreasePencilPrice->setFont(font7);
        pushButton_IncreasePencilPrice->setAutoFillBackground(false);
        pushButton_IncreasePencilPrice->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 0);"));
        pushButton_IncreasePencilPrice->setCheckable(false);
        pushButton_IncreasePencilPrice->setFlat(false);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 350, 91, 21));
        label_7->setFont(font4);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 200, 81, 21));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 230, 71, 20));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_BuyGraphite = new QPushButton(centralWidget);
        pushButton_BuyGraphite->setObjectName(QStringLiteral("pushButton_BuyGraphite"));
        pushButton_BuyGraphite->setGeometry(QRect(230, 470, 161, 91));
        pushButton_BuyGraphite->setFont(font3);
        pushButton_BuyGraphite->setAutoFillBackground(false);
        pushButton_BuyGraphite->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: white;"));
        pushButton_BuyGraphite->setCheckable(false);
        pushButton_BuyGraphite->setFlat(false);
        label_Pencil_Price = new QLabel(centralWidget);
        label_Pencil_Price->setObjectName(QStringLiteral("label_Pencil_Price"));
        label_Pencil_Price->setGeometry(QRect(160, 290, 21, 21));
        QFont font8;
        font8.setFamily(QStringLiteral("FreeSans"));
        font8.setPointSize(10);
        font8.setKerning(false);
        label_Pencil_Price->setFont(font8);
        label_Pencil_Price->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_WoodLeft = new QLabel(centralWidget);
        label_WoodLeft->setObjectName(QStringLiteral("label_WoodLeft"));
        label_WoodLeft->setGeometry(QRect(120, 320, 21, 21));
        QFont font9;
        font9.setFamily(QStringLiteral("FreeSans"));
        font9.setPointSize(10);
        label_WoodLeft->setFont(font9);
        label_WoodLeft->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_GraphiteLeft = new QLabel(centralWidget);
        label_GraphiteLeft->setObjectName(QStringLiteral("label_GraphiteLeft"));
        label_GraphiteLeft->setGeometry(QRect(140, 350, 21, 21));
        label_GraphiteLeft->setFont(font9);
        label_GraphiteLeft->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_BankBalance = new QLabel(centralWidget);
        label_BankBalance->setObjectName(QStringLiteral("label_BankBalance"));
        label_BankBalance->setGeometry(QRect(600, 240, 31, 21));
        label_BankBalance->setFont(font8);
        label_BankBalance->setStyleSheet(QStringLiteral("color: rgb(85, 170, 0);"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 380, 81, 21));
        label_11->setFont(font2);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_WoodPrice = new QLabel(centralWidget);
        label_WoodPrice->setObjectName(QStringLiteral("label_WoodPrice"));
        label_WoodPrice->setGeometry(QRect(140, 380, 21, 21));
        label_WoodPrice->setFont(font9);
        label_WoodPrice->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 410, 101, 21));
        label_12->setFont(font2);
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_GraphitePrice = new QLabel(centralWidget);
        label_GraphitePrice->setObjectName(QStringLiteral("label_GraphitePrice"));
        label_GraphitePrice->setGeometry(QRect(160, 410, 21, 21));
        label_GraphitePrice->setFont(font9);
        label_GraphitePrice->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_APMPrice = new QLabel(centralWidget);
        label_APMPrice->setObjectName(QStringLiteral("label_APMPrice"));
        label_APMPrice->setGeometry(QRect(610, 330, 21, 21));
        label_APMPrice->setFont(font8);
        label_pencilsProduced = new QLabel(centralWidget);
        label_pencilsProduced->setObjectName(QStringLiteral("label_pencilsProduced"));
        label_pencilsProduced->setGeometry(QRect(140, 200, 31, 21));
        label_pencilsProduced->setFont(font8);
        label_pencilsProduced->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_pencilsInvent = new QLabel(centralWidget);
        label_pencilsInvent->setObjectName(QStringLiteral("label_pencilsInvent"));
        label_pencilsInvent->setGeometry(QRect(140, 230, 21, 21));
        label_pencilsInvent->setFont(font8);
        label_pencilsInvent->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_buyrate = new QLabel(centralWidget);
        label_buyrate->setObjectName(QStringLiteral("label_buyrate"));
        label_buyrate->setGeometry(QRect(140, 260, 71, 20));
        QFont font10;
        font10.setFamily(QStringLiteral("FreeSans"));
        font10.setPointSize(10);
        font10.setBold(false);
        font10.setWeight(50);
        font10.setKerning(false);
        label_buyrate->setFont(font10);
        label_buyrate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_APMCount = new QLabel(centralWidget);
        label_APMCount->setObjectName(QStringLiteral("label_APMCount"));
        label_APMCount->setGeometry(QRect(650, 300, 21, 21));
        label_APMCount->setFont(font10);
        label_APM_Rate = new QLabel(centralWidget);
        label_APM_Rate->setObjectName(QStringLiteral("label_APM_Rate"));
        label_APM_Rate->setGeometry(QRect(610, 360, 21, 21));
        label_APM_Rate->setFont(font8);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(530, 330, 81, 21));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        checkBox_Debug = new QCheckBox(centralWidget);
        checkBox_Debug->setObjectName(QStringLiteral("checkBox_Debug"));
        checkBox_Debug->setGeometry(QRect(240, 100, 81, 31));
        checkBox_Debug->setFont(font9);
        checkBox_Debug->setIconSize(QSize(20, 20));
        label_Intelligence = new QLabel(centralWidget);
        label_Intelligence->setObjectName(QStringLiteral("label_Intelligence"));
        label_Intelligence->setEnabled(true);
        label_Intelligence->setGeometry(QRect(530, 270, 101, 21));
        label_Intelligence->setFont(font);
        label_Intelligence->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_IntelligenceQuantity = new QLabel(centralWidget);
        label_IntelligenceQuantity->setObjectName(QStringLiteral("label_IntelligenceQuantity"));
        label_IntelligenceQuantity->setGeometry(QRect(620, 270, 21, 21));
        label_IntelligenceQuantity->setFont(font8);
        pushButton_buyMarketing = new QPushButton(centralWidget);
        pushButton_buyMarketing->setObjectName(QStringLiteral("pushButton_buyMarketing"));
        pushButton_buyMarketing->setEnabled(true);
        pushButton_buyMarketing->setGeometry(QRect(690, 150, 141, 51));
        pushButton_buyMarketing->setFont(font7);
        pushButton_ActivateMarketing = new QPushButton(centralWidget);
        pushButton_ActivateMarketing->setObjectName(QStringLiteral("pushButton_ActivateMarketing"));
        pushButton_ActivateMarketing->setGeometry(QRect(530, 150, 141, 51));
        pushButton_ActivateMarketing->setFont(font7);
        pushButton_Save = new QPushButton(centralWidget);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));
        pushButton_Save->setGeometry(QRect(530, 60, 141, 81));
        QFont font11;
        font11.setFamily(QStringLiteral("FreeSans"));
        font11.setPointSize(15);
        font11.setKerning(true);
        pushButton_Save->setFont(font11);
        pushButton_Save->setStyleSheet(QLatin1String("background-color: rgb(117, 80, 123);\n"
"color: white;"));
        pushButton_Upgrade_APM = new QPushButton(centralWidget);
        pushButton_Upgrade_APM->setObjectName(QStringLiteral("pushButton_Upgrade_APM"));
        pushButton_Upgrade_APM->setGeometry(QRect(700, 470, 161, 91));
        pushButton_Upgrade_APM->setFont(font3);
        pushButton_Upgrade_APM->setAutoFillBackground(false);
        pushButton_Upgrade_APM->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 0);\n"
"color: white;"));
        pushButton_Upgrade_APM->setCheckable(false);
        pushButton_Upgrade_APM->setFlat(false);
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(530, 360, 71, 21));
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        quit = new QPushButton(centralWidget);
        quit->setObjectName(QStringLiteral("quit"));
        quit->setGeometry(QRect(690, 60, 141, 81));
        QFont font12;
        font12.setPointSize(15);
        quit->setFont(font12);
        quit->setStyleSheet(QLatin1String("background-color: rgb(164, 0, 0);\n"
"color: white;\n"
""));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(530, 390, 71, 21));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_Marketing = new QLabel(centralWidget);
        label_Marketing->setObjectName(QStringLiteral("label_Marketing"));
        label_Marketing->setGeometry(QRect(610, 390, 21, 21));
        label_Marketing->setFont(font8);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(260, 140, 111, 17));
        label_10->setFont(font9);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 910, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        pushButton_BuyWood->setDefault(false);
        pushButton_Save->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Pencil Producer", 0));
        label_3->setText(QApplication::translate("MainWindow", "Demand:", 0));
        label_9->setText(QApplication::translate("MainWindow", "AutoPencil2000:", 0));
        pushButton_BuyMore->setText(QApplication::translate("MainWindow", "Buy APM", 0));
        label_5->setText(QApplication::translate("MainWindow", "Price of Pencil:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Wood left:", 0));
        pushButton_DecreasePencilPrice->setText(QApplication::translate("MainWindow", "-", 0));
        pushButton_BuyWood->setText(QApplication::translate("MainWindow", "Buy Wood", 0));
        pushButton_Make_Pencil->setText(QApplication::translate("MainWindow", "Produce Pencil", 0));
        label_8->setText(QApplication::translate("MainWindow", "Money:", 0));
        pushButton_IncreasePencilPrice->setText(QApplication::translate("MainWindow", "+", 0));
        label_7->setText(QApplication::translate("MainWindow", "Graphite left:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Produced:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Inventory:", 0));
        pushButton_BuyGraphite->setText(QApplication::translate("MainWindow", "Buy Graphite", 0));
        label_Pencil_Price->setText(QApplication::translate("MainWindow", "0", 0));
        label_WoodLeft->setText(QApplication::translate("MainWindow", "0", 0));
        label_GraphiteLeft->setText(QApplication::translate("MainWindow", "0", 0));
        label_BankBalance->setText(QApplication::translate("MainWindow", "0", 0));
        label_11->setText(QApplication::translate("MainWindow", "Wood Price:", 0));
        label_WoodPrice->setText(QApplication::translate("MainWindow", "0", 0));
        label_12->setText(QApplication::translate("MainWindow", "Graphite Price:", 0));
        label_GraphitePrice->setText(QApplication::translate("MainWindow", "0", 0));
        label_APMPrice->setText(QApplication::translate("MainWindow", "0", 0));
        label_pencilsProduced->setText(QApplication::translate("MainWindow", "0", 0));
        label_pencilsInvent->setText(QApplication::translate("MainWindow", "0", 0));
        label_buyrate->setText(QApplication::translate("MainWindow", "0", 0));
        label_APMCount->setText(QApplication::translate("MainWindow", "0", 0));
        label_APM_Rate->setText(QApplication::translate("MainWindow", "0", 0));
        label_15->setText(QApplication::translate("MainWindow", "APM Price:", 0));
        checkBox_Debug->setText(QApplication::translate("MainWindow", "Debug", 0));
        label_Intelligence->setText(QApplication::translate("MainWindow", "Intelligence:", 0));
        label_IntelligenceQuantity->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_buyMarketing->setText(QApplication::translate("MainWindow", "Buy Marketing", 0));
        pushButton_ActivateMarketing->setText(QApplication::translate("MainWindow", "Activate Marketing", 0));
        pushButton_Save->setText(QApplication::translate("MainWindow", "Save", 0));
        pushButton_Upgrade_APM->setText(QApplication::translate("MainWindow", "Upgrade APM", 0));
        label_16->setText(QApplication::translate("MainWindow", "APM Rate:", 0));
        quit->setText(QApplication::translate("MainWindow", "Quit", 0));
        label_17->setText(QApplication::translate("MainWindow", "Marketing:", 0));
        label_Marketing->setText(QApplication::translate("MainWindow", "0", 0));
        label_10->setText(QApplication::translate("MainWindow", "invalid", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
