// ejemplo que muestra el uso de declaraciones globales y ptototipos de funciones

#include <iostream>
#include <cmath>
using namespace std;

#define pi 3.1415

float radio, altura;
float area_superficie( float radio, float altura );
float volumen_cilindro( float radio, float altura );

int main()
{
  cout << "Introduce el area del circulo: ";
  cin >> radio;

  cout << "Introduce la altura del cilindro: ";
  cin >> altura;

  cout << "El área de la superficie del cilindro: " << area_superficie(radio, altura) << endl;
  cout << "El volumen del cilindro es: " << volumen_cilindro(radio, altura) << endl;

  system("PAUSE");
  return 0;
}

float area_superficie( float radio, float altura )
{
  float area;

  area = 2*pi*radio*altura + pi * (pow(radio, 2)) * altura;

  return area;
}

float volumen_cilindro( float radio, float altura )
{
  float volumen;
  volumen = pi * (pow(radio, 2)) * altura;

  return volumen;
}
