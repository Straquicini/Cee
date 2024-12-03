#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    // calcular o Fatorial
    // n! = n * (n-1)! = ... = n * (n-1) * ... * 1!
    // 4! = 4 * 3! = 4 * 3 * 2! = 4 * 3 * 2 * 1! = 4x3x2x1 = 24
    //2 ^ (-2) = (1/2) ^2 = 1/2 * 1/2 = 1/4





    double expoente, base;
    double resul;

    expoente = -4;
    base = 2;
    resul = 1;

    cout << "Calcular " << base << "^exp(" << expoente << ") ::";

    if ( expoente < 0){
            //exxpoente positivo
        do {
            resul = resul * base;
            expoente--;

        } while (expoente >= 1);
    } else if (expoente < 0) {
        //expoencial negativo nao sabeiamos
        do {
            resul = resul * base;
            expoente++;

        } while (expoente <= -1);
        resul = 1 / resul;
    } else {
         // expoente == 0 .. resultado = 1
    }


    cout << "\n\n O expoencial = " << resul;

    cout << "\n\n";

    return 0;
}
