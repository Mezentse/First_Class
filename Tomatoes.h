#pragma once

#include"Vegetables.h"
#include <string>

using namespace std;

class Tomatoes : public Vegetables
{
public:
  virtual void yourchoice();
  
  int GetAmount();
  void SetAmount(int enAmount);

  string GetBreed();
  void SetBreed(string enBreed);
protected:
  int amount;
  string breed;
};