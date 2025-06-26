#include <iostream>
#include <memory>

/*************************************************************
 *               MANEJO DE MEMORIA                            *
 *************************************************************/

class Recurso {
public:
    Recurso(int val) : valor(val) {
        std::cout << "Recurso " << valor << " creado\n";
    }
    ~Recurso() {
        std::cout << "Recurso " << valor << " destruido\n";
    }
    void usar() {
        std::cout << "Usando recurso " << valor << "\n";
    }
private:
    int valor;
};

int main() {
    // Puntero único (unique_ptr)
    std::cout << "\n=== Unique Pointer ===\n";
    auto ptr = std::make_unique<Recurso>(42);
    ptr->usar();
    
    // Puntero compartido (shared_ptr)
    std::cout << "\n=== Shared Pointer ===\n";
    auto shared_ptr1 = std::make_shared<Recurso>(10);
    {
        auto shared_ptr2 = shared_ptr1; // Incrementa el contador de referencias
        shared_ptr2->usar();
    } // shared_ptr2 se destruye, pero el recurso permanece
    
    shared_ptr1->usar();
    
    return 0;
} // Todos los recursos se liberan automáticamente
