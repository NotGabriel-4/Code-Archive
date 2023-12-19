#include <iostream>

using namespace std;
int main()
{
  int a, b, sna = 0, snb = 0;
  cout << "Ingrese los numeros: " << endl;
  cin >> a >> b;

  for (int i = 1; i < a; i++)
  {
    if (a % i == 0)
    {
      sna += i;
    }
  }
  for (int ix = 1; ix < b; ix++)
  {
    if (b % ix == 0)
    {
      snb += ix;
    }
  }
  if (sna == b && snb == a)
  {
    cout << "Los numeros " << a << " y " << b << " son numeros amigos." << endl;
  }
  else
    cout << "Los numeros " << a << " y " << b << " no son numeros amigos." << endl;
}