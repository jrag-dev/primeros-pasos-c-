// Diferencias entre operadores de preincrementación y postincrementación

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int m = 10;
  int n;

  n = ++m;      // primero se incrementa m y luego se asigna a n
  cout << " m = " << m << " n = " << n << endl;
  n = m++;      // primero se asigna m a n y luego se incrementa m
  cout << " m = " << m << " n = " << n << endl;
  cout << " m = " << m++ << endl;
  cout << " m = " << ++m << endl;

  n = 5;
  m = (++n) * --n;      // +nn pone n a 6. luego --n pone m a 5. luego m = 25
  cout << " n = " << n << " m = " << m << endl;

  return EXIT_SUCCESS;
}
