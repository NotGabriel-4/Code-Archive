#include <iostream>

using namespace std;

bool eb(int a)
{
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a;

    cout << "Ingrese el año a consultar: ";
    cin >> a;

    if (eb(a))
    {
        cout << a << " es bisiesto" << endl;
    }
    else
    {
        cout << a << " no es bisiesto" << endl;
    }
}