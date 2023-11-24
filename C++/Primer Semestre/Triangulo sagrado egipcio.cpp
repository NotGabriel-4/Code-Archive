#include <iostream>

using namespace std;

int main ()
{
    float l1, l2, l3, maximo, minimo;

    cout << "Ingrese la medida de todos los lados: " << endl;
    cin >> l1 >> l2 >> l3;

    // Asignar valor máximo
    maximo = l1;
    if (maximo < l2)
    {
        maximo = l2;
    }
    if (maximo < l3)
    {
        maximo = l3;
    }

    // Asignar valor mínimo
    minimo = l1;
    if (minimo > l2)
    {
        minimo = l2;
    }
    if (minimo > l3)
    {
        minimo = l3;
    }

    // Comprobar si es un Triángulo Sagrado Egipcio
    if (minimo * minimo + (l1 + l2 + l3 - maximo - minimo) * (l1 + l2 + l3 - maximo - minimo) == maximo * maximo)
    {
        cout << "El triangulo es un triangulo sagrado egipcio" << endl;
    }
    else
    {
        cout << "El triangulo no es un triangulo sagrado egipcio" << endl;
    }

    return 0;
}
