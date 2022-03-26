#pragma once

#include"Vegetables.h"
#include <string>

using namespace std;

class Pepper : public Vegetables
{
public:
  virtual void yourchoice();
 
  int GetScovels();
  void SetScovels(int enScovels);

  string GetExportcountry();
  void SetExportcountry(string enExportcountry);
protected:
  int scovels;
  string exportcountry;
};
