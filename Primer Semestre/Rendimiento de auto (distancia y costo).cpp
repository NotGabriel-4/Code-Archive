#include <iostream>

using namespace std;

int main()
{
    cout << "km recorridos y rendimiento de combustible" << endl;

    float li, lf, pxl, kmxl;
    float cv, dkm;

    cout << "¿Cual es el precio por litro de bencina?" << endl;
    cin >> pxl;

    cout << "¿Cual es el rendimiento de su vehiculo? (en km/l)" << endl;
    cin >> kmxl;

    cout << "¿Cuantos litros tenía el estanque al iniciar el viaje?" << endl;
    cin >> li;

    cout << "¿Cuantos litros quedaron al finalizar el viaje?" << endl;
    cin >> lf;

    dkm = (li - lf) * kmxl;
    cv = (li - lf) * pxl;

    cout << " Su viaje fue de " << dkm << "km y tuvo un coste de " << cv << endl;
}