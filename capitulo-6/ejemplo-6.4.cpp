// Funcion que calcula y devuelve la suma de los divisores de un número entero
// positivo que recibe como parámetro

#include <cstdlib>
#include <iostream>
using namespace std;


int divisores(int n)
{
  int i, acu;

  acu = 0;
  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      acu += i;
      cout << "i: " << i << endl;
    }
  }

  return acu;
}


int main(int argc, char *argv[])
{
  int n;
  int suma_divisores;

  cout << "Introduzca en valor de n: ";
  cin >> n;

  suma_divisores = divisores(n);

  cout << "La suma es: " << suma_divisores << endl;

  return EXIT_SUCCESS;
}
