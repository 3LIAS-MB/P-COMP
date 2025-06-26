#include <iostream>
#include <string>

/*************************************************************
 *                      FUNCIONES                             *
 *************************************************************/

// Función con parámetros opcionales
void saludar(std::string nombre = "Usuario") {
    std::cout << "Hola, " << nombre << "!\n";
}

// Sobrecarga de funciones
int sumar(int a, int b) { return a + b; }
double sumar(double a, double b) { return a + b; }

int main() {
    // Llamada a función con parámetro opcional
    saludar("Carlos");
    saludar(); // Usa el valor por defecto

    // Uso de sobrecarga
    std::cout << "Suma de enteros: " << sumar(5, 3) << "\n";
    std::cout << "Suma de decimales: " << sumar(3.14, 2.86) << "\n";

    // Función lambda (C++11)
    auto cuadrado = [](int x) { return x * x; };
    std::cout << "El cuadrado de 5 es: " << cuadrado(5) << "\n";

    return 0;
}
