#include "wood.h"
#include <iostream>

using namespace std;

Wood::Wood(double amount, double price)
{
    this->amount = amount;
    this->price = price;
}

Wood::Wood()
{
    this->amount = 1000.0;
    this->price = 1000.0;
}
Wood::~Wood()
{
    // cout << "Destruct Wood. \n";
}

void Wood::increaseWood()
{
    this->amount = this->amount + 100;
}

void Wood::decreaseWood()
{
    this->amount = this->amount - 0.21;
}

double Wood::getAmountWood()
{
    return this->amount;
}

void Wood::setPriceWood(double price)
{
    this->price = price;
}

void Wood::setAmountWood(double amount)
{
    this->amount = amount;
}

double Wood::getPriceWood()
{
    return this->price;
}
