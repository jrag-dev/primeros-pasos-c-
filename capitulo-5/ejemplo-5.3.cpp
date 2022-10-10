#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  float suma = 0, n = 1;

  while (n <= 10)
  {
    // n es real para que el cociente 1/n sea en coma flotante
    suma += 1/n;
    n++;
  }

  cout << suma;

  return EXIT_SUCCESS;
}
