#include <stdio.h>
#include <iostream>
//#include <string>
using namespace std;

string palavra = "FAROFA";

string letras [26];
int numLetras = 0, numTentativas = 6, numErros = 0;

void desenharEnforcado(int tentativas){
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
        cout << " / " ; // Perna esquerda
    }

    if (tentativas >= 6){
        cout << "\\   " << endl; // Perna direita
    }

        cout << "--------" << endl;
}

void mostrarNumTentativas() {
    cout << "Errou : " << numErros << " de ";
    cout << numTentativas << " tentativas\n";
}

void mostrarLetrasEscolhidas() {
     if (numLetras > 0) {
        cout << "\nLetras escolhidas: ";
        for (int i = 0; i <= numLetras; i++) {
            cout << letras[i] << " ";
        }
        cout << "\n";
     }
}

void desenharQuadroPalavra() {
    bool tem;
    cout << "\nPALAVRA: ";
    for (int i = 0; i < palavra.length(); i++) {
        tem = false;
        for (int j = 0; j < numLetras; j ++) {
            string letraComoString (1, palavra[i]);
            if (letraComoString == letras[j]) tem = true;
        }
        if (tem) {
            cout << palavra[i] << " ";
        } else {
             cout << "_ ";
        }
    }
    cout << "\n\n";
}

void pedirLetra() {
    string letra;
    bool temLetra, encontrou = false;
    do {
        temLetra = false;
        cout << "Qual a letra #" << (numLetras+1) << " pretendida: ";
        cin >> letra;

        for (int i = 0; i < numLetras; i++) {
            if (letra == letras[i]) temLetra = true;
         }
    } while (temLetra);
    letras[numLetras] = letra;
    numLetras++;
    for (int i = 0; i < palavra.length(); i++) {
        string letraComoString(1, palavra[i]);
        if (letraComoString == letra) encontrou = true;
    }
    if (!encontrou) numErros++;
}

bool verificarGanhou() {
    bool letraPorDescobrir = false, tem;
    for (int i = 0; i < palavra.length(); i++) {
        tem = false;
        for (int j = 0; j < numLetras; j++) {
            string letraComoString(1, palavra[i]);
            if (letraComoString == letras[j]){
                tem = true;
            }
        }
        if (tem){
            //NAO FAZ NADA SE A LETRA ESTIVER NA PALAVRA
        } else {
           letraPorDescobrir = true;
        }
    }
    return (!letraPorDescobrir);
}

bool verificarPerdeu() {
    if (numErros > numTentativas) return true;
    return false;
}

int main() {

    bool ganhou = false;
    bool perdeu = false;

    do {

        desenharEnforcado(numErros);
        mostrarNumTentativas();
        mostrarLetrasEscolhidas();
        desenharQuadroPalavra();
        pedirLetra();
        ganhou = verificarGanhou();
        perdeu = verificarPerdeu();

    } while (!ganhou && !perdeu);

    if(ganhou){
        cout << "\n\n *** PARABENS *** \n\n";
    } else if (perdeu){
        cout << "\n\n *** PERDEU ... a palavra era : " << palavra << " *** \n\n";
    } else {
        cout << "\n\n *** ALGO DE ERRADO ACONTECEU *** \n\n";
    }


    return 0;
}
