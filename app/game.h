#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "graphite.h"
#include "wood.h"
#include "bankbalance.h"
#include "pencil.h"
#include "apm.h"
#include "intelligence.h"
#include "marketing.h"

#include "gameover.h"
#include "debugmessage.h"
#include "debugger.h"

namespace Ui {
class MainWindow;
}

//! A MainWindow class.
/*!
 This class contains every global values and slots of this project.
 There are public slots and values are private.
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

//! Public slots - functions
/*! for unit test, we set the functions as public */
public:
    //! Construtor
    explicit MainWindow(QWidget *parent = nullptr);
    Graphite G = Graphite();
    Wood W = Wood();
    BankBalance B = BankBalance();
    Pencil P = Pencil();
    APM A = APM();
    Intelligence I = Intelligence();
    Marketing M = Marketing();
    //! Other windows
    Debugger* debugWindow;
    GameOver* gameoverwindow;
    DebugMessage* wind;

    /* testing functions*/

    //! Test Function Make_Pencil_clicked
    void testMake_Pencil_clicked();
    //! Test Function IncreasePencilPrice_clicked
    void testIncreasePencilPrice_clicked();
    //! Test Function DecreasePencilPrice_clicked
    void testDecreasePencilPrice_clicked();
    //! Test Function BuyWood_clicked
    void testBuyWood_clicked();
    //! Test Function slotwoodprice
    void testslotwoodprice();
    //! Test Function BuyGraphite_clicked
    void testBuyGraphite_clicked();
    //! Test Function slotgraphiteprice
    void testslotgraphiteprice();
    //! Test Function slotpencilrate
    void testslotpencilrate();
    //! Test Function slotsellpencils
    void testslotsellpencils();
    //! Test Function BuyMore_clicked
    void testBuyMore_clicked();
    /* testing classes */

    //! Test Class Graphite
    void testClassGraphite();
    //! Test Class Wood
    void testClassWood();
    //! Test Class BankBalance
    void testClassBankBalance();
    //! Test Class APM
    void testClassAPM();
    //! Test Class Intelligence
    void testClassIntelligence();
    //! Test Class Marketing
    void testClassMarketing();
    //! Test Class Pencil
    void testClassPencil();
    void testslotIntelligenceActivation();
    void testBuyMarketing_clicked();
    void testActivateMarketing_clicked();
    void testOncheckboxDebug_clicked();
    void printResults();

    //! Destructor
    ~MainWindow();
    
    //! on_load function with void return value
    /*! when the button load is clicked
        load the current state of the game in the specified file.
    */
    void on_load(std::string filename);

private slots:
    //! on_apm_working function with void return value
    /*! increases count, total by the pencil production rate by the APM
    */
    void slotAPMWorking();

    //! on_pushButton_Make_Pencil_clicked function with void return value
    /*! when the button make_pencil clicked
        produce (increment) one on count and total
        use (decrement) wood by 0.21 and graphite by 0.2
        finally it prints out changed value to the labels in mainwindow.ui
    */
    void on_pushButton_Make_Pencil_clicked();

    //! on_pushButton_IncreasePencilPrice_clicked function with void return value
    /*! when the button up (+) clicked
        call function increase_price() from pencil.h
        then prints out changed value to the label(price_pencil) in mainwindow.ui
    */
    void on_pushButton_IncreasePencilPrice_clicked();

    //! on_pushButton_DecreasePencilPrice_clicked function with void return value
    /*! when the button down (-) clicked
        call function decrease_price() from pencil.h
        then prints out changed value to the label(price_pencil) in mainwindow.ui
    */
    void on_pushButton_DecreasePencilPrice_clicked();

    //! on_pushButton_BuyWood_clicked function with void return value
    /*! when the button buy_wood clicked
        call function increase_wood_amount() from wood.h
        debit (decrement) balance by price_wood(random between 1000~2000)
        then it prints out changed value to the labels in mainwindow.ui
    */
    void on_pushButton_BuyWood_clicked();

    //! slotwoodprice() function with void return value
    /*! generates every 5 seconds the price of the wood
    */
    void slotwoodprice();

    //! on_pushButton_BuyGraphite_clicked function with void return value
    /*! when the button buy_graphite clicked
        call function increase_graphite_amount() from graphite.h
        debit (decrement) balance by price_graphite(random between 1500~2500)
        then it prints out changed value to the labels in mainwindow.ui
    */
    void on_pushButton_BuyGraphite_clicked();

    //! slotgraphiteprice() function with void return value
    /*! generates every 5 seconds the price of the graphite
    */
    void slotgraphiteprice();

    void slotpencilrate();

    //! slotsellpencils function with void return value
    /*! when sold function called balance is increased by number of sold pencil times the price of pencil
        and decrement number of sold pencil from inventory (count)
        if count is smaller then number of sold pencil, then balance increased by count times price of pencil
        and count = 0
        then it prints out changed value to the labels in mainwindow.ui
    */
    void slotsellpencils();

    //! on_pushButton_BuyMore_clicked function with void return value
    /*! when buy_apm_2000 clicked
        call function new_apm() from apm2000.h
        debit balance by its cost
        then it prints out changed value to the labels in mainwindow.ui
    */
    void on_pushButton_BuyMore_clicked();

    //! on_pushButton_buyMarketing_clicked function with void return value
    /*! when the button buy_marketing is clicked
        check the amount of intelligence
        if intelligence is bigger than 100, decrease intelligence by 100
        show and enable upgrade_marketing button
    */
    void on_pushButton_buyMarketing_clicked();

    //! on_pushButton_ActivateMarketing_clicked function with void return value
    /*! when the button upgrade_marketing is clicked
        check the balance
        if balance is bigger than marketing_price, increase decrease balance by marketing_price,
        increase marketing_amount by 1 and increase marketing_price by a factor of 1.1
        then it prints out changed value to the labels in mainwindow.ui
    */
    void on_pushButton_ActivateMarketing_clicked();

    //! on_pushButton_Save_clicked function with void return value
    /*! when the button save is clicked
        save the current state of the game in file 'load.sav'.
    */
    void on_pushButton_Save_clicked();

    //! on_pushButton_Upgrade_APM_clicked function with void return value
    /*! when the button upgrade_apm is clicked
        check the amount of intelligence
        increase rate of pencil production by 10%: once when Intelligence unlocks for 50 Intelligence,
        and second time when the number of pencils manufactured reaches 5000, for 200 Intelligence
        then it prints out changed value to the labels in mainwindow.ui
    */
    void on_pushButton_Upgrade_APM_clicked();
    
    //! slotIntelligence function with void retun value
    /*! generates every 1 second a new Intelligence
     */
    void slotIntelligence();

    void isGameOver();

    //! on_checkBox_Debug_clicked function with void return value
    /*! when the button debug is clicked
        change the values of the variables for a debugging mode of the game
    */
    void on_checkBox_Debug_clicked();

    //! add_money function with void return value
    /*! in add_money function
        it's inside the debugger function and when clicked it adds $1000 to bank balance
    */
    void add_money();
    
    //! add_inventory_pencil function with void return value
    /*! in add_inventory_pencil function
        it's inside debugger tool and it adds 1000 pencils to the current inventory
    */
    void add_inventory_pencil();

    //! add_total_pencil function with void return value
    /*! in add_total_pencil function
        it's inside debugger tool and it adds 1000 pencils to the total nr. or pencils
    */
    void add_total_pencil();

    //! add_materials function with void return value
    /*! in add_materials function
        it's inside debugger tool and it adds 10m of wood and 10m of graphite
    */
    void add_materials();

    void add_intelligence();

    void add_marketing();

signals:
    //! on_quit_clicked function with void return value
    /*! when the button quit is clicked, 
        it exits the current game.
    */
    void on_quit_clicked();
    
private:
    /* initial conditions and declarations of variables */
    Ui::MainWindow *ui;
    bool firstTime = false;
    bool secondTime = false;

    //! Upload Score
    /*! Saves the score to upload it to the server
    */
    void upload_score();
};

#endif // MAINWINDOW_H
