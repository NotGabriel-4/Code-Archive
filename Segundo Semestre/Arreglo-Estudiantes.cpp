#include <iostream>
using namespace std;

class students
{
private:
    int number;
    string name;
    float marks;

public:
    students() // Constructor
    {
    }

    // Getters

    int GetNumber()
    {
        return number;
    }

    string GetName()
    {
        return name;
    }

    float GetMarks()
    {
        return marks;
    }

    // Setters

    void SetNumber(int _number)
    {
        number = _number;
    }

    void SetName(string _name)
    {
        name = _name;
    }

    void SetMarks(float _marks)
    {
        marks = _marks;
    }
};

void orden(students student[], int x)
{
    for (int i = 0; i < x - 1; i++)
    {
        for (int j = 0; j < x - i - 1; j++)
        {
            if (student[j].GetMarks() < student[j + 1].GetMarks())
            {
                students aux = student[j];
                student[j] = student[j + 1];
                student[j + 1] = aux;
            }
        }
    }
}

void imprimir(students student[], int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << "Estudiante " << i + 1 << ":" << endl;
        cout << "\nNombre: " << student[i].GetName() << endl;
        cout << "ID: " << student[i].GetNumber() << endl;
        cout << "Puntaje: " << student[i].GetMarks() << "\n"
             << endl;
    }
}

int main()
{
    int x, number;
    string name;
    float marks;

    cout << "¿Cuantos estudiantes hay?: ";
    cin >> x;
    cout << endl;

    students *student = new students[x]; // Usamos asignación dinámica

    for (int i = 0; i < x; i++)
    {
        cin.ignore();
        cout << "¿Cual es el nombre del estudiante " << i + 1 << "?: ";
        getline(cin, name);
        student[i].SetName(name);
        cout << "¿Cual es el numero del estudiante " << i + 1 << "?: ";
        cin >> number;
        student[i].SetNumber(number);
        cout << "¿Cual es el puntaje del estudiante " << i + 1 << "?: ";
        cin >> marks;
        student[i].SetMarks(marks);
        cout << endl;
    }

    orden(student, x);
    imprimir(student, x);

    delete[] student; // Liberamos la memoria asignada dinámicamente

    return 0;
}
