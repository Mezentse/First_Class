#pragma once

#include"Vegetables.h"
#include <string>

using namespace std;

class Potatoes : public Vegetables
{
public:
  virtual void yourchoice();
 
  int GetTunneling();
  void SetTunneling(int enTunneling);

  string GetFertilizer();
  void SetFertilizer(string enFertilizer);
protected:
  int tunneling;
  string fertilizer;
};