// Leer tres números enteros y visualizar el mayor

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int n1, n2, n3, mayor;

  cout << " introduzca tres numeros ";
  cin >> n1 >> n2 >> n3;

  mayor = n1;

  if (mayor < n2)
    mayor = n2;
  if (mayor < n3)
    mayor = n3;

  cout << " el mayor es: " << mayor << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}
