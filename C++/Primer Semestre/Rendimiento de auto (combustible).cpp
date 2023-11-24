#include <iostream>

using namespace std;

int main()
{
    float km, kmxl, estanques;
    cout << "Calculadora de combustible" << endl;
    cout << "¿Cuantos km desea recorrer?: ";
    cin >> km;
    cout << "¿Cuantos km recorre su vehiculo por litro de combustible?: ";
    cin >> kmxl;

    estanques = km / kmxl;

    cout << " Necesitará " << estanques << " estanques de combustible para reccorrer " << km << " kilometros." << endl;
}