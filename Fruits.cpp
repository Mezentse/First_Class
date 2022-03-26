#include <iostream>
#include <string>
#include "Fruits.h"

using namespace std;

void Fruits::yourchoice()
{
  cout << "your choice Fruits" << "\n";
}

Fruits::Fruits(int numberofbones, string shape, int price, string taste, int calories) : Plants(price, taste, calories)
{
  this->numberofbones = numberofbones;
  this->shape = shape;
}

int Fruits::GetNumberofbones()
{
  return numberofbones;
}

void Fruits::SetNumberofbones(int enNumberofbones)
{
  if (enNumberofbones > 0)
  {
      numberofbones = enNumberofbones;
  }
}

string Fruits::GetShape()
{
  return shape;
}

void Fruits::SetShape(string enShape)
{
  if (enShape != "")
  {
      shape = enShape;
  }
}