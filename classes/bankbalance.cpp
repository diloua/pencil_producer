#include "bankbalance.h"
#include <iostream>

using namespace std;
BankBalance::BankBalance()
{
    this->balance = 145.0;
}
BankBalance::BankBalance(double balance)
{
    this->balance = balance;
}

BankBalance::~BankBalance()
{
    // cout << "Destruct Bank. \n";
}

double BankBalance::getBankBalance()
{
    return this->balance;
}

void BankBalance::setBankBalance(double balance)
{
    this->balance = balance;
}
