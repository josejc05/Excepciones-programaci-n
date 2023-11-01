#include <iostream>
#include <stdexcept>

void funcion3() {
    funcion3();
}

void funcion2() {
    throw std::runtime_error("Error en funcion2");

}

void funcion1() {
    funcion2();

}

int main(){
   try {
       funcion1();

}
    catch (std::runtime_error& e) {
         std::cout << "Excepcion: " << e.what() << std::endl;
    }
    return 0;
}
