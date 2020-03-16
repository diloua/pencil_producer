/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameOver
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameOver)
    {
        if (GameOver->objectName().isEmpty())
            GameOver->setObjectName(QStringLiteral("GameOver"));
        GameOver->resize(639, 371);
        centralwidget = new QWidget(GameOver);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 70, 481, 131));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 250, 101, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 250, 101, 41));
        GameOver->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameOver);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 639, 22));
        GameOver->setMenuBar(menubar);
        statusbar = new QStatusBar(GameOver);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GameOver->setStatusBar(statusbar);

        retranslateUi(GameOver);

        QMetaObject::connectSlotsByName(GameOver);
    } // setupUi

    void retranslateUi(QMainWindow *GameOver)
    {
        GameOver->setWindowTitle(QApplication::translate("GameOver", "MainWindow", 0));
        label->setText(QApplication::translate("GameOver", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; font-weight:600; color:#ff0000;\">Game Over !</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("GameOver", "Play again!", 0));
        pushButton_2->setText(QApplication::translate("GameOver", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class GameOver: public Ui_GameOver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
