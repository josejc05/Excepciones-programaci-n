#include <iostream>
#include <stdexcept>

void Excepcion() {
    throw std::runtime_error("se ha lanzado una excepcion");
}

int main() {
    try {
        try {
            Excepcion();
        } catch (const std::runtime_error &ex) {
            std::cout << "Excepcion capturada en el primer bloque catch: " << ex.what() << std::endl;



            throw;
        }
    } catch (const std::runtime_error &ex) {
        std::cout << "Excepcion capturada en el segundo bloque catch: " << ex.what() << std::endl;

    }

    return 0;
}
