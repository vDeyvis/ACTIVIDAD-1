#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;

public:
    void setNombre(string n) {
        nombre = n;
    }

    void setEdad(int e) {
        if (e >= 0) {
            edad = e;
        }
    }

    string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }
};

int main() {
    Estudiante estudiante;

    estudiante.setNombre("Deyvis");
    estudiante.setEdad(19);

    cout << "Nombre: " << estudiante.getNombre() << endl;
    cout << "Edad: " << estudiante.getEdad() << endl;

    return 0;
}
