#include <iostream>

using namespace std;

int main()
{
float nota;
cout << "Cual es tu nota" << endl;
cin >> nota;

if (nota > 1 && nota < 7)
{
    if (nota >= 6 && nota <=7)
        {
            cout << "Muy Bueno" <<endl;
        }
    if (nota >= 5 && nota <6)
        {
            cout << "Buena" <<endl;
        }
    if (nota >= 4 && nota <5)
        {
            cout << "Suficiente" <<endl;
        }
    if (nota < 4)
        {
            cout << "Insuficiente" <<endl;
        } 
}
else
{
    cout << " Como te vas a sacar un " << nota << " simio " << endl;
}
}