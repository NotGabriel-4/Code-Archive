#include <iostream>
#include <vector>

class Libro
{
private:
    std::string nombre, autor;

public:
    Libro(std::string nombre, std::string autor)
    {
        this->nombre = nombre;
        this->autor = autor;
    }

    std::string GetNombre()
    {
        return nombre;
    }

    std::string GetAutor()
    {
        return autor;
    }
};

class LibroFisico : public Libro
{
private:
    int ubicacion;

public:
    LibroFisico(std::string nombre, std::string autor, int ubicacion) : Libro(nombre, autor)
    {
        this->ubicacion = ubicacion;
    }

    int GetUbicacion()
    {
        return ubicacion;
    }

    void SetUbicacion(int ubicacion)
    {
        this->ubicacion = ubicacion;
    }
};

class LibroVirtual : public Libro
{
private:
    std::string URL;

public:
    LibroVirtual(std::string nombre, std::string autor, std::string URL) : Libro(nombre, autor)
    {
        this->URL = URL;
    }

    std::string GetURL()
    {
        return URL;
    }

    void SetURL(int ubicacion)
    {
        this->URL = URL;
    }
};

class Librero
{
private:
    std::string nombre, direccion;
    std::vector<Libro *> Libros;

public:
    Librero(std::string nombre, std::string direccion)
    {
        this->nombre = nombre;
        this->direccion = direccion;
    }

    void IngresarLibro(Libro *L)
    {
        bool match = false;
        if (!Libros.empty())
        {
            for (int i = 0; i < Libros.size(); i++)
            {
                if (Libros.at(i)->GetNombre() == L->GetNombre() && Libros.at(i)->GetAutor() == L->GetAutor())
                {
                    match = true;
                    break;
                }
            }

            if (!match)
            {
                Libros.push_back(L);
            }

            else
            {
                std::cout << "Ya existe un libro con el mismo nombre" << std::endl;
            }
        }

        else
        {
            Libros.push_back(L);
        }
    }

    bool SacarLibro(std::string titulo)
    {
        bool retirado = false;
        if (!Libros.empty())
        {

            for (int i = 0; i < Libros.size(); i++)
            {
                if (Libros.at(i)->GetNombre() == titulo)
                {
                    Libros.erase(Libros.begin() + i);
                    std::cout << "Libro retirado con exito y eliminado del vector" << std::endl;
                    retirado = true;
                    break;
                }
            }

            if (!retirado)
            {
                std::cout << "No se encontró el libro especificado, intente nuevamente" << std::endl;
            }
        }
        else
        {
            std::cout << "No hay libros" << std::endl;
        }
        return retirado;
    }

    void ImprimirLibrosDelAutor(std::string autor)
    {
        if(!Libros.empty())
        {
            for(int i = 0; i < Libros.size(); i++)
            {
                if(Libros.at(i)->GetAutor() == autor)
                {
                    std::cout << "Libro encontrado: " << Libros.at(i)->GetNombre() << std::endl;
                }
            }
        }
    }
};

int main()
{
}