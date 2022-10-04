

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
  const float G = 6.673e-8;

  float m1, m2, d;
  float F = 0;

  cout << "Ingrese el valor de m1 en gramos: ";
  cin >> m1;
  cout << "Ingrese el valor de m2 en gramos: ";
  cin >> m2;
  cout << "Ingrese el valor de d en centimetros: ";
  cin >> d;

  F = (G*m1*m2)/(pow(d,2));

  cout << "Fuerza gravitacional (Fg) = " << F << " dinas" << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}
