// Sobrecarga de funciones

#include <cstdlib>
#include <iostream>
using namespace std;

int Sobrecarga(int);
int Sobrecarga(int, int);
float Sobrecarga(float, float);
float Sobrecarga (float, float, float);

int main(int argc, char *argv[])
{
  int x = 4, y = 5;
  float a = 6.0, b = 7.0, c = 9.0;

  cout << "\nEl cuadrado de " << x << " es: " << Sobrecarga(x);
  cout << "\nEl producto de " << x << " por " << y << " es: " << Sobrecarga(x, y);
  cout << "\nLa suma de " << a << " y " << b << " es: " << Sobrecarga(a, b);
  cout << "\nLa suma de " << a << " y " << b << " es: " << Sobrecarga(a, b) << endl;

  return EXIT_SUCCESS;
}

// Sobrecarga, calcula el cuadrado de un valor entero
int Sobrecarga(int valor)
{
  return (valor*valor);
}

// Sobrecarga, multiplica dos valores enteros
int Sobrecarga(int valor1, int valor2)
{
  return (valor1*valor2);
}

// Sobrecarga, calcula la suma de dos valores reales
float Sobrecarga(float valor1, float valor2)
{
  return (valor1 + valor2);
}

// Sobrecarga, calcula la media de tres valores reales
float Sobrecarga(float valor1, float valor2, float valor3)
{
  return (valor1 + valor2 + valor3)/3;
}
