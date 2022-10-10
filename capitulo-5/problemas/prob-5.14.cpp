

#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

float fact(int i);

int main(int argc, char *argv[])
{
  int n;
  int x = 1;
  float suma;

  cout << "Ingrese el número de términos: ";
  cin >> n;

  for (int i = 0; i <= n; i++)
  {
    suma += (pow(x, i))/ fact(i);
    cout << "i: " << i << " => " << "suma = " << suma << endl;
  }
  return EXIT_SUCCESS;
}


float fact(int i)
{
  float factorial = 1;
  for (int j = 1; j <= i; j++)
  {
    factorial = factorial * j;
  }

  return factorial;
}
