// Escriba un programa que calcule y visualice 1 + 2 + 3 + ...+ (n-1) + n

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int n;

  cout << "Ingrese el valor de n: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cout << i << " + ";
  }

  return EXIT_SUCCESS;
}
