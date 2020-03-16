#include "apm.h"
#include <iostream>

using namespace std;

APM::APM()
{
    this->number = 0;
    this->price = 150.0;
    this->rate = 0;
}

APM::~APM()
{
    // cout<<"Destruct APM\n";
}

void APM::setNumberAPM(int no)
{
    this->number = no;
}

int APM::getNumberAPM()
{
    return this->number;
}

void APM::setPriceAPM(float price)
{
    this->price = price;
}

double APM::getPriceAPM()
{
    return this->price;
}

void APM::setRateAPM(double rate)
{
    this->rate = rate;
}

double APM::getRateAPM()
{
    return this->rate;
}