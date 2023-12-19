/*
6.	La provincia de Santiago tiene 32 comunas que están codificadas de la 1 a la 32. Se pide construir una aplicación que lea la
    siguiente información por cada comuna:

a.	Habitantes nacionales
b.	Habitantes extranjeros
c.	m2 de superficie la comuna
d.	número de colegios de la comuna
e.	m2 de áreas verdes

Una vez que haya leído los datos, presente el siguiente menú iterativo:

a)	Población provincia de Santiago
b)	Consultar población de una comuna (debe ingresar código de comuna)
c)	Porcentaje de extranjeros de una comuna (debe ingresar código de comuna)
d)	Consultar habitantes por m2 de una comuna (debe ingresar código de comuna)
e)	Comuna con mayor superficie (imprime el código), asuma que sólo una comuna es la de mayor superficie
f)	Comuna con mayor superficie de áreas verdes
g)	Cantidad de colegios de una comuna
h)	Incluya una consulta a elección 1 (usted la define)
i)	Incluya una consulta a elección 2 (usted la define)
j)	Salir
*/

#include <iostream>
using namespace std;

void datos(int c[32][5]) // Pide los datos
{
    for (int i = 0; i < 32; i++)
    {
        cout << "Ingrese los siguientes datos para la comuna " << i + 1 << ": " << endl;

        cout << "Cantidad de habitantes nacionales: ";
        cin >> c[i][0];

        cout << "Cantidad de habitantes extranjeros: ";
        cin >> c[i][1];

        cout << "Superficie total de la comuna (m2): ";
        cin >> c[i][2];

        cout << "Numero de colegios de la comuna: ";
        cin >> c[i][3];

        cout << "Areas verdes (m2): ";
        cin >> c[i][4];
        cout << endl;
    }
}

void supt(int c[32][5]) // Superficie total
{
    /* Mayor Superficie (Area total) */

    int s = c[0][2], auxs = 0;

    for (int i = 0; i < 32; i++)
    {
        if (c[i][2] > s)
        {
            s = c[i][2];
            auxs = i;
        }
    }
    cout << "La comuna con más superficie es la comuna " << auxs + 1 << endl;
}

void spav(int c[32][5]) // Superfice areas verdes
{
    /* Mayor superficie (Areas verdes)*/

    int av = c[0][4], auxa = 0;

    for (int i = 0; i < 32; i++)
    {
        if (c[i][4] > av)
        {
            av = c[i][4];
            auxa = i;
        }
    }
    cout << "La comuna con más areas verdes es la comuna " << auxa + 1 << endl;
}

void pobt(int c[32][5]) // Población total
{
    int snt = 0;

    for (int i = 0; i < 32; i++)
    {
        snt += c[i][0];
        snt += c[i][1];
    }

    cout << "La población total de la provincia de santiago es: " << snt << endl;
}

void pobc(int c[32][5]) // Población comuna
{
    int a;

    cout << "¿De que comuna quiere consultar la población total? (1-32): ";
    cin >> a;
    cout << "La población total de la comuna " << a << " es de " << c[a][0] + c[a][1] << endl;
}

void ppex(int c[32][5]) // Porcentaje extranjero
{
    int a, snc = 0, pp;

    cout << "¿De que comuna quiere consultar el porcentaje de residentes extranjeros?: ";
    cin >> a;

    snc += c[a][0];
    snc += c[a][1];

    pp = (c[a][1] * 100) / snc;

    cout << "El " << pp << "%"
         << " de los residentes de la comuna " << a << " son extranjeros" << endl;
}

void habm(int c[32][5]) // Habitantes por metro cuadrado
{
    int a, sn = 0, d;

    cout << "¿De que comuna quiere consultar la densidad? (1-32): ";
    cin >> a;

    sn += c[a][0];
    sn += c[a][1];

    d = sn / c[a][2];

    cout << "Hay " << d << " habitantes por metro cuadrado en la comuna " << a << endl;
}

void canc(int c[32][5]) // Cantidad de colegios
{
    int a;
    cout << "¿De que comuna quiere saber la cantidad de colegios?: ";
    cin >> a;

    cout << "En la comuna " << a << " hay " << c[a][4] << " colegios.";
}

int main()
{
    int c[32][5], a;

    datos(c);

    while (true)
    {
        cout << "Que datos quiere conocer: " << endl;
        cout << "1	Población provincia de Santiago" << endl;
        cout << "2	Consultar población de una comuna (debe ingresar código de comuna)" << endl;
        cout << "3	Porcentaje de extranjeros de una comuna (debe ingresar código de comuna)" << endl;
        cout << "4	Consultar habitantes por m2 de una comuna (debe ingresar código de comuna)" << endl;
        cout << "5	Comuna con mayor superficie (imprime el código), asuma que sólo una comuna es la de mayor superficie" << endl;
        cout << "6	Comuna con mayor superficie de áreas verdes" << endl;
        cout << "7	Cantidad de colegios de una comuna" << endl;
        cin >> a;

        if (a == 1)
        {
            pobt(c);
        }
        else if (a == 2)
        {
            pobc(c);
        }
        else if (a == 3)
        {
            ppex(c);
        }
        else if (a == 4)
        {
            habm(c);
        }
        else if (a == 5)
        {
            supt(c);
        }
        else if (a == 6)
        {
            spav(c);
        }
        else if (a == 7)
        {
            canc(c);
        }
        else if (a == 8)
        {
            cout << "Programa terminado.";
            break;
        }
    }
}