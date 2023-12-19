#include <iostream>

using namespace std;

int main()
{
  int x, sn = 0;

  cout << "Ingrese el numero: " << endl;
  cin >> x;

  for (int i = 1; i < x; i++)
  {
    if (x % i == 0)
    {
      sn += i;
    }
  }

  if (sn == x)
  {
    cout << "El numero es un numero perfecto" << endl;
  }

  else

    cout << "El numero no es un numero perfecto" << endl;
}