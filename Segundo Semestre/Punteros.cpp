#include <iostream>
using namespace std;

void prueba_1(int valor)
{
    valor += 5;
}
void prueba_2(int * valor)
{
    valor -= 5;
}
void prueba_3(int & valor)
{
    valor += 500;
}
int main()
{
    int numero = 500;    // Declara el numero
    int *puntero_1;      // Declara el puntero
    puntero_1 = &numero; // Apunta el puntero a la direccion de memoria de "numero"

    // & es el operador para apuntar al valor de memoria

    cout << numero << endl;

    numero += 100;

    cout << puntero_1 << endl;  // Direccion de memoria
    cout << *puntero_1 << endl; // Numero

    prueba_1(numero);
    prueba_2(&numero);
    prueba_3(numero);
    
    cout << puntero_1 << endl;  // Direccion de memoria
    cout << *puntero_1 << endl; // Numero

}