#include <iostream>
#include <stdio.h>
using namespace std;

const int numPosicoes = 10;
int numeros[numPosicoes];

int main(){
    int op, aux;

    for (int i = 0; i < numPosicoes; i++){
        cout << "\nDiga o numero #" << i << ": ";
        cin >> numeros[i];

    }

    cout << "NUMEROS POR ORDEM CRESCENTE: ";
    for (int i = 0; i < (numPosicoes-1); i++){
        for (int j = (i + 1); j < (numPosicoes); j++){
            if (numeros[j] < numeros[i]) {
                aux = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = aux;
            }
        }
    }


    for (int x = 0; x < numPosicoes; x++){
        cout << numeros[x] << " ; ";
    }

    cout << "\n\nNUMEROS POR ORDEM DECRESCENTE: ";
    for (int i = 0; i < (numPosicoes-1); i++){
        for (int j = (i + 1); j < (numPosicoes); j++){
            if (numeros[j] > numeros[i]) {
                aux = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = aux;
            }
        }
    }

    for (int y = 0; y < numPosicoes; y++){
        cout << numeros[y] << " ; ";
    }

    return 0;
}


