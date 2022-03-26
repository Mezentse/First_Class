#include <iostream>
#include <string>
#include "Apples.h"

using namespace std;

void Apples::yourchoice()
{
  cout << "your choice Apple"<<"\n";
}

int Apples::GetPlantingyear()
{
  return plantingyear;
}

void Apples::SetPlantingyear(int enPlantingyear)
{
  if (enPlantingyear > 0)
  {
      plantingyear = enPlantingyear;
  }
}

string Apples::GetColor()
{
  return color;
}

void Apples::SetColor(string enColor)
{
  if (enColor != "")
  {
      color = enColor;
  }
}