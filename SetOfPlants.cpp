#include <iostream>
#include "SetOfPlants.h"

SetOfPlants::SetOfPlants()
{
  countOfPlants = 0;
  Set = nullptr;
}

SetOfPlants::~SetOfPlants()
{
  if (Set != nullptr)
    delete[] Set;
}

void SetOfPlants::Print()
{
  for (int q = 0; q < countOfPlants; q++)
  {
      Set[q]->yourchoice();
  }
}

void SetOfPlants::AddPlants(Plants* rastenie)
{
  if (countOfPlants == 0)
  {
      Set = new Plants * [1];
      countOfPlants = 1;
      Set[0] = rastenie;
  }
  else
  {
      Plants** temporary = new Plants * [countOfPlants + 1];

      for (int q = 0; q < countOfPlants; q++)
      {
          temporary[q] = Set[q];
      }

      delete Set;
      Set = temporary;
      Set[countOfPlants] = rastenie;
      countOfPlants++;
  }
}