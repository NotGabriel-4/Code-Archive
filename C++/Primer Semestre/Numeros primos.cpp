#include <iostream>

using namespace std;

int main ()
{
 int x, i, sn = 0;

 cout << "Ingrese el numero: " << endl;
 cin >> x;

 for (i = 2; i < x; i++)
 {
  if (x % i == 0)
  {
    sn += i;
  }
 }

 if (sn == 0)
 {
  cout << "El numero es primo" << endl;
 }
 if (sn != 0)
 {
    cout << "El numero no es primo" << endl;
 }
}