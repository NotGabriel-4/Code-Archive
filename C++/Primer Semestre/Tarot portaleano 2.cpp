#include <iostream>

using namespace std;
int main()
{
    int f1, m1, f2, m2, n, p10 = 0;

    cout << "Cuantas parejas consultaran el tarot portaleano: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la fecha de nacimiento de la pareja " << i << " en formato AAAAMMDD: " << endl;
        cin >> f1 >> f2;

        m1 = (f1 / 100) % 100;
        m2 = (f2 / 100) % 100;

        if (m1 != m2)
            p10++;
    }

    cout << "Las parejas con un 10% de probabilidad de matrimonio suman un total de " << p10 << "." << endl;
}