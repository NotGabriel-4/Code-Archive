#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float a, b, c, dsc;
    char ec;

    do
    {
        cout << "raices de ecuaciones" << endl;
        cout << "ingrese los valores de a, b y c (ax^2 + bx + c)" << endl;

        cout << "a: ";
        cin >> a;
        if (a == 0)
        {
            cout << "No es una ecuación de segundo grado." << endl;
        }
        cout << endl
             << "b: ";
        cin >> b;
        cout << endl
             << "c: ";
        cin >> c;

        cout << "La ecuación ingresada es: " << a << "x^2 + " << b << "x + " << c << endl;
        cout << "¿Está correcta? (s/n): ";
        cin >> ec;

    } while (ec == 'n');

    dsc = (pow(b, 2) - 4 * a * c);

    if (dsc >= 0)
    {
        float x1, x2;

        cout << "Las raíces de la ecuación son reales." << endl;

        x1 = ((b * -1) + sqrt(dsc)) / (2 * a);
        x2 = ((b * -1) - sqrt(dsc)) / (2 * a);

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (dsc < 0)
    {
        cout << "Las raíces de la ecuación son imaginarias.";
    }

    return 0;
}