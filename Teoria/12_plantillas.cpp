#include <iostream>
#include <string>

/*************************************************************
 *                     PLANTILLAS                             *
 *************************************************************/

// Plantilla de función
template <typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b;
}

// Plantilla de clase
template <typename T>
class Contenedor {
private:
    T valor;
    
public:
    Contenedor(T val) : valor(val) {}
    
    T obtener() const { return valor; }
    void establecer(T val) { valor = val; }
};

int main() {
    // Usar plantilla de función
    std::cout << "Máximo de 10 y 20: " << maximo(10, 20) << "\n";
    std::cout << "Máximo de 3.14 y 2.72: " << maximo(3.14, 2.72) << "\n";
    std::cout << "Máximo de 'a' y 'z': " << maximo('a', 'z') << "\n";
    
    // Usar plantilla de clase
    Contenedor<int> entero(42);
    Contenedor<std::string> texto("Hola Mundo");
    
    std::cout << "Contenedor de entero: " << entero.obtener() << "\n";
    std::cout << "Contenedor de string: " << texto.obtener() << "\n";
    
    return 0;
}
