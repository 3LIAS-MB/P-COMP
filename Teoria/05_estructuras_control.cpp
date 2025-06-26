#include <iostream>

/*************************************************************
 *               ESTRUCTURAS DE CONTROL                        *
 *************************************************************/

int main() {
    int a = 10, b = 3;

    // If-else con inicialización (C++17)
    if (int resultado = a * b; resultado > 20) {
        std::cout << "Resultado grande: " << resultado << "\n";
    }
    
    // Switch mejorado
    enum Dia { LUN, MAR, MIE, JUE, VIE, SAB, DOM };
    Dia hoy = MIE;
    
    switch (hoy) {
        case LUN:
            std::cout << "Inicio de semana\n";
            break;
        case VIE:
            std::cout << "¡Viernes!\n";
            break;
        default: 
            std::cout << "Día normal\n";
    }
    
    return 0;
}
