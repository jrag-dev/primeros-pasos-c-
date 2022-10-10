/*
 * *************************************************************************
 *  El siguiente programa muestra dos bucles for anidados que presentan las
 *  tablas de multiplicar del 1, 2, 3, 4, 5, 6, 7, 8, 9, 10. pero de forma
 *  inversa. Para cada valor de la variable n en el rango de 1, 2, 3, 4, 5,
 *  6, 7, 8, 9, 10. Se ejecuta una order de escritura y el bucle interno
 *  for controlado por la variable entera m que toma los valores 10, 9, 8,
 *  7, 6, 5, 4, 3, 2, 1, escribiendo en cada iteración los valores n, m y
 *  su producto n*m.
 ***************************************************************************
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int n, m;

  for (n = 1; n <= 10; n++)
  {
    cout << "Tabla de multiplicar del " << n << endl;

    //for (m = 1; m <= 10; m++)
    for (m = 10; m >= 1; m--)
    {
      cout << n << " veces " << m << " = " << n*m << endl;
    }
  }

  return EXIT_SUCCESS;
}
