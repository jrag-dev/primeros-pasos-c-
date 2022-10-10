

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  const int centinela = -1;
  float nota, contador = 0, suma = 0;

  cout << "Introduzca la suiguente nota -1 centinela: ";
  cin >> nota;

  while (nota != centinela)
  {
    contador++;
    suma += nota;
    cout << "Introduzca la siguiente nota -1 centinela: ";
    cin >> nota;
  }

  if (contador > 0)
    cout << "media = " << suma/contador << endl;
  else
    cout << "no hay notas";

  return EXIT_SUCCESS;
}
