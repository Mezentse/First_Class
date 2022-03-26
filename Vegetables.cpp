#include <iostream>
#include <string>
#include "Vegetables.h"

using namespace std;

void Vegetables::yourchoice()
{
  cout << "your choice Vegetable" << "\n";
}

Vegetables::Vegetables(int amountofstarch, string climate, int price, string taste, int calories) : Plants(price, taste, calories)
{
  this->amountofstarch = amountofstarch;
  this->climate = climate;
}

int Vegetables::GetAmountofstarch()
{
  return amountofstarch;
}

void Vegetables::SetAmountofstarch(int enAmountofstarch)
{
  if (enAmountofstarch > 0)
  {
      amountofstarch = enAmountofstarch;
  }
}

string Vegetables::Get—limate()
{
  return climate;
}

void Vegetables::Set—limate(string enClimate)
{
  if (enClimate != "")
  {
      climate = enClimate;
  }
}