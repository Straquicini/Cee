#include <stdio.h>
#include <iostream>

using namespace std;

string palavra = "abacaxi",letrasDigitadas = "";
int numTentativas = 6, numErros = 0;


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

void numTentativas(int& tentativas) {
    cout << numTentativas - numErros << " de " << numTentativas << " tentativas restantes\n" <<;
}

void letrasEscolhidas(){
    cout << "Lista das letras: " << letrasDigitadas << "\n";
}

void quadraDepalavras(){
    for (int i = 0; i < palavra.length(); i++) {
        cout << "_";
    }
}

void pedirLetras(){
    string letra;
    cout << "Digite uma letra: ";
    cin >> letra;

}


bool verificarGanhou(){


}

bool verificarPerdeu(){

    return numErros >= numTentativas;;
}

int main(){

    painel(0);
    espacos();

    /*string letraComoString(1, palavra[2]);
    palavra[2] :: char*/
    return 0;
}
