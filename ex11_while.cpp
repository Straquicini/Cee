#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int num, soma = 0;

    cout << "Diga um número e quando quiser a soma dos numeros digite 0: ";
    cin >> num;
    while (num != 0) {
        cout << "Diga um número e quando quiser a soma dos numeros digite 0: ";
        cin >> num;
        soma = soma + num;
    }

    cout << "\n\nA soma de todos numeros = " << soma << "\n";

    return 0;
}
