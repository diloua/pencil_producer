#ifndef DEBUGMESSAGE_H
#define DEBUGMESSAGE_H

#include <QDialog>

namespace Ui {
class DebugMessage;
}

class DebugMessage : public QDialog
{
    Q_OBJECT

public:
    explicit DebugMessage(QWidget *parent = 0);
    ~DebugMessage();

private:
    Ui::DebugMessage *ui;
};

#endif // DEBUGMESSAGE_H
