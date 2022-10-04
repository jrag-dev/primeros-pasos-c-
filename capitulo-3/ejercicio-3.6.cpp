// Escribir un programa que lea la temperatura en grados centigrados
// y la convierta en grados Fahrenheit.

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  float c;
  float f = 0;

  cout << "Introduzca la temperatura en grados centigrados: ";
  cin >> c;

  f = (9*c)/5 + 32;

  cout << "La temperatura en grados Fahrenheit es: " << f << endl;
  
  system("PAUSE");
  return EXIT_SUCCESS;
}
