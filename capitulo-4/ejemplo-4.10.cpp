// Sentencia ? : para decidir el order de dos números

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int n1, n2;

  cout << "Introduzca dos números." << endl;
  cout << "n1: ";
  cin >> n1;
  cout << "n2: ";
  cin >> n2;

  n1 > n2 
    ? cout << n1 << " > " << n2 
    : n2 > n1
      ? cout << n1 << " <= " << n2
      : cout << n1 << " == " << n2;

  system("PAUSE");
  return EXIT_SUCCESS;
}
