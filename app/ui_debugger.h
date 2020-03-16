/********************************************************************************
** Form generated from reading UI file 'debugger.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGGER_H
#define UI_DEBUGGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Debugger
{
public:
    QWidget *centralWidget;
    QPushButton *add_money;
    QPushButton *add_inventory_pencil;
    QPushButton *add_total_pencil;
    QPushButton *add_wood_graphite;
    QLabel *label;
    QPushButton *add_intelligence;
    QPushButton *add_marketing;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Debugger)
    {
        if (Debugger->objectName().isEmpty())
            Debugger->setObjectName(QStringLiteral("Debugger"));
        Debugger->resize(545, 508);
        Debugger->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(Debugger);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        add_money = new QPushButton(centralWidget);
        add_money->setObjectName(QStringLiteral("add_money"));
        add_money->setGeometry(QRect(120, 90, 281, 41));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        font.setPointSize(15);
        font.setBold(false);
        font.setWeight(50);
        add_money->setFont(font);
        add_money->setStyleSheet(QStringLiteral("background-color: rgb(118, 149, 252);"));
        add_inventory_pencil = new QPushButton(centralWidget);
        add_inventory_pencil->setObjectName(QStringLiteral("add_inventory_pencil"));
        add_inventory_pencil->setGeometry(QRect(120, 150, 281, 41));
        add_inventory_pencil->setFont(font);
        add_inventory_pencil->setStyleSheet(QStringLiteral("background-color: rgb(118, 149, 252);"));
        add_total_pencil = new QPushButton(centralWidget);
        add_total_pencil->setObjectName(QStringLiteral("add_total_pencil"));
        add_total_pencil->setGeometry(QRect(120, 210, 281, 41));
        add_total_pencil->setFont(font);
        add_total_pencil->setStyleSheet(QStringLiteral("background-color: rgb(118, 149, 252);"));
        add_wood_graphite = new QPushButton(centralWidget);
        add_wood_graphite->setObjectName(QStringLiteral("add_wood_graphite"));
        add_wood_graphite->setGeometry(QRect(120, 270, 281, 41));
        add_wood_graphite->setFont(font);
        add_wood_graphite->setStyleSheet(QStringLiteral("background-color: rgb(118, 149, 252);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 371, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("FreeSans"));
        font1.setPointSize(25);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        add_intelligence = new QPushButton(centralWidget);
        add_intelligence->setObjectName(QStringLiteral("add_intelligence"));
        add_intelligence->setGeometry(QRect(120, 330, 281, 41));
        add_intelligence->setFont(font);
        add_intelligence->setStyleSheet(QStringLiteral("background-color: rgb(118, 149, 252);"));
        add_marketing = new QPushButton(centralWidget);
        add_marketing->setObjectName(QStringLiteral("add_marketing"));
        add_marketing->setGeometry(QRect(120, 390, 281, 41));
        add_marketing->setFont(font);
        add_marketing->setStyleSheet(QStringLiteral("background-color: rgb(118, 149, 252);"));
        Debugger->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Debugger);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 545, 22));
        Debugger->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Debugger);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Debugger->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Debugger);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Debugger->setStatusBar(statusBar);

        retranslateUi(Debugger);

        QMetaObject::connectSlotsByName(Debugger);
    } // setupUi

    void retranslateUi(QMainWindow *Debugger)
    {
        Debugger->setWindowTitle(QApplication::translate("Debugger", "Debugger", 0));
        add_money->setText(QApplication::translate("Debugger", "+1000$", 0));
        add_inventory_pencil->setText(QApplication::translate("Debugger", "+1000 Pencils to Inventory", 0));
        add_total_pencil->setText(QApplication::translate("Debugger", "+1000 Pencils Total", 0));
        add_wood_graphite->setText(QApplication::translate("Debugger", "+10m Wood and Graphite", 0));
        label->setText(QApplication::translate("Debugger", "Debugger", 0));
        add_intelligence->setText(QApplication::translate("Debugger", "+10 Intelegence", 0));
        add_marketing->setText(QApplication::translate("Debugger", "+3 Marketing", 0));
    } // retranslateUi

};

namespace Ui {
    class Debugger: public Ui_Debugger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGGER_H
