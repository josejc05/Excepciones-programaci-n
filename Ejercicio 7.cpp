#include <iostream>
#include <stdexcept>
#include <fstream>

void escribeEnArchivo(std::ofstream& archivo) {
    if (!archivo.is_open()) {
        throw std::runtime_error("No se puede escrbir en un archivo cerrado");
    }
    archivo<< "Hola mundo";

}
int main(){
    std::ofstream archivo("archivo.txt");
    try {
        archivo.close();
        escribeEnArchivo(archivo);
    }

    catch (std::runtime_error& e) {
        std::cout << "Excepcion capturada: " << e.what() << std::endl;
    }

    if (archivo.is_open()) {
        archivo.close();
    }
}