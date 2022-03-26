#include <iostream>
#include <string>
#include "Tomatoes.h"

using namespace std;

void Tomatoes::yourchoice()
{
  cout << "your choice Tomatoes" << "\n";
}

int Tomatoes::GetAmount()
{
  return amount;
}

void Tomatoes::SetAmount(int enAmount)
{
  if (enAmount > 0)
  {
      amount = enAmount;
  }
}

string Tomatoes::GetBreed()
{
  return breed;
}

void Tomatoes::SetBreed(string enBreed)
{
  if (enBreed != "")
  {
      breed = enBreed;
  }
}