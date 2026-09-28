#include <iostream>
using namespace std;

class Animal {
public:
    virtual void hacerSonido() {
        cout << "El animal hace un sonido" << endl;
    }
};

class Perro : public Animal {
public:
    void hacerSonido() override {
        cout << "El perro ladra" << endl;
    }
};

class Gato : public Animal {
public:
    void hacerSonido() override {
        cout << "El gato maulla" << endl;
    }
};

int main() {
    Animal* animal1 = new Perro();
    Animal* animal2 = new Gato();

    animal1->hacerSonido();
    animal2->hacerSonido();

    delete animal1;
    delete animal2;

    return 0;
}
