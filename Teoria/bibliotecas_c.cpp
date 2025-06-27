/*************************************************************
 *                BIBLIOTECAS COMUNES EN C++                *
 **************************************************************/

# include <iostream>   // Permite entrada y salida estándar (teclado y pantalla)
// Ejemplo:
// std::cout << "Hola" << std::endl;
// std::cin >> variable;

# include <vector>     // Permite usar arreglos dinámicos (vectores)
// Ejemplo:
// std::vector<int> v = {1, 2, 3};

# include <string>     // Permite usar cadenas de texto modernas
// Ejemplo:
// std::string nombre = "Juan";

# include <algorithm>  // Proporciona funciones para ordenar, buscar, transformar, etc.
// Ejemplo:
// std::sort(v.begin(), v.end());

# include <cmath>      // Funciones matemáticas como sqrt, pow, sin, cos, etc.
// Ejemplo:
// double raiz = std::sqrt(16.0);

# include <iomanip>    // Permite formatear la salida (número de decimales, ancho, etc.)
// Ejemplo:
// std::cout << std::fixed << std::setprecision(2) << 3.14159;

# include <map>        // Diccionario ordenado (clave-valor)
// Ejemplo:
// std::map<std::string, int> edades;

# include <set>        // Conjunto de elementos únicos ordenados
// Ejemplo:
// std::set<int> numeros;

# include <queue>      // Cola FIFO
// Ejemplo:
// std::queue<int> cola;

# include <stack>      // Pila LIFO
// Ejemplo:
// std::stack<int> pila;

# include <deque>      // Cola doblemente terminada
// Ejemplo:
// std::deque<int> doble_cola;

# include <array>      // Arreglo de tamaño fijo (C++11)
// Ejemplo:
// std::array<int, 5> arr = {1,2,3,4,5};

# include <utility>    // Funciones y tipos utilitarios como std::pair, std::swap
// Ejemplo:
// std::pair<int, int> par(1, 2);

# include <memory>     // Manejo de memoria dinámica y punteros inteligentes
// Ejemplo:
// std::unique_ptr<int> ptr = std::make_unique<int>(5);

# include <fstream>    // Permite leer y escribir archivos
// Ejemplo:
// std::ifstream archivo_entrada("datos.txt");
// std::ofstream archivo_salida("salida.txt");

# include <bitset>     // Manipulación eficiente de bits
// Ejemplo:
// std::bitset<8> bits(42); // 00101010

# include <chrono>     // Medición de tiempo y fechas (C++11)
// Ejemplo:
// auto inicio = std::chrono::high_resolution_clock::now();

# include <random>     // Generación de números aleatorios (C++11)
// Ejemplo:
// std::mt19937 rng(std::random_device{}());

# include <tuple>      // Tuplas de varios tipos de datos (C++11)
// Ejemplo:
// std::tuple<int, double, char> t(1, 2.5, 'a');

# include <unordered_map>   // Diccionarios sin orden, acceso rápido (hash)
# include <unordered_set>   // Conjuntos sin orden, acceso rápido (hash)
// Ejemplo:
// std::unordered_map<std::string, int> tabla_hash;
// std::unordered_set<int> conjunto_hash;

/*************************************************************
 * Usa estas bibliotecas según la estructura de datos o función que necesites. *
 *************************************************************/
