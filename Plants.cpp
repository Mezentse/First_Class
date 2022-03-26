#include <iostream>
#include <string>
#include "Plants.h"

using namespace std;

void Plants::yourchoice()
{
  cout << "your choice Plant" << "\n";
}

Plants::Plants(int price, string taste, int calories)
{
  this->price = price;
  this->taste = taste;
  this->calories = calories;
}

int Plants::GetPrice()
{
  return price;
}

void Plants::SetPrice(int enPrice)
{
  if (enPrice > 0)
  {
      price = enPrice;
  }
}

int Plants::GetCalories()
{
  return calories;
}

void Plants::SetCalories(int enCalories)
{
  if (enCalories > 0)
  {
      calories = enCalories;
  }
}

string Plants::GetTaste()
{
  return taste;
}

void Plants::SetTaste(string enTaste)
{
  if (enTaste != "")
  {
      taste = enTaste;
  }
}