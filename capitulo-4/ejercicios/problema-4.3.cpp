

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  float salario_neto;
  float horas_semanales_trab;
  float horas_extras;
  float tasa;
  float salario_bruto;

  cout << "Horas semanales trabajadas: ";
  cin >> horas_semanales_trab;

  if (horas_semanales_trab <= 38)
  {
    horas_extras = 0;
  }
  else
  {
    horas_extras = horas_semanales_trab - 38;
  }

  cout << "Introduzca la tasa: ";
  cin >> tasa;

  salario_bruto = horas_semanales_trab*tasa + horas_extras*tasa*(1.5);
  
  if (salario_bruto <= 300)
  {
    salario_neto = salario_bruto;
  }
  else
  {
    salario_neto = salario_bruto*(0.9);
  }

  cout << "Salario bruto: " << salario_bruto << endl;
  cout << "Salario neto: " << salario_neto << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}
