// Considerar el siguiente programa

// para n = 0 no entra el bucle.
// para n = 1 entra al bucle e imprime i = 2
// para n = 3 entra al bucle pero como i es 1, no se incrementa i, tenemos un
// bucle infinito.

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int i = 1, n;

  cout << "Ingrese el valodr de n: ";
  cin >> n;
  
  while (i <= n)
  {
    if ((i % n) == 0)
      ++i;

    cout << i << endl;
  }

  return EXIT_SUCCESS;
}
