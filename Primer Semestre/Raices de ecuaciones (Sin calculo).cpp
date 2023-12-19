#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
 
 float a, b, c, dsc;
 char ec;

 do
 {
  cout << "raices de ecuaciones" << endl;
  cout << "ingrese los valores de a, b y c (ax^2 + bx + c)" << endl;
  cout << "a: ";
  cin >> a;
  cout << endl << "b: ";
  cin >> b;
  cout << endl << "c: ";
  cin >> c;

  cout << "La ecuación ingresada es: " << a << "x^2 + " << b << "x + " << c << endl;
  cout << "¿Está correcta? (s/n): ";
  cin >> ec;

 } while (ec == 'n');

    dsc = (pow(b,2) - 4 * a * c);

    if (dsc >= 0)
    {
        cout << "Las raíces de la ecuación son reales.";
    } 
    else if (dsc < 0)
    {
        cout << "Las raíces de la ecuación son imaginarias.";
    } 
}