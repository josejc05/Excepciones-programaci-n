#include<iostream>
#include<exception>
#include<string>
using namespace std;

class MiExcepcion : public std::exception {
private:
    std::string mensaje;
public:
    explicit MiExcepcion(const std::string& msg) : mensaje(msg) {}
    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};

void Excepcion() {
    throw MiExcepcion("Ha ocurrio un error en la funcion lanzaExcepcion");
}
int main() {
    try {
        Excepcion();
    }
    catch (const MiExcepcion& e) {
        cout << "Excepcion captureada: " << e.what() << endl;
    }
    return 0;
}
