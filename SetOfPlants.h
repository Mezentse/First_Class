#pragma once
#include "Plants.h"

class SetOfPlants
{
public:
  SetOfPlants();
  ~SetOfPlants();
  void Print();
  void AddPlants(Plants* rastenie);
private:
  Plants** Set;
  short countOfPlants;
};