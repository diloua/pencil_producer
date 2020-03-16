#ifndef DEBUGGER_H
#define DEBUGGER_H

#include <QMainWindow>
#include <QString>
#include <QTimer>

namespace Ui {
class Debugger;
}

//! A Debugger class.
/*! 
*/
class Debugger : public QMainWindow
{
    Q_OBJECT

public:
    //! Construtor
    explicit Debugger(QWidget *parent = nullptr);
    //! Destructor
    ~Debugger();

//! signals - functions
/*! 
*/
signals:
    //! add_money function with void return value
    /*! when add_money clicked
        adds $1000 on demand
    */
    void on_add_money_clicked();
    //! add_inventory function with void return value
    /*! when add_inventory clicked
        adds 1000 pencils in your inventory on demand
    */
    void on_add_inventory_pencil_clicked();
    //! add_total_pencil function with void return value
    /*! when add_total_pencil clicked
        adds 1000 pencils to the total on demand
    */
    void on_add_total_pencil_clicked();
    //! add_wood_graphite function with void return value
    /*! when add_wood_grahpite clicked
        adds $1000 on demand
    */
    void on_add_wood_graphite_clicked();

    void on_add_intelligence_clicked();

    void on_add_marketing_clicked();

private:
    Ui::Debugger *ui;
};

#endif // DEBUGGER_H
