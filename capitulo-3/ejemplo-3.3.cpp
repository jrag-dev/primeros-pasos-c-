// Desglosar cierta cantidad de segundos introducida por teclado en
// su equivalente en semanas, dias, horas, minutos y segundos

#include <iostream>
using namespace std;

int main()
{
  int semanas, dias, horas, minutos, segundos, acu;

  cout << "Introduzca los segundos: ";
  cin >> acu;

  segundos = acu % 60;
  cout << segundos << " ---- " << acu << endl;
  acu = acu / 60;
  minutos = acu % 60;
  cout << minutos << " ---- " << acu << endl;
  acu = acu / 60;
  horas = acu % 24;
  cout << horas << " ---- " << acu << endl;
  acu = acu / 24;
  dias = acu % 7;
  cout << dias << " ---- " << acu << endl;
  semanas = acu / 7;
  cout << semanas << " ---- " << acu << endl;

  cout << "Segundos en semanas, dias, horas, minutos y segundos.\n";
  cout << "número de semanas: " << semanas << endl;
  cout << "número de dias: " << dias << endl;
  cout << "número de horas: " << horas << endl;
  cout << "número de minutos: " << minutos << endl;
  cout << "número de segundos: " << segundos << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}
