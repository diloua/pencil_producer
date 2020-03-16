#include "marketing.h"
#include <iostream>

using namespace std;

Marketing::Marketing()
{
    this->price = 500;
    this->quantity = 0;
    this->is_unlock = 0;
}

Marketing::~Marketing()
{
    // cout<<"Destructing Marketing\n";
}

double Marketing::getMarketingPrice()
{
    return this->price;
}

void Marketing::setMarketingPrice(double price)
{
    this->price = price;
}

int Marketing::getMarketingQuantity()
{
    return this->quantity;
}

void Marketing::setMarketingQuantity(int quantity)
{
    this->quantity = quantity;
}