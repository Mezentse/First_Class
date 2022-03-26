#include <iostream>
#include <string>
#include "Orange.h"

using namespace std;

void Orange::yourchoice()
{
  cout << "your choice Orange" << "\n";
}

int Orange::GetSize()
{
  return size;
}

void Orange::SetSize(int enSize)
{
  if (enSize > 0)
  {
      size = enSize;
  }
}

string Orange::GetSuitability()
{
  return suitability;
}

void Orange::SetSuitability(string enSuitability)
{
  if (enSuitability != "")
  {
      suitability = enSuitability;
  }
}