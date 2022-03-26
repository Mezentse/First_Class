#include <iostream>
#include <string>
#include "Potatoes.h"

using namespace std;

void Potatoes::yourchoice()
{
  cout << "your choice Potatoes" << "\n";
}



int Potatoes::GetTunneling()
{
  return tunneling;
}

void Potatoes::SetTunneling(int enTunneling)
{
  if (enTunneling > 0)
  {
      tunneling = enTunneling;
  }
}

string Potatoes::GetFertilizer()
{
  return fertilizer;
}

void Potatoes::SetFertilizer(string enFertilizer)
{
  if (enFertilizer != "")
  {
      fertilizer = enFertilizer;
  }
}