// Función que retorna el menorc con tipos de datos genéricos

#include <cstdlib>
#include <iostream>
using namespace std;

template <class T>
T man(T a, T b)
{
  if (a < b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int main(int argc, char *argv[])
{
  int x = 4, y = 5;
  float a = 6.0, b = 7.0;
  char c = 'C', d = 'A';

  cout << "\nEl menor de " << x << " y " << y << " es: " << man(x, y);
  cout << "\nEl menor de " << a << " y " << b << " es: " << man(a, b);
  cout << "\nEl menor de " << c << " y " << d << " es: " << man(c, d) << endl;
}
