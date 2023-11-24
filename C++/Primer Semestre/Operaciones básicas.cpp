#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    cout << i << endl;      // imprime uno
    i = i + 1;              // suma 1 a la variable i
    cout << i << endl;      // imprime dos
    i++;                    // es lo mismo que i = i + 1
    cout << i << endl;      // imprime tres
    i+= 1;                  // es lo mismo que i = i + 1
    cout << i << endl;      // imprime cuatro
    i*= 3;                  // es lo mismo i = i * 3
    cout << i << endl;      // imprime doce
    i--;                    // es lo mismo que i = i - 1
    cout << i << endl;      // imprime once
    
}
