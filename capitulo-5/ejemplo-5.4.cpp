#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int suma, n = 11;

  while (n <= 50)
  {
    suma = suma + n;
    n++;
  }

  cout << suma;

  return EXIT_SUCCESS;
}
