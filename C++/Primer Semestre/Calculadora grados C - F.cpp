#include <iostream>

using namespace std;

int main()
{
    float fahrenheit, celsius;
    int opcion;

    cout << "¿Qué conversión quieres hacer?" << endl;
    cout << "1. Fahrenheit a Celsius" << endl;
    cout << "2. Celsius a Fahrenheit" << endl;
    cin >> opcion;

    if (opcion == 1)
    {
        cout << "Ingresa la temperatura en grados Fahrenheit: ";
        cin >> fahrenheit;

        celsius = (fahrenheit - 32) * 5 / 9;
        cout << fahrenheit << " grados Fahrenheit equivalen a " << celsius << " grados Celsius." << endl;
    }
    else if (opcion == 2)
    {
        cout << "Ingresa la temperatura en grados Celsius: ";
        cin >> celsius;

        fahrenheit = (celsius * 9 / 5) + 32;
        cout << celsius << " grados Celsius equivalen a " << fahrenheit << " grados Fahrenheit." << endl;
    }
    else
    {
        cout << "Opción inválida. Por favor elige 1 o 2." << endl;
    }

    return 0;
}