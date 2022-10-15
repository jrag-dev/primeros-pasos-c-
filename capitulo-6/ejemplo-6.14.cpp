// Ámbito de programa y de función. calcula el área de un círculo y la
// longitud de una circurferencia de radio leido de la entrada

#include <cstdlib>
#include <iostream>
using namespace std;

const float PI = 3.141592;      // ámbito de programa

float longitud(float r)
{
  return PI*r;      // parámetro r tiene ámbito de función
}

float area(float r)
{
  return (PI*r*r);      // El parámetro r tiene ambito de función
}

int main(int argc, char *argv[])
{
  float radio;

  do
  {
    cout << "Introduzca el radio del círculo: ";
    cin >> radio;
  } while (radio <= 0);

  cout << "La longitud de la circurferencia es: ";
  cout << longitud(radio) << endl;
  cout << "El área del círculo es: " << area(radio) << endl;

  return EXIT_SUCCESS;
}
