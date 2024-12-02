#include <iostream>
#include <stdio.h>
using namespace std;

int numPosicoes = 4;

int main(){
    string op;
    string nomes [numPosicoes];

    /*que peça ao utilizador para inserir x nomes...
    x = numPosicoes disponiveis
    e que guarde no array nomes na posiçao especifica
    */


    for  (int i = 0; i < numPosicoes; i++) {
        cout << "\n Fale o nome #1: ";
        cin >> nomes;
        cout << i << " = " << cars [i] << "\n";
    }


    cin >> op;

    return 0;
}


