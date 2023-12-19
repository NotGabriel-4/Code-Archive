#include <iostream>
using namespace std;

// Lea un numero entero e indique cuantos digitos son pares, impares y ceros.

int main()
{
    int x, xm;
    int par = 0, impar = 0, ceros = 0;

    cout << "Ingrese numero: " << endl;
    cin >> x;

    for (int i = 10; true; i * 10)
    {

        xm = x % 10;

        if (xm == 0)
        {
            ceros++;
        }

        else if (xm % 2 == 0)
        {
            par++;
        }

        else
        {
            impar++;
        }

        if (x == 0)
        {
            break;
        }

        cout << xm << endl;

        x = x / i;
    }
    cout << "Hay " << par << " numeros pares." << endl;
    cout << "Hay " << ceros << " ceros. " << endl;
    cout << "Hay " << impar << " numeros impares. " << endl;
}