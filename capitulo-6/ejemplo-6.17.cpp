/*************************************************************************/
/* Program file name ejemplo-6.17.cpp                                    */
/*                                                                       */
/* José Alvarado Octuber 2022                                            */
/*                                                                       */
/* Aprendiendo a usar variables externas con c++                         */
/*                                                                       */
/* Las funciones LeerRear y EscribirReal leen y escriben respectivamente */
/* la variable real r. Esta variable r es global y no está en el archivo */
/* fuente de las funciones.                                              */
/*                                                                       */
/*************************************************************************/

// archivo fuente extern2.cpp
#include <cstdlib>
#include <iostream>
using namespace std;

float f;

void LeerRear(void);
void EscribirReal();

int main(int argc, char *argv[])
{
  LeerRear();
  EscribirReal();

  return EXIT_SUCCESS;
}
