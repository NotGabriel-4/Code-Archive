#include <iostream>

using namespace std;
int main()
{
    int n = 0, gcc = 0, v, sn = 0, uc = 0; // gcc = ganancias con comision, v = venta, sn = suma de ventas
    float cta = 0, ctb = 0.5, x = 0;       // cta = comision tramo a, ctb = comision tramo b

    cout << "Calculadora de comisiones (para cerrar ingrese 0 o un valor negativo)" << endl;

    for (int i = 0; true; i++)
    {
        cout << "¿De cuanto fue la venta: " << endl;
        cin >> v;

        if (v <= 0)
        {
            break;
        }

        else if (sn < 50000)
        {
            v = v;
            sn += v;
            n++;
        }

        else if (sn >= 50000 && sn < 100000)
        {
            v = v * (1 + cta);
            gcc += v * cta;
            sn += v;
            n++;
            uc = v * cta;
        }
        else if (sn >= 100000)
        {
            v = v * ((1 + ctb) + x);
            gcc += v * (ctb + x);
            sn += v;
            x += 0.01;
            n++;
            uc = v * (ctb + x);
        }
    }
    cout << "Cantidad de ventas: " << n << endl;
    cout << "Suma de ventas: $" << sn << endl;
    cout << "Comision obtenida: $" << gcc << endl;
    cout << "Ultima comision obtenida: $" << uc << endl;
}