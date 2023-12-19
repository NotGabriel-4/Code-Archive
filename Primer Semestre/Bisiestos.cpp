#include <iostream>

using namespace std;

int main()
{

    cout << " Ejercicio 1 " << endl;
    cout << "" << endl;

    int a;
    cout << " Ingrese el año para verificar si es bisiesto" << endl;

    cin >> a;

    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
    {
        cout << "" << endl;
        cout << a << " Es Bisiesto " << endl;
    }
    else
    {
        cout << "" << endl;
        cout << a << " No es Bisiesto " << endl;
    }
}