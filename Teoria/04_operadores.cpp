#include <iostream>

/*************************************************************
 *                      OPERADORES                            *
 *************************************************************/

int main() {
    // Aritméticos: +, -, *, /, %, ++, --
    int a = 10, b = 3;
    std::cout << "Suma: " << a + b << "\n";
    std::cout << "Resta: " << a - b << "\n";
    std::cout << "Multiplicación: " << a * b << "\n";
    
    // Conversión explícita para división
    double division = static_cast<double>(a) / b;
    std::cout << "División: " << division << "\n";
    
    // Comparación: ==, !=, <, >, <=, >=
    std::cout << "¿Es a mayor que b? " << (a > b) << "\n";
    
    // Lógicos: && (AND), || (OR), ! (NOT)
    bool condicion1 = true, condicion2 = false;
    std::cout << "AND lógico: " << (condicion1 && condicion2) << "\n";
    
    // Bitwise: &, |, ^, ~, <<, >>
    std::cout << "Desplazamiento izquierda: " << (a << 1) << "\n";
    
    return 0;
}
