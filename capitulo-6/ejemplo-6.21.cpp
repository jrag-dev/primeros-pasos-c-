// generar 10 números aleatorios menores que 100 y visualiza el menor y el mayor

#include <cstdlib>
#include <iostream>
#include <time.h>

#define randomize ( srand(time(NULL)) )   //Macro para definir randomize
#define random(num) (rand()%(num))        // Macro para definir random
#define Tope 100
#define MAX(x, y)(x > y ? x : y)
#define MIN(x, y)(x < y ? x : y)      // Macrp para minimo
using namespace std;

int main(int argc, char *argv[])
{
  int max, min, i;
  randomize;
  max = min = random(Tope);

  for (i = 1; i < 10; i++)
  {
    int x = random(Tope);

    min = MIN(min, x);
    max = MAX(max, x);
  }

  cout << "minimo: " << min << " maximo: " << max << endl;

  return EXIT_SUCCESS;
}
