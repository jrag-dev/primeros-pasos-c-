// Realizar un bucle que itera hasta que se introduzca s o n

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  char resp;

  do
  {
    cout << "introduzca S = Si N = No? ";
    cin >> resp;
    resp = toupper(resp);     // convierte a letra mayúscula
  } while ((resp != 'S') && (resp != 'N'));

  cout << "respuesta leida: " << resp;

  return EXIT_SUCCESS;
}
