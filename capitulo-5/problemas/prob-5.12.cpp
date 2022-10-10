

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int n, i;
  float maximo;
  float suma;

  do
  {
    cout << "Ingrese el máximo valor de la suma: ";
    cin >> maximo;

  } while (maximo < 0);

  for (i = 0, suma = 0; suma <= maximo;)
  {
    i++;
    suma = suma + (i*i - i - 2);
    cout << "suma: " << ":" << i << " = " << suma << endl;
  }
  
  n = i;

  cout << "suma = " << suma << endl;
  cout << "términos: " << n << endl;

  return EXIT_SUCCESS;
}
