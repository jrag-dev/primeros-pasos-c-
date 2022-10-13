// paso de parámetros por referencia a una función, estilo c++

#include <cstdlib>
#include <iostream>
using namespace std;

void intercambio(int* x, int* y)
{
  int aux = *x;

  *x = *y;
  *y = aux;
}

int main(int argc, char *argv[])
{
  int x = 20, y = 30;

  cout << "antes de la llamada ";
  cout << " x = " << x << " y = " << y << endl;
  intercambio(&x, &y);    // llamada con dirección
  cout << " despues de la llamada " ; 
  cout << " x = " << x << " y = " << y << endl;

  return EXIT_SUCCESS;
}
