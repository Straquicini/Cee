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
    cout << "-------------------\n";
    cout << "|" << tabuleiro [0][5] << "|" << tabuleiro [1][5] << "|" << tabuleiro [2][5] << "|" << tabuleiro [3][5] << "|" << tabuleiro [4][5] << "|" << tabuleiro [5][5] << "|" << tabuleiro [6][5] << "|" << tabuleiro [7][5] << "|" << tabuleiro [8][5] << "|\n";
    cout << "|" << tabuleiro [0][4] << "|" << tabuleiro [1][4] << "|" << tabuleiro [2][4] << "|" << tabuleiro [3][4] << "|" << tabuleiro [4][4] << "|" << tabuleiro [5][4] << "|" << tabuleiro [6][4] << "|" << tabuleiro [7][4] << "|" << tabuleiro [8][4] << "|\n";
    cout << "|" << tabuleiro [0][3] << "|" << tabuleiro [1][3] << "|" << tabuleiro [2][3] << "|" << tabuleiro [3][3] << "|" << tabuleiro [4][3] << "|" << tabuleiro [5][3] << "|" << tabuleiro [6][3] << "|" << tabuleiro [7][3] << "|" << tabuleiro [8][3] << "|\n";
    cout << "|" << tabuleiro [0][2] << "|" << tabuleiro [1][2] << "|" << tabuleiro [2][2] << "|" << tabuleiro [3][2] << "|" << tabuleiro [4][2] << "|" << tabuleiro [5][2] << "|" << tabuleiro [6][2] << "|" << tabuleiro [7][2] << "|" << tabuleiro [8][2] << "|\n";
    cout << "|" << tabuleiro [0][1] << "|" << tabuleiro [1][1] << "|" << tabuleiro [2][1] << "|" << tabuleiro [3][1] << "|" << tabuleiro [4][1] << "|" << tabuleiro [5][1] << "|" << tabuleiro [6][1] << "|" << tabuleiro [7][1] << "|" << tabuleiro [8][1] << "|\n";
    cout << "|" << tabuleiro [0][0] << "|" << tabuleiro [1][0] << "|" << tabuleiro [2][0] << "|" << tabuleiro [3][0] << "|" << tabuleiro [4][0] << "|" << tabuleiro [5][0] << "|" << tabuleiro [6][0] << "|" << tabuleiro [7][0] << "|" << tabuleiro [8][0] << "|\n";
    cout << "-------------------";
    cout << "\n|1|2|3|4|5|6|7|8|9|";
    cout << "\n";
}

/** função que vai colocar a matriz/array vazia */
void recomecarJogo(){
    for (int j=0; j<numLinhas; j++){
        for (int i=0; i<numColunas; i++){
            tabuleiro[i][j]= " ";
        }
    }

}

/** controlar quem joga*/
void jogadores(){
    /*if (quemJoga = jogador1) {
        cout << "Jogador X faça sua jogada: ";
        cin >> tabuleiro[i][j];
    }
    if (quemJoga = jogador2){
        cout << "Jogador O faça sua jogada: ";
        cin >> tabuleiro[i][j];
    }*/




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

    recomecarJogo();


    mostraTabuleiro();



    return 0;
}


