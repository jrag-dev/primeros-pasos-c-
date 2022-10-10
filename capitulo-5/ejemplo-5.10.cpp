
#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int c = 0;
  float suma = 0;
  int vmax;

  cout << "Cuantos términos sumo de la serie? ";
  cin >> vmax;

  for (;;)      // <-- bucle que no termina nunca por si sólo.
  {
    if (c <= vmax)  // condición para terminar el bucle
    {
      c++;
      suma += 1/(float)(c*c);
      cout << c << " " << suma << endl;
    }
    else
      break;
  }

  return EXIT_SUCCESS;
}
