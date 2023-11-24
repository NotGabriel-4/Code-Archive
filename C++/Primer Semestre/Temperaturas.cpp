#include <iostream>

using namespace std;
int main()
{
    int th1, thmin, thmax, th, tdmin1, tdmax1, tdmin, tdmax;

    for (int i = 1; i <= 31; i++) // Repite el loop de las 24 horas por 31 días
    {
        cout << "Cual fue la temperatura del día " << i << endl;

        for (int j = 0; j <= 24; j++) // Pide la T° 24 veces, 1 por cada hora
        {
            cout << "A las " << j << ":00 horas." << endl;
            cin >> th;

            if (j == 0) // En la primera iteracion del bucle registra la primera temperatura
            {
                th1 = th;    // Primera T° = T° ingresada
                thmin = th1; // Le asigna a la primera T° el valor de "Menor T°"
                thmax = th1; // Le asigna a la primera T° el valor de "Mayor T°"
            }

            if (j > 0) // Luego de la primera iteracion comienza a comparar las T° ingresadas para actualizar los valores mínimos y máximos
            {
                if (thmin > th)
                {
                    thmin = th;
                }
                if (thmax < th)
                {
                    thmax = th;
                }
            }
        }

        cout << "La temperatura minima del día fue: " << thmin << endl;
        cout << "La temperatura máxima del día fue: " << thmax << endl;

        if (i == 1) // Asignamos los valores mínimos y maximos como la primera temperatura de los 31 días
        {
            tdmin1 = thmin; // AQUÍ ESTABA EL ERROR
            tdmax1 = thmax; // AQUÍ ESTABA EL ERROR
            tdmin = tdmin1; // AQUÍ ESTABA EL ERROR
            tdmax = tdmax1; // AQUÍ ESTABA EL ERROR
        }

        if (i > 1) //// Luego de la primera iteracion comienza a comparar las T° ingresadas para actualizar los valores mínimos y máximos
        {

            if (thmin < tdmin) // Si la temperatura minima/maxima actual es mayor/menor a la nueva, reemplazar el valor
            {
                tdmin = thmin;
            }
            if (thmax > tdmax)
            {
                tdmax = thmax;
            }
        }
    }
    cout << "La temperatura mínima de la semana fue de: " << tdmin << endl;
    cout << "La temperatura máxima de la semana fue de: " << tdmax << endl;
}