#include "apm.h"
#include "bankbalance.h"
#include "graphite.h"
#include "intelligence.h"
#include "marketing.h"
#include "pencil.h"
#include "wood.h"

#include <iostream>

int pass; int fail;

void testClassGraphite() {
    //! Empty constructor
    Graphite G = Graphite();
    if(G.getPriceGraphite() == 1500.0)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassGraphite()\n"
                   "Expected Value: "<<1500.0<<" Output Value: "<< G.getPriceGraphite()<<std::endl;
    }
    if(G.getAmountGraphite() == 1000.0)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassGraphite()\n"
                   "Expected Value: "<<1000.0<<" Output Value: "<< G.getAmountGraphite()<<std::endl;
    }
    //! Parameterized Constructor
    double amount = 10;
    double price = 30;

    Graphite G_new = Graphite(amount, price);
    if(G_new.getPriceGraphite() == price)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassGraphite()\n"
                   "Expected Value: "<<price<<" Output Value: "<< G_new.getPriceGraphite()<<std::endl;
    }
    if(G_new.getAmountGraphite() == amount)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassGraphite()\n"
                   "Expected Value: "<<amount<<" Output Value: "<< G_new.getAmountGraphite()<<std::endl;
    }
}

void testClassWood() {
    //! Empty constructor
    Wood W = Wood();
    if(W.getPriceWood() == 1000.0)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassWood()\n"
                   "Expected Value: "<<1000.0<<" Output Value: "<< W.getPriceWood()<<std::endl;
    }
    if(W.getAmountWood() == 1000.0)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassWood()\n"
                   "Expected Value: "<<1000.0<<" Output Value: "<< W.getAmountWood()<<std::endl;
    }
    //! Parameterized Constructor
    double amount = 10;
    double price = 30;

    Wood W_new = Wood(amount, price);
    if(W_new.getPriceWood() == price)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassWood()\n"
                   "Expected Value: "<<price<<" Output Value: "<< W_new.getPriceWood()<<std::endl;
    }
    if(W_new.getAmountWood() == amount)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassWood()\n"
                   "Expected Value: "<<amount<<" Output Value: "<< W_new.getAmountWood()<<std::endl;
    }
}

void testClassBankBalance() {
    //! Test Empty Contructor
    double value = 145.0;
    BankBalance B = BankBalance();

    if (B.getBankBalance() == value)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassBankBalance()\n"
                   "Expected Value: "<<value<<" Output Value: "<< B.getBankBalance()<<std::endl;
    }
    value = 1000.53;

    //! Test Parameterized Constructor
    B = BankBalance(value);

    if (B.getBankBalance() == value)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassBankBalance()\n"
                   "Expected Value: "<<value<<" Output Value: "<< B.getBankBalance()<<std::endl;
    }
}

void testClassAPM() {
    //! Test Empty Constructor
    float value = 150.0;

    APM B = APM();

    if (B.getPriceAPM() == value)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassAPM()\n"
                   "Expected Value: "<<value<<" Output Value: "<< B.getPriceAPM()<<std::endl;
    }

    if (B.getNumberAPM() == 0)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassAPM()\n"
                   "Expected Value: "<<0<<" Output Value: "<< B.getNumberAPM()<<std::endl;
    }

    if (B.getRateAPM() == 0)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassAPM()\n"
                   "Expected Value: "<<0<<" Output Value: "<< B.getRateAPM()<<std::endl;
    }

}

void testClassIntelligence() {
    //! Test Empty Constructor
    int value = 1;

    Intelligence B = Intelligence();

    if (B.getRateIntelligence() == value)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassIntelligence()\n"
                   "Expected Value: "<<value<<" Output Value: "<< B.getRateIntelligence()<<std::endl;
    }

    if (B.getAmountIntelligence() == 0)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassIntelligence()\n"
                   "Expected Value: "<<0<<" Output Value: "<< B.getAmountIntelligence()<<std::endl;
    }

    if (B.getRateIntelligence() == 1)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassIntelligence()\n"
                   "Expected Value: "<<1<<" Output Value: "<< B.getRateIntelligence()<<std::endl;
    }
    if (B.isActiveIntelligence() == false)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassIntelligence()\n"
                   "Expected Value: "<<false<<" Output Value: "<< B.isActiveIntelligence()<<std::endl;
    }

}

void testClassMarketing() {
    //! Test Empty Constructor
    double value = 500;

    Marketing B = Marketing();

    if (B.getMarketingPrice() == value)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassMarketing()\n"
                   "Expected Value: "<<value<<" Output Value: "<< B.getMarketingPrice()<<std::endl;
    }

    if (B.getMarketingQuantity() == 0)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassMarketing()\n"
                   "Expected Value: "<<0<<" Output Value: "<< B.getMarketingQuantity()<<std::endl;
    }
}

void testClassPencil() {
    //! Empty constructor
    Pencil G = Pencil();
    if(G.getPencilPrice() == 1.0)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassPencil()\n"
                   "Expected Value: "<<1.0<<" Output Value: "<< G.getPencilPrice()<<std::endl;
    }
    if(G.getPencilQuantity() == 0)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassPencil()\n"
                   "Expected Value: "<<0<<" Output Value: "<< G.getPencilQuantity()<<std::endl;
    }
    //! Parameterized Constructor
    double amount = 10;
    double price = 30;

    Pencil G_new = Pencil(amount, price);
    if(G_new.getPencilPrice() == price)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassPencil()\n"
                   "Expected Value: "<<price<<" Output Value: "<< G_new.getPencilPrice()<<std::endl;
    }
    if(G_new.getPencilQuantity() == amount)
        pass++;
    else
    {
        fail++;
        std::cout<<"Failed Test Case in testClassPencil()\n"
                   "Expected Value: "<<amount<<" Output Value: "<< G_new.getPencilQuantity()<<std::endl;
    }
}

/* TODO: test CURLHelper */

int main(int argc, char* argv[]) {
    testClassGraphite();
    testClassWood();
    testClassBankBalance();
    testClassAPM();
    testClassIntelligence();
    testClassMarketing();
    testClassPencil();

    std::cout<<"Passed Test Cases: "<<pass<<std::endl;
    std::cout<<"Failed Test Cases: "<<fail<<std::endl;
}