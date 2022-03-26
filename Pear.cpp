#include <iostream>
#include <string>
#include "Pear.h"

using namespace std;

void Pear::yourchoice()
{
  cout << "your choice Pear" << "\n";
}

int Pear::GetWeight()
{
  return weight;
}

void Pear::SetWeight(int enWeight)
{
  if (enWeight > 0)
  {
      weight = enWeight;
  }
}

string Pear::GetVitamins()
{
  return vitamins;
}

void Pear::SetVitamins(string enVitamins)
{
  if (enVitamins != "")
  {
      vitamins = enVitamins;
  }
}