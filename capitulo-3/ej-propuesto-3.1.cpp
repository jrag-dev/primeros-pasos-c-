/*
 * **************************************************************************
 * Escribir un programa que acepte un año escrito en cifras arábigas y 
 * visualice el año escrito en números romanos, dentro del rango 1000 a 2010
 * **************************************************************************
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int cantidad, yearoriginal;
  int  I, V, X, L, C, D, M;

  cout << "Introduce el año escrito en números arábicos: ";
  cin >> yearoriginal;

  cantidad = yearoriginal;

  M = cantidad / 1000; cantidad = cantidad % 1000;
  D = cantidad / 500; cantidad = cantidad % 500;
  C = cantidad / 100; cantidad = cantidad % 100;
  L = cantidad / 50; cantidad = cantidad % 50;
  X = cantidad / 10; cantidad = cantidad % 10;
  V = cantidad / 5; cantidad = cantidad % 5;
  I = cantidad;
  
  cout << "Año en números arábicos: " << yearoriginal << endl;
  cout << M << endl;
  cout << D << endl;
  cout << C << endl;
  cout << L << endl;
  cout << X << endl;
  cout << V << endl;
  cout << I << endl;

  cout << "Tengo errores en como mostrar la salida: " << endl;
  for (int i = 0; i < M; i++) 
  {
    cout << 'M';
  }
  for (int i = 0; i < D; i++) 
  {
    cout << 'D';
  }
  for (int i = 0; i < C; i++) 
  {
    cout << 'C';
  }
  for (int i = 0; i < L; i++) 
  {
    cout << 'L';
  }
  for (int i = 0; i < X; i++) 
  {
    cout << 'X';
  }
  for (int i = 0; i < V; i++) 
  {
    cout << 'V';
  }
  for (int i = 0; i <I; i++) 
  {
    cout << 'I';
  }

  return 0;
}
