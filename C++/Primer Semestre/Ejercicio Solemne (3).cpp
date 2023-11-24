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

void de(int &d, int &m, int &a)
{
    if (eb(a))
    {

        if (m == 2 && d == 29)
        {
            m++;
            d = 1;
        }
    }

    if (m % 2 != 0 && d == 31)
    {
        m++;
        d = 1;
    }

    if (m % 2 == 0 && eb(a) == false && d == 30 && m != 2)
    {
        m++;
        d = 1;
    }

    if (m == 12)
    {
        a++;
        m = 1;
        d = 1;
    }
}
int main()
{
    int a, m, d;

    cout << "Ingrese año, mes y día: " << endl;
    cin >> a >> m >> d;

    eb(a);

    de(a, m, d);

    cout << a << "/" << m << "/" << d;
}