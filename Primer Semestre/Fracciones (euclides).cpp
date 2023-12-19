#include <iostream>
using namespace std;

int main() {
    int a, b, sa, sb;
    cout << "Ingrese el numerador de la fraccion: ";
    cin >> a;
    cout << "Ingrese el denominador de la fraccion: ";
    cin >> b;
    cout << "La fraccion es: " << a << "/" << b << endl;

    // Algoritmo de Euclides para encontrar el MCD
    int x = a, y = b, r;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    sa = a / x;
    sb = b / x;

    cout << "La fraccion simplificada es: " << sa << "/" << sb << endl;

    return 0;
}
