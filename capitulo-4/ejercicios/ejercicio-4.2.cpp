// Uso de los condicionales

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  float velocidad = 120;
  float consumo;

  if (velocidad > 80)
    consumo = 10.0;
  else if (velocidad > 100)
    consumo = 12.0;
  else if (velocidad > 120)
    consumo = 15.00;
  else
    consumo = 0.0;

  cout << "El consumo es: " << consumo << endl;

  return 0;
}
