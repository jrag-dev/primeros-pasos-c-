// Bucloe que escribe letras mayúsculas del alfabeto.

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  char car = 'A';

  do
  {
    cout << car << ' ';
    car++;
  } while (car <= 'Y');

  return EXIT_SUCCESS;
}
