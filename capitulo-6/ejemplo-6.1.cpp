// Codificar un programa que contenga una función producto(), mostrar su
// estructura y realizar la llamada

#include <cstdlib>
#include <iostream>
using namespace std;

float producto(float num1, float num2);


int main(int argc, char *argv[])
{
  float num1, num2, prod;

  cout << "Ingrese numero1: ";
  cin >> num1;
  cout << "Ingrese numero2: ";
  cin >> num2;

  prod = producto(num1, num2);

  cout << "El producto de " << num1 << "*" << num2 << " = " << prod << endl;
}


float producto(float num1, float num2)
{
  float prod;
  prod = num1*num2;

  return prod;
}
