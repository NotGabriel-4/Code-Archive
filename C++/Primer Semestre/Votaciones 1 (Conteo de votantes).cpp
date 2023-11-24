#include <iostream>

using namespace std;

int main()
{
    float pr, prv, phv, pmv, vh, vm, ppv, ppdv, ppnodv, ppvh, ppvm, vt, pnodv;

    /*
    Significado de Variables:

    ppv    = % de la población que votó.
    ppdv   = % de la población con derecho a voto que votó.
    ppnodv = % de población que no tiene derecho a voto.
    ppvh   = % de hombres que votó.
    ppvm   = % de mujeres que votó.
    pr     = población de la región.
    prv    = población de la región con derecho a voto.
    phv    = población hombres con derecho a voto.
    pmv    = población mujeres con derecho a voto.
    vh     = votos hombres.
    vm     = votos mujeres.
    vt     = votos totales.
    pnodv  = población sin derecho a voto.
    */

    cout << " ¿Cual es la población total de la región?: ";
    cin >> pr;

    cout << " ¿Cuantas personas de la región tienen derecho a voto?: ";
    cin >> prv;

    cout << " ¿Cuantos hombres tienen derecho a voto?: ";
    cin >> phv;

    cout << " ¿Cuantas mujeres tienen derecho a voto?: ";
    cin >> pmv;

    cout << " ¿Cuantos hombres votaron?: ";
    cin >> vh;

    cout << " ¿Cuantas mujeres votaron?: ";
    cin >> vm;

    vt = vh + vm;
    pnodv = pr - prv;

    if (vt < prv)
    {
        ppv    = (vt / pr)    * 100;
        ppdv   = (vt / prv)   * 100;
        ppnodv = (pnodv / pr) * 100;
        ppvh   = (vh / vt)    * 100;
        ppvm   = (vm / vt)    * 100;


        cout << endl;

        cout << "% de la población que votó:  " << ppv << "%" <<endl;

        cout << "% de la población con derecho a voto que votó:  " << ppdv << "%" <<endl;

        cout << "% de población que no tiene derecho a voto:  " << ppnodv << "%" <<endl;

        cout << "% de hombres que votó:  " << ppvh << "%" <<endl;

        cout << "% de mujeres que votó:  " << ppvm << "%" <<endl;
    }
    else
    {
        cout << "Los votos totales no pueden ser mayores o iguales a la población con derecho a voto" << endl;
    }

    return 0;
}
