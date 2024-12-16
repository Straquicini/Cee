#include <stdio.h>
#include <iostream>

using namespace std;

string palavra = "bolo";
string espaco = "_";
int numTentativas = 6, numErros = 5;


void painel(int tentativas) {
    cout << "--------" << endl; // A base da forca
    if (tentativas >= 1){
        cout << "  O  " << endl; // Cabeça
    }

    if (tentativas >= 2){
        if (tentativas >= 3){
            cout << " /"; //braco esquerdo

        } else {
            cout << "  ";
        }

        cout << "|";
    }

    if (tentativas >= 4){
        cout << "\\" << endl; //braco direito
    }

    if (tentativas >= 5){
        cout << " / "; // Perna esquerda
    }

    if (tentativas >= 6){
        cout << "\\   " << endl; // Perna direita
    }

        cout << "--------" << endl;
}

void jogo(){
    string letra;
    cout << "Diz uma letra: ";
    cin >> letra;
}

string espacos(){
    for (int i = 0; i < palavra.length(); i++){
        cout << palavra.length[i] = espaco;

    }

}

/*string letraComoString(1, palavra[2]){
    palavra[2] :: char;
}*/

bool vericarLetra(){

    return 0;
}

bool verificarGanhou(){

    return 0;
}

bool verificarPerdeu(){
    if (numErros > numTentativas)if {
        return true;
    }

    return false;
}

int main(){

    painel(1);
    espacos();

    /*string letraComoString(1, palavra[2]);
    palavra[2] :: char*/
    return 0;
}
