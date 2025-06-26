#include <iostream>
#include <vector>
// #include <algorithm>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> juguetes(N);
    long long suma_total = 0;
    int min_diversion = 101; // Asumimos que el nivel máximo es 100 según las cotas

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

// -> Entrada por teclado:
// g++ -o diversion.exe diversion.cpp
// .\diversion.exe

// -> Entrada desde archivo (con cmd)
// g++ -o diversion.exe diversion.cpp
// .\diversion.exe < entrada.txt

// -> Entrada por linea de comandos (argc, argv[])
// g++ -o diversion.exe diversion.cpp
// .\diversion.exe 5 10 20 30 40 50