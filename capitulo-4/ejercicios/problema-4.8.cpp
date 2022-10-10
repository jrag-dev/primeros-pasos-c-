// Escribir un programa que simule un calculador simple.

#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{ 
  int n1, n2;
  char operacion;
  float suma, resta, producto, division, resto;

  cout << "**************************************************" << endl;
  cout << "Ingrese el primer número (n1): ";
  cin >> n1;
  cout << "Ingrese el segundo número (n2): ";
  cin >> n2;
  
  cout << "Operación a realizar: " << endl;
  cout << "\tSuma: tipear +" << endl;
  cout << "\tResta: tipear -" << endl;
  cout << "\tmultiplicación: tipear *" << endl;
  cout << "\tdivisión: tipear /" << endl;
  cout << "\tResto: tipear %" << endl;

  cin >> operacion;

  switch (operacion)
  {
    case '+':
      suma = n1 + n2;
      cout << "La suma de n1 + n2 = " << suma << endl;
      break;
    case '-':
      resta = n1 - n2;
      cout << "La resta de n1 - n2 = " << resta << endl;
      break;
    case '*':
      producto = n1*n2;
      cout << "La multiplicación de n1*n2 = " << producto << endl;
      break;
    case '/':
      if (n2 != 0)
      {
        division = n1/n2;
        cout << "La división de n1/n2 = " << division << endl;
        break;
      }
      else
      {
        cout << "No se permite división por cero!" << endl;
        break;
      }
    case '%':
      resto = n1%n2;
      cout << "El resto de n1%n2 = " << resto << endl;
      break;
    default:
        cout << "Operación no soportada!!" << endl;
  }

  return 0;
}
