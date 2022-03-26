#include <iostream>
#include <string>
#include "Pepper.h"

using namespace std;

void Pepper::yourchoice()
{
  cout << "your choice Pepper" << "\n";
}

int Pepper::GetScovels()
{
  return scovels;
}

void Pepper::SetScovels(int enScovels)
{
  if (enScovels > 0)
  {
      scovels = enScovels;
  }
}

string Pepper::GetExportcountry()
{
  return exportcountry;
}

void Pepper::SetExportcountry(string enExportcountry)
{
  if (enExportcountry != "")
  {
      exportcountry = enExportcountry;
  }
}