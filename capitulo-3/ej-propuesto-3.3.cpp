

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int year;

  cout << "Ingrese un año para ver si es bisiesto: ";
  cin >> year;

  if (year % 4 == 0) 
  {
    if (year % 100 == 0) 
    {
      if (year % 400 == 0) 
      { 
        cout << "El año " << year << " es un año bisiesto." << endl;
      } else {
        cout << "El año: " << year << " no es un año bisiesto" << endl;
      }
    } else {
      cout << "El año " << year << " es un año bisiesto." << endl;
    }
  } else {
    cout << "El año: " << year << " no es un año bisiesto" << endl;
  }

  return 0;
}
