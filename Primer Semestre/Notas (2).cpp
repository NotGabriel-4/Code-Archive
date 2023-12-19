#include <iostream>
using namespace std;

int main()
{
 int nn, n, sn = 0;
 
 cout << "Ingrese el numero de notas" << endl;
 cin >> nn;
 
 for (int i = 1; i <= nn; i++)
 {
  do {
  cout << "Ingrese nota " << i << endl;
  cin >> n;
  } while (n < 1 || n > 7);
  
  sn += n;
 }
 cout << "El promedio es " << (float) sn / nn << endl;
}