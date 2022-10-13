// Funciones en línea para cácular el volumen y el área total de un cilindro
// del que se leen su radio y altura

#include <cstdlib>
#include <iostream>
using namespace std;

const float PI = 3.141592;

inline float VOLCILINDRO(float radio, float altura)     // función en línea
{
  return (PI * radio * radio * altura);
}

inline float AREATOTAL(float radio, float altura)     // función en línea
{
  return (2*PI*radio*altura + PI*radio*radio);
}

int main(int argc, char *argv[])
{
  float radio, altura, volumen, areatotal;

  do
  {
    cout << "Introduzca radio del cilindro: ";
    cin >> radio;
    cout << "Introduzca altura del cilindro: ";
    cin >> altura;
  } while ((radio <= 0) || (altura <= 0));

  volumen = VOLCILINDRO(radio, altura); 
  areatotal = AREATOTAL(radio, altura);

  cout << "El volumen del cilindro es: " << volumen << endl;
  cout << "El área total del cilindro es: " << areatotal << endl;

  return EXIT_SUCCESS;
}
