#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona() {
        nombre = "Sin nombre";
        edad = 0;
    }

    Persona(string n, int e) {
        nombre = n;
        edad = e;
    }

    Persona(const Persona &otra) {
        nombre = otra.nombre;
        edad = otra.edad;
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    Persona persona1;
    Persona persona2("Carlos", 19);
    Persona persona3(persona2);

    cout << "Persona 1:" << endl;
    persona1.mostrarDatos();

    cout << "Persona 2:" << endl;
    persona2.mostrarDatos();

    cout << "Persona 3:" << endl;
    persona3.mostrarDatos();

    return 0;
}
