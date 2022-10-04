// Leer el salario y los impuestos. Visualizar el salario neto

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  float salario_bruto, impuestos, salario_neto;

  cout << " introduzca salario bruto: ";
  cin >> salario_bruto;
  cout << " introduzca el impuesto (en %): ";
  cin >> impuestos;

  if (salario_bruto > 600)      // restar impuestos
  {
    salario_neto = salario_bruto - (salario_bruto*impuestos) / 100;
  }
  else                          // no restar impuestos
  {
    salario_neto = salario_bruto;
  }

  cout << "salario_bruto: " << salario_bruto << endl;
  cout << "salario_neto: " << salario_neto << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}
