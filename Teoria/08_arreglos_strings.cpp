#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <initializer_list>
#include <valarray>

/*************************************************************
 *                  ARREGLOS Y STRINGS                        *
 *************************************************************/

int main() {
    // Arreglo estático (bidimensional)
    int matriz[2][3] = { {1, 2, 3}, {4, 5, 6} };
    
    // Arreglos Dinámicos
    int* arreglo = new int[10];  // Arreglo dinámico de 10 enteros
    // ... usar el arreglo ...
    delete[] arreglo;            // Liberar memoria
    
    // Contenedores modernos (C++11)
    std::array<int, 5> arr_moderno = { 1, 2, 3, 4, 5 };
    std::vector<int> vec = { 1, 2, 3, 4, 5 };
    std::initializer_list<int> init_list = { 1, 2, 3, 4, 5 };
    std::valarray<int> val_arr = { 1, 2, 3, 4, 5 };
    
    // String moderno
    std::string texto = "C++ Moderno";
    
    // Mostrar algunos resultados
    std::cout << "Vector: ";
    for(const auto& num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\nTexto: " << texto << "\n";
    
    return 0;
}
