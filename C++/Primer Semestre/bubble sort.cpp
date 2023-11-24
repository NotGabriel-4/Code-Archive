// Librerias
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Generar numeros aleatorios

void llenar(int x[20])
{
    int fila, columna;
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        x[i] = fila = rand() % (20);
    }
}

// Imprimir valores

void mostrar(int x[20])
{
    for (int i = 0; i < 20; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

// Ordenar codigo forma burbuja

void ordenar(int x[20])
{
    int j, i;
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 21; j++)
        {
            if (x[i] > x[j])
            {
                int aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }
}

// Suma total

int suma(int x[20])
{
    int total = 0;
    for (int i = 0; i < 20; i++)
    {
        total += x[i];
    }
    return total;
}

// Ordenar de mayor a menor

void mame(int x[20])
{
    ordenar(x);
    cout << "El numero mayor es " << x[0] << endl;
    cout << "El numero menor es " << x[19] << endl;
}

// Contar numeros pares e impares y ceros

void numeros(int x[20])
{
    int pares = 0, impar = 0, ceros = 0;
    for (int i = 0; i < 20; i++)
    {
        if (x[i] % 2 == 0)
        {
            pares++;
        }
        else if (x[i] != 0)
        {
            impar++;
        }
        else if (x[i] == 0)
        {
            ceros++;
        }
    }
    cout << "Los pares totales son: " << pares << endl;
    cout << "Los impares totales son: " << impar << endl;
    cout << "Los ceros totales son: " << ceros << endl;
}

// Remplazar numeros

void remplazar(int x[20], int y, int z)
{
    for (int i = 0; i << 20; i++)
    {
        if (x[i] == y)
        {
            x[i] = z;
        }
    }
}

// Contar numeros asignados

int contar(int x[20], int y)
{
    int contador = 0;
    for (int i = 0; i < 20; i++)
    {
        if (x[i] == y)
        {
            contador++;
        }
    }
    return contador;
}

/*------------------------------------------------------------*/

int main()
{
    int arreglo[20];
    llenar(arreglo);
    mostrar(arreglo);
    ordenar(arreglo);
    mostrar(arreglo);
    cout << "La suma total es: " << suma(arreglo) << endl;
    mame(arreglo);
    numeros(arreglo);

    int numero, rempl;
    cout << "Ingrese posicion que desea remplazar entre 1 y 20" << endl;
    cin >> numero;
    cout << "Ingrese numero por el que desea cambiar el " << numero << endl;
    cin >> rempl;
    remplazar(arreglo, numero, rempl);
    mostrar(arreglo);

    int valor;
    cout << "Ingrese un valor: ";
    cin >> valor;
    cout << endl;
    cout << "El valor " << valor << " se encuentra " << contar(arreglo, valor) << " veces." << endl;
}