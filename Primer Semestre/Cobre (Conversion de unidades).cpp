#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int clp;
float ckg, vxlc, usdclp, pusd, kgl, lb;

kgl = 2.20462;

cout << "Introduzca la cantidad de cobre a vender (en kg): ";
cin >> ckg;

cout << "Introduzca el precio por libra del cobre: (en dolares): ";
cin >> vxlc;

cout << "Introduzca el valor de USD en CLP: ";
cin >> usdclp;

lb = ckg * kgl;

pusd = lb * vxlc;

clp = pusd * usdclp;

cout << endl << ckg << " kg = " << lb << " lb = $US " << pusd << " = $CLP " << clp << endl;
}