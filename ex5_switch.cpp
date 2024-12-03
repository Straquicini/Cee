#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int dia;

    cout << "\n me fale o dia da semana que quer saber? (0...6)";
    cin >> dia;

    //dia = dia - 1;

    switch (dia){
    case 0:
        cout << "Domingo";
        break;
    case 1:
        cout << "Segunda-feira";
        break;
    case 2:
        cout << "Terca-feira";
        break;
    case 3:
        cout << "Quarta-feira";
        break;
    case 4:
        cout << "Quinta-feira";
        break;
    case 5:
        cout << "Sexta-feira";
        break;
    case 6:
        cout << "Sabado";
        break;
    default:
        cout << "nao faco ideia do dia em que estas !!!";
        break;
    }


    cout << "\n\n";

    return 0;
}
