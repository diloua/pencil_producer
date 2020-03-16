/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

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

class Ui_WelcomeWindow
{
public:
    QWidget *centralWidget;
    QPushButton *start_game;
    QPushButton *resume_game;
    QPushButton *get_highscore;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName(QStringLiteral("WelcomeWindow"));
        WelcomeWindow->resize(656, 497);
        WelcomeWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(WelcomeWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        start_game = new QPushButton(centralWidget);
        start_game->setObjectName(QStringLiteral("start_game"));
        start_game->setGeometry(QRect(210, 140, 181, 91));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        font.setPointSize(15);
        font.setBold(false);
        font.setWeight(50);
        start_game->setFont(font);
        start_game->setStyleSheet(QStringLiteral("background-color: rgb(50,205,50);"));
        resume_game = new QPushButton(centralWidget);
        resume_game->setObjectName(QStringLiteral("resume_game"));
        resume_game->setGeometry(QRect(210, 240, 181, 91));
        resume_game->setFont(font);
        resume_game->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41);"));
        get_highscore = new QPushButton(centralWidget);
        get_highscore->setObjectName(QStringLiteral("get_highscore"));
        get_highscore->setGeometry(QRect(210, 340, 181, 91));
        get_highscore->setFont(font);
        get_highscore->setStyleSheet(QStringLiteral("background-color: rgb(118, 149, 252);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 561, 171));
        QFont font1;
        font1.setFamily(QStringLiteral("FreeSans"));
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        WelcomeWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WelcomeWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 656, 22));
        WelcomeWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WelcomeWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WelcomeWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WelcomeWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WelcomeWindow->setStatusBar(statusBar);

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QApplication::translate("WelcomeWindow", "WelcomeWindow", 0));
        start_game->setText(QApplication::translate("WelcomeWindow", "Start Game", 0));
        resume_game->setText(QApplication::translate("WelcomeWindow", "Load Game", 0));
        get_highscore->setText(QApplication::translate("WelcomeWindow", "View Highscore", 0));
        label->setText(QApplication::translate("WelcomeWindow", "Welcome to the Pencil Revolution", 0));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
