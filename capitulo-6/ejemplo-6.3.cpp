// la función norma devuelve la norma euclídea de las tres coordenadas de un vector
// en R3.

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

float norma(float x, float y, float z)
{
  float d;
  d = sqrt(x*x + y*y + z*z);
  return d;
}

int main(int argc, char *argv[])
{
  float x, y, z, d;

  cout << "Ingrese las tres coordenadas del vector (x, y, z): ";
  cin >> x >> y >> z;

  d = norma(x, y, z);

  cout << "vector : (" << x << ", " << y << ", " << z << ")" << endl;
  cout << "norma = " << d << endl;

  return EXIT_SUCCESS;
}
