#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float nota1, nota2, nota3, promedio; // se declara variable float para poder usar valores decimales
    cout << "Ingrese su primera nota" << endl;
    cin >> nota1;
    cout << "Ingrese su segunda nota" << endl;
    cin >> nota2;
    cout << "Ingrese su tercera nota" << endl;
    cin >> nota3;
    promedio = (nota1 + nota2 + nota3) / 3;
    // se calcula el promedio
    if (promedio > 3, 8 && promedio < 4)
    {
        cout << " " << endl;
        cout << "Busca las decimas en el cuaderno xdddd" << endl;
        cout << " " << endl;
    }
    if (promedio >= 4) // si no se cumple el if, se ejecutara el else
    {
        cout << "Aprobaste la asignatura con promedio:";
    }
    else /* else no es necesario para la ejecución del programa, si es que no se cumple la condicion
         se saltará la instrucción y nada más se puede utilizar otro if en lugar de else, pero
         funcionará como una instrucción por separado */
    {
        cout << "Reprobaste la asignatura con promedio:";
    }
    cout << promedio << endl;
    return 0;
}
