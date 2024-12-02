#include <iostream>
#include <stdio.h>
using namespace std;

const int numColunas = 9;
const int numLinhas = 6;
string tabuleiro[numColunas] [numLinhas];
string jogador1 = "X", jogador2 = "O";
int quemJoga = 0;

/**MOSTRA TABULEIRO**/
void mostraTabuleiro(){
    cout << "\n-------------------------------------";
    cout << "\n| x | x | x | x | x | x | x | x | x |";
    cout << "\n| x | x | x | x | x | x | x | x | x |";
    cout << "\n| x | x | x | x | x | x | x | x | x |";
    cout << "\n| x | x | x | x | x | x | x | x | x |";
    cout << "\n| x | x | x | x | x | x | x | x | x |";
    cout << "\n| x | x | x | x | x | x | x | x | x |";
    cout << "\n-------------------------------------";
    cout << "\n| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |";


    /*for(int l = 0; l < numLinhas; l++){
        for(int c = 0; c < numColunas; c++){
            cout << tabuleiro[l][c];
            if(c < 9)
                cout << "\n| x | x | x | x | x | x | x | x | x |";
        }
        if(l < 6)
            cout << "\n-------------------------------------";
            cout << "\n| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |";
            //cout << "\n";
    }*/


}

/** função que vai colocar a matriz/array vazia */
void recomecarJogo(){
}

/** função que vai verificar se o tabuleiro não tiver mais posições para jogar */
bool tabuleiroCheio(){
    return false;
}

/** função que verifica se ALGUEM ganhou */
bool alguemGanhou(){
    return false;
}

/** função que devolve o Jogador que ganhou */
string quemganhou(string fichaGanhadora){
    return "n sei";
}





int main(){
    int op, aux;

    mostraTabuleiro();



    return 0;
}


