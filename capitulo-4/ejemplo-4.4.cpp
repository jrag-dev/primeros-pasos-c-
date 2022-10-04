// Lee un dato real y visualiza su valor absoluto

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  float dato;

  cout << "Introduzca un número: ";
  cin >> dato;

  if (dato < 0)
    dato = -dato;     // cambio de signo

  cout << " Valor absoluto siempre positivo: " << dato << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}
