

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  char car;
  bool digito_leido = false;    // no se ha leido ningun dato
  
  while (!digito_leido)
  {
    cout << "Introduzca un carácter digito para salir del bucle: ";
    cin >> car;
    digito_leido = (('0' <= car) && (car <= '9'));
  }

  cout << car << " es el digito leido" << endl;

  return EXIT_SUCCESS;
}
