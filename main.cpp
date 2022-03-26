#include<iostream>
#include"Apples.h"
#include"Orange.h"
#include"Pear.h"
#include"Pepper.h"
#include"Plants.h"
#include"Potatoes.h"
#include"Tomatoes.h"
#include"Fruits.h"
#include"Vegetables.h"
#include"SetOfPlants.h"
using namespace std;

int main()
{ 
  Fruits apple(2000, "red", 4, "ff", 55);
  Vegetables pomidor(4, "Cherry", 27, "dsfs", 88);
  
  SetOfPlants set;
  
  set.AddPlants(&pomidor);
  set.AddPlants(&apple);
  set.Print();
  return 0;
}