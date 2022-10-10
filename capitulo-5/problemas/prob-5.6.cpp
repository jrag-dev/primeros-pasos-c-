

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int npares = 30;
  int m = 0, i = 0;
  int suma = 0;

  while (m <= npares)
  {

    if (i%2 == 0)
    {
      suma += i;
      m++;
    }
    i++;
  }

  cout << "Suma: " << suma;

  return EXIT_SUCCESS;
}
