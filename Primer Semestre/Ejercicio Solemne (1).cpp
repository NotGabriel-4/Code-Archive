// 1, 3 , 6 , 7, 10, 20, 22, 24, 26, 27, 29

#include <iostream>
using namespace std;

void sd(int &h, int &m, int &s)
{
    if (s == 59)
    {
        s = 0;
        m++;

        if (m == 60)
        {
            h++;
            m = 0;

            if (h == 24)
            {
                h = 0;
                m = 0;
                s = 0;
            }
        }
    }
    else
    {
        s++;
    }
}

int main()
{
    int h, m, s;

    do
    {
        cout << "Hora: ";
        cin >> h;
    } while (h >= 24 || h < 0);

    do
    {
        cout << "Minutos: ";
        cin >> m;
    } while (m >= 60 || m < 0);

    do
    {
        cout << "Segundos: ";
        cin >> s;
    } while (s >= 60 || s < 0);

    sd(h, m, s);

    cout << "La hora un segundo despues es: " << h << ":" << m << ":" << s;
}