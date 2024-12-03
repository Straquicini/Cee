#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int num, soma;
    soma = 0;

    do {
        cout << "Diga um numero e quando quiser a soma dos numeros digite 0: ";
        cin >> num;
        soma = soma + num;
    } while (num != 0);


    cout << "\n\nA soma de todos numeros = " << soma << "\n";


    return 0;
}
