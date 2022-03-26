#pragma once

#include<string>

using namespace std;
class Plants
{
public:
  virtual void yourchoice();
  Plants(int price, string taste, int calories);

  string GetTaste();
  void SetTaste(string enTaste);

  int GetPrice();
  void SetPrice(int enPrice);

  int GetCalories();
  void SetCalories(int enCalories);
  
protected:
  int price;
  string taste;
  int calories;
};