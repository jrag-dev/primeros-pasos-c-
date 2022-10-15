/******************************************************************************/
/* Calcula la función f(x) con variables estáticas. se define como            */
/*                                                                            */
/* f(0) = 0                                                                   */
/* f(1) = 1                                                                   */
/* f(2) = 2                                                                   */
/*                                                                            */
/* f(n) = f(n-3) +2*f(n-2) +f(n-1) si n > 2.                                  */
/*                                                                            */
/* resultados: 0, 1, 2, 4, 9, 19, 41, ...                                     */
/*                                                                            */
/******************************************************************************/

#include <cstdlib>
#include <iostream>
using namespace std;

//int resto(int n, int m);

long int funcionx();

int main(int argc, char *argv[])
{
  int n, i;

  cout << "Valor n de la función fx?: ";
  cin >> n;

  cout << "Secuencia de funcion fx: 0, 1, 2";

  for (i = 3; i <= n; i++)
  {
    cout << ", " << funcionx();
  }

  cout << endl;

  return EXIT_SUCCESS;
}

long int funcionx()
{
  static int x = 0, y = 1, z = 2;
  int aux;

  aux = x + 2*y + z;
  x = y;
  y = z;
  z = aux;

  return z;
}

