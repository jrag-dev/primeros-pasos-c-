// suponiendo que m = 3 y n = 5 ¿Cuál es la salida de los siguientes segmentos
// de programa.

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int n = 10;
  int m = 10;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " *";
    }
    cout << endl;
  }

  for (int i = n; i > 0; i--)
  {
    for (int j = m; j > 0; j--)
    {
      cout << " * ";
    }
    cout << endl;
  }

  return EXIT_SUCCESS;
}
