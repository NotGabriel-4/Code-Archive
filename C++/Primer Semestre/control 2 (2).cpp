#include <iostream>

using namespace std;

int main()
{
    int x, px, ux, a = 0;
    cout << "Ingrese un n° de 9 dígitos: " << endl;
    cin >> x;

    px = x / 100000; ux = x % 10000;

    if (px / 1000 == ux % 10) { // 1
        a++; }

    if ((px / 100) % 10 == (ux % 100) / 10) { // 2
        a++; }

    if ((px / 10) % 10 == (ux % 1000) / 100) { // 3
        a++; }

    if (px % 10 == ux / 1000) {
        a++; }

    if (a == 4) {
        cout << "Es espejo" << endl; }

    if (a != 4) {
        cout << "No es espejo" << endl; }
}