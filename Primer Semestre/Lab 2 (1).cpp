#include <iostream>
using namespace std;

bool esPalindromo(char a[], int t) // Se declara la función esPalindromo, a = arreglo a entregar, t = tamaño de la palabra
{

    for (int i = 0; i < t / 2; i++)
    {
        if (a[i] != a[t - i - 1]) // Se comparan las letras una por una, al encontrar diferentes, se cumple el if
        {
            return false; // Si la palabra no es un palindromo se le da la función el valor de false
        }
    }
    return true; // Si no se encontraron letras diferentes, la funcion retorna truue
}

int main()
{
    string p; // Se declara la variable que almacena la palabra

    cout << "Ingrese una palabra para verificar su es o no un palindromo: ";
    cin >> p;

    if (esPalindromo(&p[0], p.length())) // Se le da a la funcion la variable que almacena la palabra y la que dice su largo
    {
        cout << "La palabra " << p << " es un palíndromo" << endl;
    }

    else
    {
        cout << "La palabra " << p << "no es un palíndromo" << endl;
    }
}