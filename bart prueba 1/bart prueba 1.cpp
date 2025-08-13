// bart prueba 1.cpp : consigna que la palabra "Bart" se repira

#include <iostream>
using namespace std;

void frase(unsigned n) {
    if (n == 0)
        return;            // caso base

    cout << "Bart ";       // imprime "Bart"
    frase(n - 1);          // llamada recursiva con n-1
}

int main() {
    frase(42);              // repite "Bart" 5 veces
    return 0;
}