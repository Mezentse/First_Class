#pragma once

#include"Plants.h"
#include <string>

using namespace std;

class Fruits : public Plants
{
public:
  virtual void yourchoice();
  Fruits(int numberofbones, string shape, int price, string taste, int calories);
  int GetNumberofbones();
  void SetNumberofbones(int enNumberofbones);

  string GetShape();
  void SetShape(string enShape);
protected:
  int numberofbones;
  string shape;
};