// Diseñar e implementar un programa que lea un total de 10 números y cuente
// el número de sus entradas que son positivos, negativos y ceros.

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int dato;
  int np = 0, nn = 0, nulos = 0;
  int n;

  cout << "Ingrese el numero de datos n: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> dato;

    if (dato > 0)
    {
      np++;
    }
    else if (dato < 0)
    {
      nn++;
    }
    else {
      nulos++;
    }
  }

  cout << "positivos: " << np << endl;
  cout << "negativos: " << nn << endl;
  cout << "nulos: " << nulos << endl;

  return EXIT_SUCCESS;
}
