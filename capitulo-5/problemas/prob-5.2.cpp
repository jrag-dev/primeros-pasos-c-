

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int n;

  cout << "Ingrese el valor de n: ";
  cin >> n;

  for (int i= 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << "    ";
    }
    cout << endl;
  }
  

  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i - 1; j++)
    {
      cout << j << "    ";
    }
    cout << endl;
  }
}
