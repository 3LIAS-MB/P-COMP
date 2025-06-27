// -> Descripción
// Nicolás es un niño muy caprichoso y sabe que su mamá hará lo posible por mantenerlo feliz. Nicolás suele
// aprovecharse de este hecho (por favor, no seas como Nicolas).

// Cada vez que Nicolás y su mamá van a hacer las compras, el niño exige que se le compren N juguetes.
// Normalmente termina ocurriendo, pero esta vez, la madre se puso firme y le dijo a Nicolás que no le comprará
// N juguetes, sino solamente N - 1. Es decir, si siempre le compraba 5 juguetes, esta vez le compraría solo 4.
// Nicolás está en una situación difícil y necesita conseguir la mayor diversión posible. Cada juguete tiene un nivel
// de diversión y la diversión final es la suma de los niveles de diversión de los juguetes adquiridos. Tu trabajo es
// conseguir la mayor diversión posible.

// -> Entrada
// • Una línea con la cantidad N de juguetes que eligió inicialmente Nicolás.
// • N líneas, cada una con el nivel de diversión de un juguete.

// -> Salida
// Una línea con la mayor diversión posible habiendo dejado exactamente un juguete sin comprar (puede ser
// cualquiera, siempre y cuando la diversión obtenida sea la mayor posible).



#include <iostream>
#include <vector>
// #include <algorithm>

// Si no quieres escribir std::
using namespace std;

int main() {
// -> Propósito: Desvincular cin de cout.
// -> Efecto:
//    Por defecto, cin está "atado" (tied)a cout, lo que fuerza un flush(vaciar el
//    buffer) de cout antes de cualquier operación de entrada en cin(para asegurar 
//    que mensajes como "Ingrese un número: " se muestren antes de leer).
//    Al desvincularlos(nullptr), se evita este flush automático, mejorando el rendimiento.
//
// -> Consecuencia:
//  Si necesitas mostrar un mensaje antes de leer(ej: cout << "Ingrese N: "; cin >> N;),deberás hacer un cout.flush() manualmente.
    cin.tie(nullptr);
//  Desincronizar los streams de C++ (cin/cout) de los streams de C (stdin/stdout).
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<char> juguetes(N);
    long long suma_total = 0;
    // Asumimos que el nivel máximo es 100 según las cotas  
    int min_diversion = 101;

    for (int i = 0; i < N; ++i) {
        cin >> juguetes[i];     
        suma_total += juguetes[i];
        if (juguetes[i] < min_diversion) {
            min_diversion = juguetes[i];    
        }
    }
        
    long long maxima_diversion = suma_total - min_diversion;
    cout << maxima_diversion << endl;

    return 0;
}

// ------------------------------------------------------------------------------------

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<char> juguetes(N);  // Usamos char en lugar de int
    long long suma_total = 0;
    int min_diversion = 101; 

    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        juguetes[i] = static_cast<char>(x);  // Guardamos como char
        suma_total += x;
        min_diversion = min(min_diversion, x);
    }

    cout << suma_total - min_diversion << '\n';

    return 0;
}

// -> Entrada por teclado:
// g++ -o diversion.exe diversion.cpp
// .\diversion.exe

// -> Entrada desde archivo (con cmd)
// g++ -o diversion.exe diversion.cpp
// .\diversion.exe < entrada.txt

// -> Entrada por linea de comandos (argc, argv[])
// g++ -o diversion.exe diversion.cpp
// .\diversion.exe 5 10 20 30 40 50