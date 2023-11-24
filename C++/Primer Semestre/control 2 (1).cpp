#include <iostream>

using namespace std;
int main ()
{
    int rut, rut_nm, fecha,a ,m, d, nmp = 0, nm, control = 1;

    cout << "Ingrese fecha de nacimiento: " << endl;
    cin >> fecha;

    a = fecha / 10000; m = (fecha / 100) % 100; d = fecha % 100;
    nm = (a + m + d) % 100;

    if (nm < 9)
    {
        nm += 10;
    }

    cout << "Ingrese rut sin digito verificador: " << endl;
    cin >> rut;

    for (int i = 1; true; i*=10) //Estaba como i * 10, lo que es incorrecto, corregido a i *= 10
    {
        rut_nm = (rut / i) % 100;

        if (rut_nm == nm)
        {
            nmp += 1;
        }
        control ++;
        if (control >= 7)
        {
            break;
        }
    }
    if (nmp != 0) // error 1, nmp == 0 es para rut no mágico, corregido a nmp != 0.
    {
        cout << "Su rut es mágico, pues " << nm << " está en su rut." << endl;
    }
    else if (nmp == 0) // mismo error, se puede reemplazar por un else.
    {
        cout << "Su rut no es mágico." << endl;
    }
}

/* Tres errores, las dos respuestas finales invertidas y i * 10 en vez de i *= 10 */