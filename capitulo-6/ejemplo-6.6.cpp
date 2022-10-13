// prototipo sin nombre e parámetros en la declaración y sin parámetros.
// Calcula el área de un rectángulo.

#include <cstdlib>
#include <iostream>
using namespace std;


float area_r(float, float);       //Prototipo. Nombres parámetros omitidos
float entrada();                  // Prototipo sin parámetros

int main(int argc, char *argv[])
{
  float base, altura;

  cout << "Base del rectángulo: ";
  base = entrada();
  cout << "Altura del rectángulo: ";
  altura = entrada();

  cout << "Area del rectángulo: " << area_r(base, altura) << endl;

  return EXIT_SUCCESS;
}

float entrada()
{
  float m;

  do
  {
    cout << "Numero positivo: ";
    cin >> m;
  } while (m <= 0.0);

  return m;
}

float area_r(float b, float h)    // se declaran los nombres de los parámetros
{
  return (b * h);
}
