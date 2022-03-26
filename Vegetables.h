#pragma once

#include"Plants.h"
#include <string>

using namespace std;

class Vegetables : public Plants
{
public:
  virtual void yourchoice();
  Vegetables(int amountofstarch, string climate, int price, string taste, int calories);
  int GetAmountofstarch();
  void SetAmountofstarch(int enAmountofstarch);

  string Get—limate();
  void Set—limate(string en—limate);
protected:
  int amountofstarch;
  string climate;
};