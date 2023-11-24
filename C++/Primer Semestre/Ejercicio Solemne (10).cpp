#include <iostream>

using namespace std;

void cmf(float p, string x)
{
    float s;

    if (p < 3.5)
    {
        cout << "F" << endl;
    }
    else if (p >= 5)
    {
        cout << "Ez, te eximiste" << endl;
    }
    else
    {
        p *= 0.7;
        s = 4 - p;
        s = (s * 100) / 30;

        cout << "Necesitas un " << s << " en el examen para salvar " << x << endl;
    }
}

int main()
{
    while (true)
    {
    double p;
    string x;

    cout << "¿Que asignatura?: ";
    cin >> x;

    cout << "¿Cual es tu nota de presentación?: ";
    cin >> p;

    cmf(p, x);
    }
}