#include "intelligence.h"
#include <iostream>

Intelligence::Intelligence()
{
    this->rate = 1;
    this->amount = 0;
    this->active = false;
}

Intelligence::~Intelligence()
{
    // std::cout<<"Destructing Intelligence" << std::endl;
}

int Intelligence::getRateIntelligence()
{
    return this->rate;
}

int Intelligence::getAmountIntelligence()
{
    return this->amount;
}

void Intelligence::setRateIntelligence(int newRate)
{
    this->rate = newRate;
}

void Intelligence::setAmountIntelligence(int newAmount)
{
    this->amount = newAmount;
}

bool Intelligence::isActiveIntelligence()
{
    return this->active;
}

void Intelligence::setActiveIntelligence(bool toSet)
{
    this->active = toSet;
}
