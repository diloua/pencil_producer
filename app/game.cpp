#include "game.h"
#include "ui_game.h"
#include <QTimer>
#include <QtMath>
#include "debugmessage.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <QDebug>
#include <cstdlib>

#include <nlohmann/json.hpp>

#include "curl_helper.h"

using namespace std;
using namespace nlohmann;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->label_BankBalance->setText(QString::number((B.getBankBalance())));
    ui->label_Pencil_Price->setText(QString::number(P.getPencilPrice()));
    ui->label_APMPrice->setText(QString::number(A.getPriceAPM()));
    ui->pushButton_ActivateMarketing->setEnabled(false);
    ui->pushButton_buyMarketing->setEnabled(false);

    /*timer for generating a new wood price every 5 seconds */
    QTimer *timer1 = new QTimer();
    connect(timer1, SIGNAL(timeout()), this, SLOT(slotwoodprice()));
    timer1->start(5000);

    /*timer for generating a new graphite price every 5 seconds */
    QTimer *timer2 = new QTimer();
    connect(timer2, SIGNAL(timeout()), this, SLOT(slotgraphiteprice()));
    timer2->start(5000);

    /* timer for computing the public demand rate every 0.2 seconds */
    QTimer *timer3 = new QTimer();
    connect(timer3, SIGNAL(timeout()), this, SLOT(slotpencilrate()));
    timer3->start(200);

    /* timer for selling pencils every second */
    QTimer *timer4 = new QTimer();
    connect(timer4, SIGNAL(timeout()), this, SLOT(slotsellpencils()));
    timer4->start(1000);

    /*timer for getting more intelligence */
    QTimer *timer_intelligence = new QTimer();
    connect(timer_intelligence, SIGNAL(timeout()), this, SLOT(slotIntelligence()));
    timer_intelligence->start(1000);

    /* timers for materials prices */
    QTimer *timer_graphite = new QTimer();
    connect(timer_graphite, SIGNAL(timeout()), this, SLOT(slotgraphiteprice()));
    timer_graphite->start(5000);
    QTimer *timer_wood = new QTimer();
    connect(timer_wood, SIGNAL(timeout()), this, SLOT(slotwoodprice()));
    timer_wood->start(5000);

    /* Timer for a working APM */
    QTimer *timer_APM = new QTimer();
    connect(timer_APM, SIGNAL(timeout()), this, SLOT(slotAPMWorking()));
    timer_APM->start(500);

    /* create the debugging window */
    debugWindow = new Debugger();
    gameoverwindow = new GameOver();

    /*timer checking when player wins*/
    QTimer *timer_gameover = new QTimer();
    connect(timer_gameover, SIGNAL(timeout()), this, SLOT(isGameOver()));
    timer_gameover->start(10);

    connect(debugWindow, SIGNAL(on_add_money_clicked()), this, SLOT(add_money()));
    connect(debugWindow, SIGNAL(on_add_inventory_pencil_clicked()), this, SLOT(add_inventory_pencil()));
    connect(debugWindow, SIGNAL(on_add_total_pencil_clicked()), this, SLOT(add_total_pencil()));
    connect(debugWindow, SIGNAL(on_add_wood_graphite_clicked()), this, SLOT(add_materials()));
    connect(debugWindow, SIGNAL(on_add_intelligence_clicked()), this, SLOT(add_intelligence()));
    connect(debugWindow, SIGNAL(on_add_marketing_clicked()), this, SLOT(add_marketing()));
    wind = new DebugMessage;
    wind->hide();
}


MainWindow::~MainWindow() {
    delete debugWindow;
    delete ui;
}

void MainWindow::on_pushButton_Make_Pencil_clicked() {
    /* When a pencil is produced, the necessary resources are consumed */
    if(G.getAmountGraphite() >= 0.20 && W.getAmountWood() >= 0.21) {
        P.setPencilProduced(P.getPencilProduced() + 1);
        P.setPencilQuantity(P.getPencilQuantity() + 1);
        G.setAmountGraphite(G.getAmountGraphite() - 0.02);
        W.setAmountWood(W.getAmountWood() - 0.21);
        ui->label_pencilsProduced->setText(QString::number(P.getPencilProduced()));
        ui->label_pencilsInvent->setText(QString::number(P.getPencilQuantity()));
        ui->label_WoodLeft->setText(QString::number(W.getAmountWood()));
        ui->label_GraphiteLeft->setText(QString::number(G.getAmountGraphite()));

        if (P.getPencilProduced() >= 3000 && M.is_unlock == 0) {
            I.setActiveIntelligence(true);
            ui->pushButton_ActivateMarketing->setEnabled(true);
        }
    }
}

void MainWindow::slotAPMWorking() {
    if(A.getNumberAPM() > 0 && W.getAmountWood() >= A.getRateAPM()*0.21 
            && G.getAmountGraphite() >= A.getRateAPM()*0.2) {
        P.setPencilProduced(P.getPencilProduced() + A.getRateAPM());
        P.setPencilQuantity(P.getPencilQuantity() + A.getRateAPM());
        G.setAmountGraphite(G.getAmountGraphite() - A.getRateAPM()*0.02);
        W.setAmountWood(W.getAmountWood() - A.getRateAPM()*0.21);

        ui->label_pencilsProduced->setText(QString::number(P.getPencilProduced()));
        ui->label_pencilsInvent->setText(QString::number(P.getPencilQuantity()));
        ui->label_WoodLeft->setText(QString::number(W.getAmountWood()));
        ui->label_GraphiteLeft->setText(QString::number(G.getAmountGraphite()));

        if (P.getPencilProduced() >= 3000 && M.is_unlock == 0) {
            I.setActiveIntelligence(true);
            ui->pushButton_ActivateMarketing->setEnabled(true);
        }
    }
}

/* function for increasing the pencil price */
void MainWindow::on_pushButton_IncreasePencilPrice_clicked() {
    if(P.getPencilPrice()<10)
        P.increasePencilPrice();
    ui->label_Pencil_Price->setText(QString::number(P.getPencilPrice()));
}

/* function for decreasing the pencil price with checking for minimum price = 0.05
 * (can't have 0 or negative price
 */

void MainWindow::on_pushButton_DecreasePencilPrice_clicked() {
    if(P.getPencilPrice() >= 0.1) {
        P.decreasePencilPrice();
        ui->label_Pencil_Price->setText(QString::number(P.getPencilPrice()));
     }
}

void MainWindow::on_pushButton_BuyWood_clicked() {
    ui->pushButton_BuyWood->setEnabled(true);
    ui->label_WoodLeft->setText(QString::number(W.getAmountWood()));
     /* If there is enough Money in the bankBalance, we can buy 100.0 m of Wood */
    if(B.getBankBalance() >= W.getPriceWood())
    {
        W.setAmountWood(W.getAmountWood() + 100.0);
        B.setBankBalance(B.getBankBalance() - W.getPriceWood());
        ui->label_BankBalance->setText(QString::number((B.getBankBalance())));
    }
}

/* function for generating a random price of Wood, used in a stochastic manner */
void MainWindow::slotwoodprice() {
    W.setPriceWood(1000+qrand()%1000 + ((qrand()%100)/100.0));
    ui->label_WoodPrice->setText(QString::number(W.getPriceWood()));
}

void MainWindow::on_pushButton_BuyGraphite_clicked() {
    ui->label_GraphiteLeft->setText(QString::number(G.getAmountGraphite()));

    /* If there is enough Money in the bankBalance, we can buy 100.0 m of Graphite */
    if(B.getBankBalance() >= G.getPriceGraphite())
    {
        G.setAmountGraphite(G.getAmountGraphite() + 100.0);
        B.setBankBalance(B.getBankBalance()- G.getPriceGraphite());
        ui->label_BankBalance->setText(QString::number(B.getBankBalance()));
    }
}

/* function for generating a random price of Graphite, used in a stochastic manner */
void MainWindow::slotgraphiteprice() {
    G.setPriceGraphite(1500 + qrand()%1000 + ((qrand()%100)/100.0));
    ui->label_GraphitePrice->setText(QString::number(G.getPriceGraphite()));
}

/* function for computing the rate */
void MainWindow::slotpencilrate() {
    P.setPencilRate(1 / P.getPencilPrice() * pow(1.1, M.getMarketingQuantity()));
}

void MainWindow::slotsellpencils() {
    float buyrate = qFloor(P.getPencilRate() * 5);
    ui->label_buyrate->setText(QString::number(buyrate));

    /* If the buyrate is smaller than the no. of pencils in the inventory
     * we will sell the buyrate no. of pencils */

    if(buyrate <= P.getPencilQuantity()){
        ui->label_pencilsInvent->setText(QString::number(P.getPencilQuantity()));
        B.setBankBalance(B.getBankBalance() + (P.getPencilPrice() * buyrate));
        P.setPencilQuantity(P.getPencilQuantity() - buyrate);
    }

    /* Else, we will just sell the no. of pencils we have in the inventory, which in the end will become 0. */

    else{
        ui->label_pencilsInvent->setText(QString::number(P.getPencilQuantity()));
        B.setBankBalance(B.getBankBalance() + (P.getPencilPrice() * P.getPencilQuantity()));
        P.setPencilQuantity(0);
    }
    ui->label_BankBalance->setText(QString::number(B.getBankBalance()));

}

void MainWindow::on_pushButton_BuyMore_clicked() {
    /* If there are enough money in the bankBalance and there are no more than 10 APMS,
     * we can still buy another APM
     */

    if(B.getBankBalance() >= A.getPriceAPM() && A.getNumberAPM() <10) {
        A.setNumberAPM(A.getNumberAPM() + 1);
        B.setBankBalance(B.getBankBalance() - A.getPriceAPM());
        A.setRateAPM(2 * A.getNumberAPM());
        A.setPriceAPM(A.getPriceAPM()+ (A.getPriceAPM() * 0.10));
        ui->label_APMCount->setText(QString::number(A.getNumberAPM()));
        ui->label_BankBalance->setText(QString::number(B.getBankBalance()));
        ui->label_APM_Rate->setText(QString::number(A.getRateAPM()));
        ui->label_APMPrice->setText(QString::number(A.getPriceAPM()));
    }
}

void MainWindow::on_pushButton_buyMarketing_clicked()
{
    if (B.getBankBalance()>=M.getMarketingPrice() && M.getMarketingQuantity()<30)
    {
        M.setMarketingQuantity(M.getMarketingQuantity() + 1);
        B.setBankBalance(B.getBankBalance() - M.getMarketingPrice());
        M.setMarketingPrice(1.1 * M.getMarketingPrice());
        ui->label_BankBalance->setText(QString::number(B.getBankBalance()));
        ui->label_Marketing->setText(QString::number(M.getMarketingQuantity()));

    }
}

void MainWindow::on_pushButton_ActivateMarketing_clicked()
{
   if(I.getAmountIntelligence() > 100) {
       M.is_unlock = 1;
       M.setMarketingQuantity(M.getMarketingQuantity()+1);
       I.setAmountIntelligence(I.getAmountIntelligence()-100);
       ui->pushButton_ActivateMarketing->setEnabled(false);
       ui->pushButton_buyMarketing->setEnabled(true);
   }
}

void MainWindow::on_pushButton_Upgrade_APM_clicked()
{
    if(I.getAmountIntelligence() >= 50 && firstTime == false)
    {
        firstTime = true;
        A.setRateAPM((int)(A.getRateAPM()*1.10));
        I.setAmountIntelligence(I.getAmountIntelligence()-50);
        ui->label_IntelligenceQuantity->setText(QString::number(I.getAmountIntelligence()));
        ui->label_APM_Rate->setText(QString::number(A.getRateAPM()));
        ui->pushButton_Upgrade_APM->setEnabled(false);
    }

    if(I.getAmountIntelligence() >= 200 && P.getPencilProduced() >= 5000 && secondTime == false)
    {
        secondTime = true;
        A.setRateAPM((int)(A.getRateAPM()*1.10));
        I.setAmountIntelligence(I.getAmountIntelligence()-2000);
        ui->label_APM_Rate->setText(QString::number(A.getRateAPM()));
        ui->label_IntelligenceQuantity->setText(QString::number(I.getAmountIntelligence()));
        ui->pushButton_Upgrade_APM->setEnabled(false);
    }
}

void MainWindow::slotIntelligence()
{
    if (P.getPencilProduced() >= 3000 && I.getAmountIntelligence() < 200) {
        I.setAmountIntelligence(I.getAmountIntelligence() + 1);
        ui->label_IntelligenceQuantity->setText(QString::number(I.getAmountIntelligence()));
    }
}

void MainWindow::isGameOver()
{
    if(P.getPencilQuantity()> 25000)
    {
        gameoverwindow->show();
        close();
    }
}

void MainWindow::upload_score() {
    const char* JACOBS_ID = std::getenv("JACOBS_ID");
    const char* SE_TOKEN = std::getenv("SE_TOKEN");
    const char* GAME_USERNAME = std::getenv("GAME_USERNAME");

    /* TODO: handle error if environment variables are not set */

    if (JACOBS_ID && SE_TOKEN && GAME_USERNAME) {
        std::string url, data;

        /* create json */
        json j;
        j["jacobs-id"] = JACOBS_ID;
        j["se-token"] = SE_TOKEN;
        j["game-username"] = GAME_USERNAME;
        j["score"] = P.getPencilProduced();
        data = j.dump();

        /* get link */
        CURLHelper::get("https://matiusulung.com/se.json", &url);

        /* post */
        CURLHelper::post((std::string)nlohmann::json::parse(url)["link"] + "/uploadscore", data);
    }
}

void MainWindow::on_pushButton_Save_clicked() {
    std::string data(
        std::to_string(B.getBankBalance()) + " " +
        std::to_string(I.getAmountIntelligence()) + " " +
        std::to_string(W.getAmountWood()) + " " +
        std::to_string(W.getPriceWood()) + " " +
        std::to_string(G.getAmountGraphite()) + " " +
        std::to_string(G.getPriceGraphite()) + " " +
        std::to_string(A.getNumberAPM()) + " " +
        std::to_string(A.getRateAPM()) + " " +
        std::to_string(A.getPriceAPM()) + " " +
        std::to_string(P.getPencilQuantity()) + " " +
        std::to_string(P.getPencilProduced()) + " " +
        std::to_string(P.getPencilPrice()) + " " +
        std::to_string(P.getPencilRate()) + " " +
        std::to_string(M.getMarketingQuantity()) + " " +
        std::to_string(M.getMarketingPrice()) + " " +
        std::to_string(M.is_unlock) +"\n"
    );
    std::ofstream file("data.sav", std::ofstream::out | std::ofstream::trunc);
    file << data;
    file.close();

    upload_score();
}

void MainWindow::on_load(std::string filename) {
    std::ifstream file(filename, std::ifstream::in);

    if (!file.good()) {
        return;
    }

    std::stringstream data;
    data << file.rdbuf();
    
    // tokenize the string
    double d;
    int i;

    // TODO: handle error while loading
    // e.g. missing some values
    data >> d;
    B.setBankBalance(d);
    ui->label_BankBalance->setText(QString::number(B.getBankBalance()));

    data >> i;
    I.setAmountIntelligence(i);
    ui->label_IntelligenceQuantity->setText(QString::number(I.getAmountIntelligence()));

    data >> d;
    W.setAmountWood(d);
    ui->label_WoodLeft->setText(QString::number(W.getAmountWood()));

    data >> d;
    W.setPriceWood(d);
    ui->label_WoodPrice->setText(QString::number(W.getPriceWood()));

    data >> d;
    G.setAmountGraphite(d);
    ui->label_GraphiteLeft->setText(QString::number(G.getAmountGraphite()));

    data >> d;
    G.setPriceGraphite(d);
    ui->label_GraphitePrice->setText(QString::number(G.getPriceGraphite()));

    data >> i;
    A.setNumberAPM(i);
    ui->label_APMCount->setText(QString::number(A.getNumberAPM()));

    data >> d;
    A.setRateAPM(d);
    ui->label_APM_Rate->setText(QString::number(A.getRateAPM()));

    data >> d;
    A.setPriceAPM(d);
    ui->label_APMPrice->setText(QString::number(A.getPriceAPM()));

    data >> i;
    P.setPencilQuantity(i);
    ui->label_pencilsInvent->setText(QString::number(P.getPencilQuantity()));

    data >> i;
    P.setPencilProduced(i);
    ui->label_pencilsProduced->setText(QString(P.getPencilProduced()));

    data >> d;
    P.setPencilPrice(d);
    ui->label_Pencil_Price->setText(QString::number(P.getPencilPrice()));

    data >> d;
    P.setPencilRate(d);
    ui->label_buyrate->setText(QString::number(P.getPencilRate()));
    
    data >> i;
    M.setMarketingQuantity(i);

    data >> d;
    M.setMarketingPrice(d);

    data >> i;
    M.is_unlock = i;

    if(P.getPencilProduced() >= 3000) {
        I.setActiveIntelligence(true);
        if (M.is_unlock == 0) {
            ui->pushButton_ActivateMarketing->setEnabled(true);
            ui->pushButton_buyMarketing->setEnabled(false);
        }        
        else {
            ui->pushButton_ActivateMarketing->setEnabled(false);
            ui->pushButton_buyMarketing->setEnabled(true);
        }
    }
    file.close();
}

void MainWindow::on_checkBox_Debug_clicked() {
    wind->show();
    if (debugWindow->isVisible()) {
        debugWindow->close();
    }
    else {
        debugWindow->show();
    }
}

void MainWindow::add_money() {
    B.setBankBalance(B.getBankBalance()+1000);
    ui->label_BankBalance->setText(QString::number(B.getBankBalance()));
}

void MainWindow::add_inventory_pencil() {
    P.setPencilQuantity(P.getPencilQuantity()+1000);
    ui->label_pencilsInvent->setText(QString::number(P.getPencilQuantity()));
    add_total_pencil();
}

void MainWindow::add_total_pencil() {
    P.setPencilProduced(P.getPencilProduced()+1000);
    ui->label_pencilsProduced->setText(QString::number(P.getPencilProduced()));

    if (P.getPencilProduced() >= 3000 && M.is_unlock == 0) {
        I.setActiveIntelligence(true);
        ui->pushButton_ActivateMarketing->setEnabled(true);
    }
}

void MainWindow::add_materials() {
    W.setAmountWood(W.getAmountWood()+10);
    G.setAmountGraphite(G.getAmountGraphite()+10);
    ui->label_WoodLeft->setText(QString::number(W.getAmountWood()));
    ui->label_GraphiteLeft->setText(QString::number(G.getAmountGraphite()));
}

void MainWindow::add_intelligence()
{
    if(I.getAmountIntelligence() < 200)
   {
    I.setAmountIntelligence(I.getAmountIntelligence() + 10);
    ui->label_IntelligenceQuantity->setText(QString::number(I.getAmountIntelligence()));
   }
}

void MainWindow::add_marketing()
{
    if(M.getMarketingQuantity()<30)
      {
        if(M.getMarketingQuantity()>27)
        {
          M.setMarketingQuantity(30);
          ui->label_Marketing->setText(QString::number(M.getMarketingQuantity()));
        }
        else
        M.setMarketingQuantity(M.getMarketingQuantity() + 3);
        ui->label_Marketing->setText(QString::number(M.getMarketingQuantity()));
       }
}
