#pragma once

#include"Fruits.h"
#include <string>

using namespace std;

class Orange : public Fruits
{
public:
  virtual void yourchoice();
 
  int GetSize();
  void SetSize(int enSize);

  string GetSuitability();
  void SetSuitability(string enSuitability);
protected:
  int size;
  string suitability;
};