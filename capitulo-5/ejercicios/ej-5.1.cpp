// ejercicio 5.1 del libro

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int cuenta;
  char simbolo = '*';

  for (cuenta = 1; cuenta < 5; cuenta++)
  {
    cout << (2*cuenta) << " ";
  }

  cout << endl << endl;

  for (int n = 10; n > 0; n = n -2)
  {
    cout << "Hola ";
    cout << n << endl;
  }

  cout << endl << endl;

  for (double n = 2; n > 0; n = n - 0.5)
  {
    cout << simbolo << " ";
  }

  cout << endl << endl;

  for (int n = 1; n <= 10; n++)
  {
    cout << n << " ";
    for (int m = 10; m >= 1; m--)
    {
      if (n == m)
      {
        cout << "@" << " ";
      }
      else
      {
        cout << m << " ";
      }
    }
    cout << simbolo << endl;
  }

  int k = 9;

  for (int i = k; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << simbolo << " ";
    }
    cout << endl;
  }

  for (int i = 1; i <= k; i++)
  {
    for (int j = i; j >= 1; j--)
    {
      cout << simbolo << " ";
    }
    cout << endl;
  }

  cout << endl << endl;

  for (int i = k; i >= 1; i--)
  {
    for (int j = i; j >= 1; j = j - 1)
    {
      cout << simbolo << " ";
    }
    for (int j = 1; j <= k; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }

  return EXIT_SUCCESS;
}
