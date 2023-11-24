#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Rendimiento de publicaciones" << endl;

    float pb = 0, mg = 0, nmg = 0, vs = 0, wh = 1;
    float promediopb, pb10k = 0, pb0 = 0, pbmasnmg = 0;

    wh = 1;

    cout << "¿Cuantos videos publicaste hoy?" << endl;
    cin >> pb;

    while (wh <= pb)
    {
        float vs1;

        cout << "¿Cuantos me gusta tuvo tu publicación " << wh << "?" << endl;
        cin >> mg;

        cout << "¿Cuantos no me gusta tuvo tu publicación " << wh << "?" << endl;
        cin >> nmg;

        cout << "¿Cuantas visitas tuvo tu publicación " << wh << "?" << endl;
        cin >> vs1;

        vs += vs1;

        if (mg == 0 && nmg == 0)
        {
            pb0++;
        }
        if (nmg > mg)
        {
            pbmasnmg++;
        }
        if (vs > 10000)
        {
            pb10k++;
        }

        wh++;
    }

    promediopb = vs / pb;

    cout << "Total de visualizaciones: " << vs << endl;
    cout << "Promedio de visualizaciónes: " << promediopb << endl;
    cout << "Cantidad de publicaciones con + de 10k de visualizaciones: " << pb10k << endl;
    cout << "Cantidad de publicaciones con mas no me gusta que me gusta: " << pbmasnmg << endl;
    cout << "Cantidad de publicaciones sin me gusta ni no me gusta: " << pb0 << endl;

    return 0;
}