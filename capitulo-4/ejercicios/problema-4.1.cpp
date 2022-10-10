// Escribir un programa que introduzca el número de un mes (1 a 12) y el año
// y visualice el número de dias de ese mes.

#include <cstdlib>
#include <iostream>
using namespace std;


bool year_bisiesto(int year);
int dias_mes(int mes, bool bisiesto);

int main(int argc, char *argv[])
{
  
  int mes;
  bool bisiesto;
  int year;
  int dias;

  cout << "Ingrese el año (ej. 2024): ";
  cin >> year;
  cout << "Ingrese el mes (1 a 12): ";
  cin >> mes;

  bisiesto = year_bisiesto(year);
  dias = dias_mes(mes, bisiesto);

  cout << "Mes: " << mes << " / " << "Año: " << year << " tiene " << dias << " dias" << endl;
  bisiesto == true ? cout << "bisiesto" : cout << "no bisiesto" << endl;

  return 0;
}


int dias_mes(int mes, bool bisiesto)
{
  int dias;

  switch(mes)
  {
    case 1:
      dias = 31;
      break;
    case 2:
      if (bisiesto == true)
      {
        dias = 29;
      }
      else
      {
        dias = 28;
      }
      break;
    case 3:
      dias = 31;
      break;
    case 4:
      dias = 30;
      break;
    case 5:
      dias = 31;
      break;
    case 6:
      dias = 30;
      break;
    case 7:
      dias = 31;
      break;
    case 8:
      dias = 31;
      break;
    case 9:
      dias = 30;
      break;
    case 10:
      dias = 31;
      break;
    case 11:
      dias = 30;
      break;
    case 12:
      dias = 31;
      break;
    default:
      dias = 0;
      break;
  }

  return dias;
}


bool year_bisiesto(int year)
{
  bool bisiesto;

  if (year % 4 == 0)
  {
    if (year % 100 == 0)
    {
      if (year % 400 == 0)
      {
        bisiesto = true;
      }
      else
      {
        bisiesto = false;
      }
    }
    else {
      bisiesto = true;
    }
  }
  else
  {
    bisiesto = false;
  }

  return bisiesto;
}
