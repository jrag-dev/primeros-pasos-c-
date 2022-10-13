// La función main devuelve el menor de los dos numeros enteros que se pasan como
// parámetros. La función main itera llamadas a min

#include <cstdlib>
#include <iostream>
using namespace std;

int min (int x, int y)
{
  if (x < y)
    return x;
  else
    return y;
}

int main(int argc, char *argv[])
{
  int m, n;

  do {
    cout << "Introduzca dos números. Si el primero es cero fin. ";
    cin >> m >> n;

    if (m != 0)
      cout << "El menor es: " << min(m, n) << endl;
  } while(m != 0);

  return EXIT_SUCCESS;
}
