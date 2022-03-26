#pragma once

#include"Fruits.h"
#include <string>

using namespace std;

class Pear : public Fruits
{
public:
  virtual void yourchoice();
 
  int GetWeight();
  void SetWeight(int enWeight);

  string GetVitamins();
  void SetVitamins(string enVitamins);
protected:
  int weight;
  string vitamins;
};