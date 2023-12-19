#include <iostream>
using namespace std;

int main()
{
    long int num, factorial, aux;

    cout << "Ingrese el numero para calcular su factorial: "; cin >> num;
    factorial = num;

    for (int i = (num - 1); i > 1; i--)
    {
    cout << factorial << " * " << i << " = ";
        factorial = factorial * i;
    cout << factorial << endl;
        cout << "\nFactorial: " << factorial << endl;
    }
    cout << "\nEl valor de " << num << "! es " << factorial << endl;
}
