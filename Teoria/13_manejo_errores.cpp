#include <iostream>
#include <stdexcept>
#include <string>

/*************************************************************
 *               MANEJO DE ERRORES                            *
 *************************************************************/

// Función que puede lanzar una excepción
double dividir(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("División por cero");
    }
    return a / b;
}

// Clase personalizada de excepción
class ErrorPersonalizado : public std::exception {
private:
    std::string mensaje;
public:
    ErrorPersonalizado(const std::string& msg) : mensaje(msg) {}
    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};

int main() {
    try {
        // Probar división normal
        std::cout << "10 / 2 = " << dividir(10, 2) << "\n";
        
        // Probar división por cero
        std::cout << "10 / 0 = " << dividir(10, 0) << "\n";
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Error de ejecución: " << e.what() << "\n";
    }
    
    try {
        throw ErrorPersonalizado("Este es un error personalizado");
    }
    catch (const ErrorPersonalizado& e) {
        std::cerr << "Error personalizado: " << e.what() << "\n";
    }
    
    return 0;
}
