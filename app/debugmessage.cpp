#include "debugmessage.h"
#include "ui_debugmessage.h"

DebugMessage::DebugMessage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DebugMessage)
{
    ui->setupUi(this);
}

DebugMessage::~DebugMessage()
{
    delete ui;
}
