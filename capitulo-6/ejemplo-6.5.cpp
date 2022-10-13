// Prototipo, llamada y definición de función. La función media recibe como
// parámetros dos números y retorna su media aritmética.

#include <cstdlib>
#include <iostream>
using namespace std;

double media (double x1, double x2);    // declaración de media. Prototipo

int main(int argc, char *argv[])
{
  double med, numero1, numero2;

  cout << "introduzca dos números: ";
  cin >> numero1 >> numero2;

  med = media(numero1, numero2);    // llamada a la función media

  cout << "La media es: " << med << endl;

  return EXIT_SUCCESS;
}

double media(double x1, double x2)
{
  return (x1 + x2)/2;
}
