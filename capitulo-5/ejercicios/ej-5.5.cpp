// Cuál es la salida de este bucle

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int i = 1;

  while (i*i < 10)
  {
    int j = i;
    while (j*j < 100)
    {
      cout << i + j << " ";
      j *= 2;
    }
    i++;
    cout << endl;
  }
  cout << "\n*****\n";

  return EXIT_SUCCESS;
}
