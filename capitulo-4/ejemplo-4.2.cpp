// Decidir si un número es mayor que 10

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  float numero;

  cout << "Introduzca un número";
  cin >> numero;

  // comparar con el número 10
  if (numero > 10)
    cout << numero << " es mayor que 10: " << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}
