// El algoritmo siguiente incluye un prototipo de una función suma, un
// programa main y con sentencias y una llamada a la función, así como
// la codificación de la función suma.

#include <cstdlib>
#include <iostream>
using namespace std;

float suma(float a, float b);

int main(int argc, char *argv[])
{
  float numero1, numero2, sumadenumeros;

  cout << "valor del número 1: ";
  cin >> numero1;

  cout << "Valor del número 2: ";
  cin >> numero2;
  
  sumadenumeros = suma(numero1, numero2);
  
  cout << "La suma de " << numero1 << " y " << numero2 << endl;
  cout << "Es: " << sumadenumeros << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}

float suma(float a, float b)
{
  return a + b;
}
