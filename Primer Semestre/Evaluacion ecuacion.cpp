#include <iostream>
#include <math.h>

using namespace std;
int main()
{
 int x, v, ca = 0, cb = 0, cc = 0, cd = 0;

 /*
Construya una aplicación que evalúe la función -x^2 + 100x entre el intervalo entero [0, 100], e indique cuántos valores son:
a. Menores a 100
b. >100 y < 200
c. >= 200 y < 300
d. > 400
*/

 for (x = 0; x <= 100; x++)
 {

  v = (pow((x* -1), 2)) + (100 * x);

  if (v < 100)
  {
    ca++;
  }
  else if (v > 100 && v < 200)
  {
    cb++;
  }
  else if (v >= 200 && v < 300)
  {
    cc++;
  }
  else if (v > 400)
  {
    cd++;
  }
 }
 
 cout << "Valores menores a 100: " << ca << endl;
 cout << "Valores mayores que 100 y menores que 200: " << cb << endl;
 cout << "Valores mayores o iguales a 200 y menores que 300: " << cc << endl;
 cout << "Valores mayores a 400: " << cd << endl;

}