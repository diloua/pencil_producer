#include "graphite.h"
#include <iostream>

using namespace std;
Graphite::Graphite(double amount, double price)
{
    this->amount = amount;
    this->price = price;
}

Graphite::Graphite()
{
    this->amount = 1000.0;
    this->price = 1500.0;
}
Graphite::~Graphite()
{
    // cout<<"Destruct Graphite. \n";
}

void Graphite::increaseGraphite()
{
    this->amount = this->amount + 100;
}

void Graphite::decreaseGraphite()
{
    this->amount = this->amount - 0.2;
}

double Graphite::getAmountGraphite()
{
    return this->amount;
}

void Graphite::setPriceGraphite(double price)
{
    this->price = price;
}

void Graphite::setAmountGraphite(double amount)
{
    this->amount = amount;
}

double Graphite::getPriceGraphite()
{
    return this->price;
}
