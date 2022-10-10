// Bucle for descendente que escribe números reales y su raíz cuadrada.

#include <math.h>
#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  float n;

  cout << "n" << "\traiz(n)" << endl;

  for (n = 16; n >= 1; n = n-2.5)
  {
    cout << n << "\t" << sqrt(n) << endl;
  }

  return EXIT_SUCCESS;
}
