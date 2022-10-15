// archivo fuente extern1.cpp

#include <iostream>
using namespace std;

void LeerRear(void)
{
  extern float f;       // variable definida en otro archivo (ejemplo-6.17.cpp)
  cout << "Introduzca dato: ";
  cin >> f;
}

void EscribirReal(void)
{
  extern float f;   // variable definida en otro archivo (ejemplo-6.17.cpp)
  cout << f;
}
