// Escribir y comprobar un programa que resuelva la ecuación cuadratica
// ax^2 + bx + c = 0

#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  float a, b, c;
  float x1, x2;
  float parte_real, parte_imaginaria;
  float d;    // discriminante

  cout << "Introduzca el valor de a: ";
  cin >> a;
  cout << "Introduzca el valor de b: ";
  cin >> b;
  cout << "Introduzca el valor de c: ";
  cin >> c;

  if (a == 0)
  {
    cout << "No tenemos una ecuación de segundo grado" << endl;
    return 0;
  }
  else
  {
    d = pow(b, 2) - 4*a*c;
    
    if (d == 0)
    {
      x1 = x2 = -b/(2*a);
      cout << "Tenemos una solución única: " << x1 << endl;
    }
    else if (d > 0)
    {
      cout << "Tenemos dos soluciones reales: x1 y x2" << endl;
      x1 = (-b + sqrt(d))/(2*a);
      x2 = (-b - sqrt(d))/(2*a);
      cout << "x1 = " << x1 << endl;
      cout << "x2 = " << x2 << endl;
    }
    else  // d < 0
    {
      cout << "Tenemos dos soluciones complejas: x1 y x2" << endl;
      parte_real = -b/(2*a);
      parte_imaginaria = sqrt(-d)/(2*a);
      
      cout << "x1 = " << parte_real << " + " << parte_imaginaria << "i" << endl;
      cout << "x2 = " << parte_real << " - " << parte_imaginaria << "i" << endl;
    }
  }

  return 0;
}
