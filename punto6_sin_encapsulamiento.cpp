#include <iostream>
#include <string>
using namespace std;

class Estudiante {
public:
    string nombre;
    int edad;
};

int main() {
    Estudiante estudiante;

    estudiante.nombre = "Deyvis";
    estudiante.edad = 19;

    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;

    return 0;
}
