/********************************************************************************
** Form generated from reading UI file 'highscore.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHSCORE_H
#define UI_HIGHSCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HighscoreWindow
{
public:
    QWidget *centralWidget;
    QLabel *title;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_10;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HighscoreWindow)
    {
        if (HighscoreWindow->objectName().isEmpty())
            HighscoreWindow->setObjectName(QStringLiteral("HighscoreWindow"));
        HighscoreWindow->resize(340, 570);
        HighscoreWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(HighscoreWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(30, 30, 281, 41));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);
        label_1 = new QLabel(centralWidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setEnabled(true);
        label_1->setGeometry(QRect(30, 90, 281, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("FreeSans"));
        font1.setPointSize(15);
        label_1->setFont(font1);
        label_1->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(30, 130, 281, 21));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);
        label_4->setGeometry(QRect(30, 210, 281, 21));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(30, 170, 281, 21));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(true);
        label_7->setGeometry(QRect(30, 330, 281, 21));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setEnabled(true);
        label_8->setGeometry(QRect(30, 370, 281, 21));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(true);
        label_6->setGeometry(QRect(30, 290, 281, 21));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(30, 250, 281, 21));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setEnabled(true);
        label_9->setGeometry(QRect(30, 410, 281, 21));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setEnabled(true);
        label_10->setGeometry(QRect(30, 450, 281, 21));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);
        HighscoreWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HighscoreWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 340, 22));
        HighscoreWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HighscoreWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HighscoreWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HighscoreWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HighscoreWindow->setStatusBar(statusBar);

        retranslateUi(HighscoreWindow);

        QMetaObject::connectSlotsByName(HighscoreWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HighscoreWindow)
    {
        HighscoreWindow->setWindowTitle(QApplication::translate("HighscoreWindow", "HighscoreWindow", 0));
        title->setText(QApplication::translate("HighscoreWindow", "Leaderboard", 0));
        label_1->setText(QApplication::translate("HighscoreWindow", "Label 1", 0));
        label_2->setText(QApplication::translate("HighscoreWindow", "Label 2", 0));
        label_4->setText(QApplication::translate("HighscoreWindow", "Label 4", 0));
        label_3->setText(QApplication::translate("HighscoreWindow", "Label 3", 0));
        label_7->setText(QApplication::translate("HighscoreWindow", "Label 7", 0));
        label_8->setText(QApplication::translate("HighscoreWindow", "Label 8", 0));
        label_6->setText(QApplication::translate("HighscoreWindow", "Label 6", 0));
        label_5->setText(QApplication::translate("HighscoreWindow", "Label 5", 0));
        label_9->setText(QApplication::translate("HighscoreWindow", "Label 9", 0));
        label_10->setText(QApplication::translate("HighscoreWindow", "Label 10", 0));
    } // retranslateUi

};

namespace Ui {
    class HighscoreWindow: public Ui_HighscoreWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHSCORE_H
