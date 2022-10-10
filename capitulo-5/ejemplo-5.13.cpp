// Leer un número entero positivo en un bucle do while y calcular su factorial
// mediante un bucle for, un bucle while y un bucle do while.
// nota:: Factorial de n = n*(n-1)*(n-2)*...*2*1;

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int numero, i, factorial;

  do
  {
    cout << "dame número entero: ";
    cin >> numero;
  } while (numero <= 0);

  for (factorial = 1, i = 1; i <= numero; i++)
  {
    factorial *= i;
  }
  cout << factorial << endl;

  factorial = 1;
  i = 1;

  while (i < numero)
  {
    i++;
    factorial *= i;
  }
  cout << factorial << endl;

  factorial = 1;
  i = 0;
  do
  {
    i++;
    factorial *= i;
  } while(i < numero);

  cout << factorial << endl;

  return EXIT_SUCCESS;
}
