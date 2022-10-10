// Se escriben los números 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, con un
// bucle while, con un bucle for, y con un bucle do while en un mismo programa.

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int num = 10;

  while (num <= 100)      // con bucle while
  {
    cout << num << " ";
    num += 10;
  }

  cout << endl << endl;

  for (num = 10; num <= 100; num = num + 10) // con bucle for
  {
    cout << num << " ";
  }

  cout << endl << endl;

  num = 10;
  do                // con bucle do while
  {
    cout << num << " ";
    num += 10;
  } while (num <= 100);

  return EXIT_SUCCESS;
}
