// Descripción
// Un caluroso día de verano, Pete y su amigo Billy decidieron comprar una sandía. 
// Eligieron la más grande y madura (en su opinión). Después se pesó la sandía y la balanza mostró 
// kilos. Se apresuraron a casa, muriendo de sed, y decidieron dividir la sandia, sin embargo, enfrentaron un problema difícil.

// Pete y Billy son grandes admiradores de los números pares, por eso quieren dividir la sandía de tal 
// manera que cada una de las dos partes pese un número par de kilos, al mismo tiempo no es obligatorio que
// las partes sean iguales. Los niños están extremadamente cansados ​​y quieren comenzar su comida lo antes
// posible, por eso debes ayudarlos y averiguar si pueden dividir la sandía de la manera que quieran.
// Por supuesto, cada uno de ellos debería obtener una parte de peso positivo.

// -> Entrada
// La primera (y única) línea de entrada contiene el número entero 
//  el peso de la sandía comprada por los niños.

// -> Salida
// Escriba "SI", si los niños pueden dividir la sandía en dos partes,
// cada una de ellas con un número par de kilos; y "NO" en el caso contrario.

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int w;
    cin >> w;
    
    if (w > 2 && w % 2 == 0) {
        cout << "SI\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}