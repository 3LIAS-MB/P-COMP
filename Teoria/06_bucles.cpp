#include <iostream>

/*************************************************************
 *                        BUCLES                              *
 *************************************************************/

int main() {
    // While (primero verifica condición)
    int i = 0;
    std::cout << "While loop: ";
    while (i < 3) {
        std::cout << i++ << " ";
    }
    std::cout << "\n";

    // Do-while (ejecuta al menos una vez)
    std::cout << "Do-while loop: ";
    do {
        std::cout << "Se ejecuta siempre\n";
    } while (false);

    // For tradicional
    std::cout << "For tradicional: ";
    for (int j = 0; j < 5; j++) {
        std::cout << j << " ";
    }
    std::cout << "\n";

    // For range-based (C++11)
    std::cout << "Range-based for: ";
    int numeros[] = { 1, 2, 3 };
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
