#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    // calcular o Fatorial
    // n! = n * (n-1)! = ... = n * (n-1) * ... * 1!
    // 4! = 4 * 3! = 4 * 3 * 2! = 4 * 3 * 2 * 1! = 4x3x2x1 = 24
    int numero, fatorial;

    numero = 5;
    fatorial = 1;

    do {
        fatorial = fatorial * numero;
        cout << "O fatorial de " << numero << "! = " << numero;
        numero = numero - 1;
        cout << " x " << numero << "! \n\n";
    } while (numero >= 1);

    cout << "O fatorial de 5! = " << fatorial;

    cout << "\n\n";

    return 0;
}
