#include <iostream>

/*************************************************************
 *          PROGRAMACIÓN ORIENTADA A OBJETOS                  *
 *************************************************************/

// Clase base
class Animal {
public:
    virtual void sonar() { 
        std::cout << "Sonido indefinido\n"; 
    }
    virtual ~Animal() = default;  // Destructor virtual
};

// Clase derivada
class Gato : public Animal {
public:
    void sonar() override { 
        std::cout << "Miau!\n"; 
    }
};

// Clase derivada
class Perro : public Animal {
public:
    void sonar() override { 
        std::cout << "Guau!\n"; 
    }
};

// Demostración de polimorfismo
void hacerSonar(Animal& animal) {
    animal.sonar();  // Llamada polimórfica
}

int main() {
    // Crear instancias
    Gato gato;
    Perro perro;
    
    // Demostrar polimorfismo
    std::cout << "Sonido del gato: ";
    hacerSonar(gato);
    
    std::cout << "Sonido del perro: ";
    hacerSonar(perro);
    
    return 0;
}
