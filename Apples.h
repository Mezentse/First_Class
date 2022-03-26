#pragma once

#include"Fruits.h"
#include <string>

using namespace std;

class Apples : public Fruits
{
public:
  virtual void yourchoice();
 
  int GetPlantingyear();
  void SetPlantingyear(int enPlantingyear);

  string GetColor();
  void SetColor(string enColor);
protected:
  int plantingyear;
  string color;
};