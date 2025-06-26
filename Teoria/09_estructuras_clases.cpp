#include <iostream>

/*************************************************************
 *               ESTRUCTURAS Y CLASES                         *
 *************************************************************/

// Estructura (struct)
struct Punto {
    double x, y;
    
    // Constructor
    Punto(double x, double y) : x(x), y(y) {}
    
    // Método
    void mostrar() const {
        std::cout << "(" << x << ", " << y << ")\n";
    }
};

// Clase (class)
class Rectangulo {
private:
    double ancho, alto;
    
public:
    // Constructor
    Rectangulo(double a, double h) : ancho(a), alto(h) {}
    
    // Métodos
    double area() const { return ancho * alto; }
    void escalar(double factor) { 
        ancho *= factor; 
        alto *= factor; 
    }
};

int main() {
    // Usar estructura
    Punto p(3.0, 4.0);
    std::cout << "Punto: ";
    p.mostrar();
    
    // Usar clase
    Rectangulo r(5.0, 3.0);
    std::cout << "Área del rectángulo: " << r.area() << "\n";
    r.escalar(2.0);
    std::cout << "Área después de escalar: " << r.area() << "\n";
    
    return 0;
}
