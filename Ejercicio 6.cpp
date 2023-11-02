#include <iostream>
using namespace std;
int main(){
    try{
        throw runtime_error("Esta excepcion no ha sido capturada");
    }
    catch(int){
        cout<<"Se ha capturado una excepcion de tipo int (entero)";
    }
    cout<<"Mensaje que se imprime despues de la excepcion";
    return 0;
}