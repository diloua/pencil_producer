#include "debugger.h"
#include "ui_debugger.h"

Debugger::Debugger(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Debugger) {
    ui->setupUi(this);
}

Debugger::~Debugger() {
    delete ui;
}
