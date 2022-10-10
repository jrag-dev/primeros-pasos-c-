// Bucle for ascendente que escribe los primeros números naturales, su cuadrado y su cubo.

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  cout << "n" << "\tn*n" << "\tn*n*n" << endl;

  for (int n = 1; n <= 5; n++)
  {
    cout << n << "\t"<< n*n << "\t"<< n*n*n << endl;
  }

  return EXIT_SUCCESS;
}
