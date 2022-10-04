// problema 3.8 del capitulo 3 del shaum

// 5€, 10€, 20€, 50€, 100€, 200€ y 500€
// 50 centimos 1 euro , 2 euros

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int quinientos, doscientos, cien, cincuenta, veinte, diez;
  int cinco, dos, uno, cincuentac, veintec, diezc, cincoc, dosc, unc;
  float cantidadOriginal;
  long int cantidad;

  cout << "Introduzca cantidad en euros ";
  cin >> cantidadOriginal;

  cantidadOriginal *= 100;            // se pasa euros a decimales con centimos
  cantidad = (int) cantidadOriginal;  // se trunca a centimos de euros

  quinientos = cantidad / 50000;  cantidad = cantidad % 50000;
  doscientos = cantidad / 20000; cantidad = cantidad % 20000;
  cien = cantidad / 10000; cantidad = cantidad % 10000;
  cincuenta = cantidad / 5000; cantidad = cantidad % 5000;
  veinte = cantidad / 2000; cantidad = cantidad % 2000;
  diez = cantidad / 1000; cantidad = cantidad % 1000;
  cinco = cantidad / 500; cantidad = cantidad % 500;
  dos = cantidad / 200; cantidad = cantidad % 200;
  uno = cantidad / 100; cantidad = cantidad % 100;
  cincuentac = cantidad / 50; cantidad = cantidad % 50;
  veintec = cantidad / 20; cantidad = cantidad % 20;
  diezc = cantidad / 10; cantidad = cantidad % 10;
  cincoc = cantidad / 5; cantidad = cantidad % 5;
  dosc = cantidad / 2; cantidad = cantidad % 2;
  unc = cantidad;

  cout << " cambio en moneda con el menor número " << endl;
  cout << " cantidad original en centimos: " << cantidadOriginal << endl;
  cout << " billetes de quinientos euros: " << quinientos << endl;
  cout << " billetes de doscientos euros: " << doscientos << endl;
  cout << " billetes de cien euros: " << cien << endl;
  cout << " billetes de cincuenta euros: " << cincuenta << endl;
  cout << " billetes de veinte euros: " << veinte << endl;
  cout << " billetes de diez euros: " << diez << endl;
  cout << " billetes de cinco euros: " << cinco << endl;
  cout << " monedas de dos euros: " << dos << endl;
  cout << " monedas de un euro: " << uno << endl;
  cout << " monedas de cincuenta centimos de euros: " << cincuentac << endl;
  cout << " monedas de veinte centimos de euros: " << veintec << endl;
  cout << " monedas de diez centimos de euros: " << diezc << endl;
  cout << " monedas de cinco centimos de euros: " << cincoc << endl;
  cout << " monedas de dos centimos de euro: " << dosc << endl;
  cout << " monedas de un centimo de euro: " << unc << endl;

  return 0;
}
