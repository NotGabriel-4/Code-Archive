#include <iostream>

using namespace std;

int main()
{
float distancia, tse, tce; //tse = tiempo sin energetica; tce = tiempo con energetica
int bebida; // Variable para asignar la bebida que consumió

cout << "Ingrese una distancia N en metros: ";
cin >> distancia;

cout << endl << "Ingrese la bebida que tomó: " << endl << "1. Blue Bull" << endl << "2. Monstruos Energy" << endl << "3. Señor Biggie" << endl << "4. Rocking Star" << endl;
cin >> bebida;

tse = distancia / 6000; // Aquí obtengo la distancia en m/h, según el problema el tiempo normal es de 6 km/h


if (bebida == 1)  //si la bebida es la primera
{
    tce = distancia / (6000 * 1.02); //tiempo con energetica = distancia / velocidad (para obtener el tiempo del recorrido)
}
else if (bebida == 2)
{
    tce = distancia / (6000 * 1.01);
}
else if (bebida == 3)
{
    tce = distancia / (6000 * 1.04);
}
else if (bebida == 4) 
{
    tce = distancia / (6000 * 1.03);
}
else
{
    cout << endl << "Por favor, escoja un opcion entre 1 y 4, usted eligio: " << bebida << endl;
    return 1;
}

/*--------------------------------------------------------------------------------------------------------*/

cout << "Usted se demorará " << tce * 60 << " minutos en caminar " << distancia << " metros, ";

if (bebida == 3) //si elige la bebida 3
{
    cout << "esta es la mejor opcion."; //es la mejor opcion puesto a que aumenta en un 4% la velocidad
}
else if (bebida == 4)
{
    cout << "y se podría demorar menos si consume Señor Biggie." << endl; //es la segunda mejor opcion, ya que mr big aumenta un 1% extra
}
else if (bebida == 1)
{
    cout << "y se podría demorar menos si consume Señor Biggie o Rocking Star." << endl; //tercera mejor opcion, se�orr biggie y  rocking star aumentan m�s
}
else if (bebida == 2)
{
    cout << "y se podría demorar menos si consume Señor Biggie, Rocking Star o Blue Bull" << endl;//es la que menos aumenta
}

cout << "Si no hubiera tomado ninguna energetica, se habría demorado " << tse << endl;
}
