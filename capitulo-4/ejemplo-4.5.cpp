// Leer una nota, y visualizar baja si es menor que 100 y alta en otro caso

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int nota;

  cout << "Dame una nota: ";
  cin >> nota;

  if (nota < 100)
  {
    cout << "Baja";
  }
  else
  {
    cout << "Alta";
  }

  system("PAUSE");
  return EXIT_SUCCESS;
}
