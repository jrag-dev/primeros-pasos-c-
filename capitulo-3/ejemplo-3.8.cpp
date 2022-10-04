// ejemplo del operador condicional

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int x = 10, y = 12, mayor, menor;
  bool z;

  z = x >= y ? true : false;    // z toma el valor de false
  mayor = x >= y ? x : y;
  menor = x >= y ? y : x;

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "z = " << z << endl;
  cout << "El mayor es = " << mayor << endl;
  cout << "El menor es = " << menor << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}
