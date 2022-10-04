// Leer la calificación (nota) en una variable real, y mediante if anidados
// escribir el resultado.

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  float nota;

  cout << "Introduzca la nota (entre 0 y 10): ";
  cin >> nota;

  if (nota < 0 || nota > 10)
  {
    cout << "Error en nota";
  }
  else if (nota >= 0 and nota < 5) 
  {
    cout << "Suspenso";
  }
  else if (nota >= 5 and nota < 6.5)
  {
    cout << "Aprobado";
  }
  else if (nota >= 6.5 and nota < 8.5) 
  {
    cout << "Notable";
  }
  else if (nota >= 8.5 and nota < 10)
  {
    cout << "Sobresaliente";
  }
  else
  {
    cout << "Matricula de Honor";
  }

  system("PAUSE");
  return EXIT_SUCCESS;
}
