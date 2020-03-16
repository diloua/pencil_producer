/********************************************************************************
** Form generated from reading UI file 'debugmessage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGMESSAGE_H
#define UI_DEBUGMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DebugMessage
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *DebugMessage)
    {
        if (DebugMessage->objectName().isEmpty())
            DebugMessage->setObjectName(QStringLiteral("DebugMessage"));
        DebugMessage->resize(400, 300);
        buttonBox = new QDialogButtonBox(DebugMessage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(DebugMessage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 371, 151));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        font.setPointSize(15);
        label->setFont(font);

        retranslateUi(DebugMessage);
        QObject::connect(buttonBox, SIGNAL(accepted()), DebugMessage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DebugMessage, SLOT(reject()));

        QMetaObject::connectSlotsByName(DebugMessage);
    } // setupUi

    void retranslateUi(QDialog *DebugMessage)
    {
        DebugMessage->setWindowTitle(QApplication::translate("DebugMessage", "Dialog", 0));
        label->setText(QApplication::translate("DebugMessage", "Warning! The usage of the debug action is \n"
"only for game developers.", 0));
    } // retranslateUi

};

namespace Ui {
    class DebugMessage: public Ui_DebugMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGMESSAGE_H
