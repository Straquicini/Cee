#include <stdio.h>
#include <iostream>

using namespace std;

// função que recebe 2 numeros
// e devolve/retorna a troca dos 2
// x = 5, y = 10 => y = 5 e x = 10
void trocaNumeros (int &num1, int &num2){
    int aux = num1;
    num1 = num2;
    num2 = aux;
}

int main(){
    int x=5;
    int y = 10;

    cout << "\n x: " << x;
    cout << "\n y: " << y;
    trocaNumeros(x,y);
    cout << "\n\n x: " << x;
    cout << "\n y: " << y;

    return 0;
}
