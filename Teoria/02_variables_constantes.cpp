#include <iostream>

/*************************************************************
 *                 VARIABLES Y CONSTANTES                      *
 *************************************************************/

/*
Variables: Almacenan datos modificables
Constantes: Valores inmutables (3 tipos)
*/

int main() {
    // Variables
    int variable = 10;               // Variable normal
    
    // Constantes
    const float PI = 3.1416f;        // Constante en tiempo de ejecución
    constexpr int MAX = 100;         // Constante en tiempo de compilación (C++11)
    #define VIEJA_MAX 100            // Macro (evitar en C++ moderno)
    
    // Mostrar valores
    std::cout << "Variable: " << variable << "\n";
    std::cout << "PI: " << PI << "\n";
    std::cout << "MAX: " << MAX << "\n";
    std::cout << "VIEJA_MAX: " << VIEJA_MAX << "\n";
    
    return 0;
}
