#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    //programa que me mostre os numeros numeros existentes
    // entre um nom minimo e um maximo

    int numMin, numMax, aux;

    cout << "Diga o num minimo: ";
    cin >> numMin;
    aux = numMin;
    cout << "Diga o numMax: ";
    cin >> numMax;

    cout << "\n\n incluindo os proprios numeros \n";
    while (numMin <= numMax) {
        cout << numMin << "\n";
        numMin++;
    }

    cout << "\n excluido os proprios numeros \n";
    numMin = aux;
    numMin++;
    while (numMin < numMax) {
        cout << numMin << "\n";
        numMin++;
    }


    cout << "\n\nFIM DO PROGRAMA";

    return 0;
}
