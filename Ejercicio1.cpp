#include<iostream>
using namespace std;
bool errorFlag;

int divide(int a, int b) {
    if (b == 0) {
        errorFlag = true;
        return 0;
    }
    else {
        return a / b;
    }
}

int main() {
    int result = divide(5, 0);
    if (errorFlag) {
        cout << "Ocurrio un error: division por cero." << endl;
    }
    return 0;
}