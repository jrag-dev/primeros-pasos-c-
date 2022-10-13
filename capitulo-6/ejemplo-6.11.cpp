// la funcion asteriscos tiene tres parámetros. El primero indica el número
// de filas, el segundo indica el número de columnas y el tercero el carácter
// a escribir. El segundo y tercer parámetro son por omisión.

#include <cstdlib>
#include <iostream>
using namespace std;

void asteriscos(int fila, int col = 3, char c = '*')
{
  for (int i = 0; i < fila; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << c;
    }
    cout << endl;
  }
}

int main(int argc, char *argv[])
{
  asteriscos(4);    // correcto dos parámetros por omisión
  cout << endl;
  asteriscos(4, 6); // Correcto 1 parámetro por omisión
  cout << endl;
  asteriscos(4, 6, '@');  // Correcto

  return EXIT_SUCCESS;
}
