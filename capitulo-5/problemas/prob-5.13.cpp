

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int d1, d2, d3, i, x;

  cout << " lista de números que cumplen la condición\n";

  for (i = 100; i <= 999; i++)
  {
    x = i;
    d1 = x % 10;
    x = x/10;
    d2 = x % 10;
    x = x / 10;
    d3 = x % 10;
    d3 = x;


    if (d1*d1 + d2*d2 + d3*d3 == i/3)
    {
      cout << "d1:" << d1 << " , " << "d2:" << d2 << ", " << "d3:" << d3;
      cout << "numero: " << i << endl;
    }
  }

  return EXIT_SUCCESS;
}
