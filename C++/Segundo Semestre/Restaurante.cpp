#include <iostream>
using namespace std;

/*
El reconocido restaurant “Ratatouille” necesita su ayuda para poder organizar a los empleados y ha
entregado la siguiente información:
● Un trabajador tiene las características de: nombre y sueldo.
● Los trabajadores se dividen en dos tipos principales: chef y camarero.
● Los chefs tienen como característica principal el plato que se dedican a cocinar: desayuno,
almuerzo u once. Mientras que los camareros cuentan con el atributo del número de mesas que
han atendido durante el día y la propina acumulada.
1. Cree las clases y métodos get/set necesarios. Considere la utilización de herencia.
2. Cree la clase Restaurant que contenga como atributo el estado (abierto o cerrado), un arreglo que contenga a 5
chef y otro para los camareros (que corresponden a 10).
3. Implemente los métodos que permitan obtener la siguiente información: Cantidad de mesas atendidas en el día.
La cantidad de propina que le toca a cada trabajador (chefs y camareros) si esta se reparte por partes iguales
entre todos. Conteo de chefs por cada tipo de plato.
*/

class empleado
{
protected:
    string nombre;
    int sueldo;

public:
    empleado(string nombre, int sueldo)
    {
        this->nombre = nombre;
        this->sueldo = sueldo;
    }

    // Getters

    string GetNombre()
    {
        return nombre;
    }

    int GetSueldo()
    {
        return sueldo;
    }

    // Setters

    void SetNombre(string nombre)
    {
        this->nombre = nombre;
    }

    void SetSueldo(int sueldo)
    {
        this->sueldo = sueldo;
    }
};

class chef : private empleado
{
private:
    string plato;

public:
    chef(string plato, string nombre, int sueldo) : empleado(nombre, sueldo)
    {
        this->plato = plato;
    }

    string GetPlato()
    {
        return plato;
    }

    void SetPlato(string plato)
    {
        this->plato = plato;
    }
};

class camarero : private empleado
{
private:
    int mesas, propina;

public:
    camarero(int mesas, int propina, string nombre, int sueldo) : empleado(nombre, sueldo)
    {
        this->mesas = mesas;
        this->propina = propina;
    }

    // Getters

    int GetMesas()
    {
        return mesas;
    }

    int GetPropina()
    {
        return propina;
    }

    // Setters

    void SetMesas(int mesas)
    {
        this->mesas = mesas;
    }

    void SetPropina(int propina)
    {
        this->propina = propina;
    }
};

class restaurant
{
private:
    camarero *camareros[10];
    chef *chefs[5];
    bool estado;

public:
    restaurant(camarero *camareros[], chef *chefs[], bool estado)
    {
        for (int i = 0; i < 10; i++)
        {
            this->camareros[i] = nullptr;
        }

        for (int i = 0; i < 5; i++)
        {
            this->chefs[i] = nullptr;
        }
        for (int i = 0; i < 10; i++)
        {
            this->camareros[i] = new camarero(*camareros[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            this->chefs[i] = new chef(*chefs[i]);
        }

        this->estado = estado;
    }

    ~restaurant()
    {
        for (int i = 0; i < 10; i++)
        {
            delete camareros[i];
        }

        for (int i = 0; i < 5; i++)
        {
            delete chefs[i];
        }
    }

    bool GetEstado()
    {
        return estado;
    }

    void SetEstado(bool estado)
    {
        this->estado = estado;
    }

    int mesas()
    {
        int mesas = 0;

        for (int i = 0; i < 10; i++)
        {
            if (camareros[i] != nullptr)
            {
            mesas += camareros[i]->GetMesas();
            }
        }

        return mesas;
    }

    int propinas()
    {
        int propinas = 0, cant_empleados = 0;

        for (int i = 0; i < 5; i++)
        {
            if(camareros[i] != nullptr)
            {
                propinas += camareros[i]->GetPropina();
            }
        }

        for (int i = 0; i < 10; i++)
        {
            if (camareros[i] != nullptr)
            {
                cant_empleados++;
            }
        }

        for (int i = 0; i < 5; i++)
        {
            if (chefs[i] != nullptr)
            {
                cant_empleados++;
            }
        }

        if(cant_empleados > 0)
        {
            propinas = propinas / cant_empleados;
            return propinas;
        }
        else
        {
            return 0;
        }
    }

    void chef_plato()
    {
        int desayuno = 0, almuerzo = 0, cena = 0;
        for (int i = 0; i < 5; i++)
        {
            if (chefs[i]->GetPlato() == "Desayuno")
            {
                desayuno++;
            }

            else if (chefs[i]->GetPlato() == "Almuerzo")
            {
                almuerzo++;
            }

            else if (chefs[i]->GetPlato() == "Cena")
            {
                cena++;
            }
        }

        cout << "Chefs asignados a desayuno: " << desayuno << endl;
        cout << "Chefs asignados a almuerzo: " << almuerzo << endl;
        cout << "Chefs asignados a cena: " << cena << endl;
    }
};

int main()
{
    // Crear camareros

    camarero* camareros[10];

    for (int i = 0; i < 10; i++)
    {
        string nombre = "Camarero " + to_string(i);
        camareros[i] = new camarero(i + 1, (i + 1) * 10, nombre, 1000);
    }

    // Crear chefs

    chef* chefs[5];

    chefs[0] = new chef("Desayuno", "Chef 1", 1500);
    chefs[1] = new chef("Almuerzo", "Chef 2", 1600);
    chefs[2] = new chef("Cena", "Chef 3", 1700);
    chefs[3] = new chef("Desayuno", "Chef 4", 1800);
    chefs[4] = new chef("Almuerzo", "Chef 5", 1900);

    // Crear restaurante

    restaurant miRestaurante(camareros, chefs, true);

    // Mostrar información

    cout << "Número total de mesas: " << miRestaurante.mesas() << endl;
    cout << "Propinas promedio: " << miRestaurante.propinas() << endl;
    miRestaurante.chef_plato();

    // Cambiar estado del restaurante

    miRestaurante.SetEstado(false);
    cout << "Estado del restaurante: " << (miRestaurante.GetEstado() ? "Abierto" : "Cerrado") << endl; 
    // El operador ? se utiliza para tomar decisiones basadas en una condición 
    // 'condicion ? valor_si_verdadero : valor_si_falso'

    // Liberar memoria
    
    for (int i = 0; i < 10; i++)
    {
        delete camareros[i];
    }
    for (int i = 0; i < 5; i++)
    {
        delete chefs[i];
    }

    return 0;
}
