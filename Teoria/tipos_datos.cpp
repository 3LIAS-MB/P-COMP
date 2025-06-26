#include <iostream>

//=============== 3. TIPOS DE DATOS FUNDAMENTALES ==============
/*
Tipos primitivos:
- Enteros: short(2b), int(4b), long(4/8b), long long(8b)
- Decimales: float(4b), double(8b), long double(16b) 
- Carácter: char(1b), wchar_t(2/4b)
- Booleano: bool (true/false)
*/

// Ejemplos de declaración y uso:
int entero = 42;               // Entero
double decimal = 3.1416;       // Decimal
char caracter = 'A';           // Carácter
bool logico = true;           // Booleano

// Tipos compuestos:
auto automatico = 3.14;        // Deduce tipo (C++11)
decltype(decimal) copia_tipo;  // Copia tipo de otra variable

// Conversiones entre tipos
int a = 10;
double b = static_cast<double>(a); // Conversión explícita segura

int main() {
    // Mostrar tamaños
    std::cout << "Tamaño de int: " << sizeof(int) << " bytes\n";
    std::cout << "Tamaño de double: " << sizeof(double) << " bytes\n";
    std::cout << "Tamaño de char: " << sizeof(char) << " byte\n";
    std::cout << "Tamaño de bool: " << sizeof(bool) << " byte\n";
    
    return 0;
}