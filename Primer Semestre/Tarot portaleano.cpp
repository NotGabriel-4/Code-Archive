#include <iostream>

using namespace std;
int main()
{
    int f1, m1, d1, f2, m2, d2;

    cout << "Ingrese la fecha de nacimiento de la pareja en formato AAAAMMDD: " << endl;
    cin >> f1 >> f2;

    m1 = (f1 / 100) % 100;
    m2 = (f2 / 100) % 100;
    d1 = f1 % 100;
    d2 = f2 % 100;

    if (f1 == f2)
    {
        cout << "La probabilidad de matrimonio es del 100%." << endl;
    }
    else if (m1 == m2 && d1 == d2)
    {
        cout << "La probabilidad de matrimonio es del 70%" << endl;
    }
    else
    {
        cout << "La probabilidad de matrimonio es del 10%" << endl;
    }
}