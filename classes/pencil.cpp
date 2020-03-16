#include "pencil.h"
#include <iostream>
#include <cmath>

using namespace std;
Pencil::Pencil(double quantity, double price)
{
    this->quantity = quantity;
    this->price = price;
}

Pencil::Pencil()
{
    this->quantity = 0;
    this->price = 1.0;
    this->rate = 1.0;
    this->produced = 0;
}
Pencil::~Pencil()
{
    // cout<<"Destruct Pencil\n";
}

void Pencil::increasePencilPrice()
{
    this->price = this->price + 0.05;
}

void Pencil::decreasePencilPrice()
{
    this->price = this->price - 0.05;
}

int Pencil::getPencilQuantity()
{
    return this->quantity;
}

void Pencil::setPencilQuantity(int quantity)
{
    this->quantity = quantity;
}

void Pencil::setPencilPrice(double price)
{
    this->price = price;
}

double Pencil::getPencilPrice()
{
    return this->price;
}

void Pencil::setPencilRate(double rate)
{
    this->rate = rate;
}

double Pencil::getPencilRate()
{
    return this->rate;
}

void Pencil::setPencilProduced(int produced)
{
    this->produced = produced;
}

int Pencil::getPencilProduced()
{
    return this->produced;
}
