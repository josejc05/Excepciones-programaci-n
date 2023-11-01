#include<iostream>

using namespace std;
int divisionError(int a, int b) {
    if (b == 0) {
        return -1;
    }
    else {
        return a / b;
    }
}
int divisionExcepcion(int a, int b) {
    if (b == 0) {
        throw invalid_argument("Division por cero");
    }
    else {
        return a / b;
    }
}
int main() {
    int resultadoError = divisionError(5, 0);
    if (resultadoError == -1) {
        cout << "Error: division por cero."  ;
    }
    try {
        int resultadoExcepcion = divisionExcepcion(5, 0);
    }
    catch (const invalid_argument& e) {
        cout << "Excepcion: " << e.what() ;
    }
    return 0;
}