#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    /**
    podemos comparar : numeros, textos
    tipos de dados primitivos
    **/
    int x=10, y=3;
    string nome, sobrenome;
    nome = "Renan";
    sobrenome = "Renan";

    if (x > y) {
        cout << "o X e maior que o Y";
    } else if (x < y) {
        cout << "o Y e maior  que o X";
    } else {
        cout << "o X e o Y sao iguais";
    }

    cout << "\n\n";

    (nome == sobrenome) ? cout << "sao iguais" : cout << "sao diferentes";



    return 0;
}
