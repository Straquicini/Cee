#include <stdio.h>
#include <iostream>
//#include <string>
using namespace std;

string palavraCerta = "barco";

string letras [26];
int numLetras = 0, numTentativas = 5, numErros = 0;

void mostrarNumTentativas() {
    cout << "ja tens " << numErros << " de ";
    cout << numTentativas << " tentativas\n";
}

void desenharQuadroPalavra() {
    bool tem;
    cout << "\nPALAVRA: ";
    for (int i = 0; i < palavraCerta.length(); i++) {
        tem = false;
        for (int j = 0; j < numLetras; j ++) {
            string letraComoString (1, palavraCerta[i]);
            if (letraComoString == letras[j]) tem = true;
        }
        if (tem) {
            cout << palavraCerta[i] << " ";
        } else {
             cout << "_ ";
        }
    }
    cout << "\n\n";
}

void pedirPalavra() {
    string palavra;
    bool temPalavra, encontrou = false;
    do {
        temPalavra = false;
        cout << "Qual a palavra #" << (numLetras+1) << " pretendida: ";
        cin >> palavra;

        for (int i = 0; i < numLetras; i++) {
            if (palavra == palavra/*letras[i]*/) temPalavra = true;
         }
    } while (temPalavra);
    letras[numLetras] = palavra;
    numLetras++;
   /*for (int i = 0; i < palavraCerta.length(); i++) {
        string letraComoString(1, palavraCerta[i]);
        if (letraComoString == palavra) encontrou = true;
    }*/
    if (!encontrou) numErros++;
}

void mostrarLetrasForaDAPosicao() {
     if (numLetras > 0) {
        cout << "\nLetras escolhidas: ";
        for (int i = 0; i <= numLetras; i++) {
            cout << letras[i] << " ";
        }
        cout << "\n";
     }
}


bool verificarGanhou() {
    bool palavraPorDescobrir = false, tem;
    for (int i = 0; i < palavraCerta.length(); i++) {
        tem = false;
        for (int j = 0; j < numLetras; j++) {
            string letraComoString(1, palavraCerta[i]);
            if (letraComoString == letras[j]){
                tem = true;
            }
        }
        if (tem){
            //NAO FAZ NADA SE A LETRA ESTIVER NA PALAVRA
        } else {
           palavraPorDescobrir = true;
        }
    }
    return (!palavraPorDescobrir);
}

bool verificarPerdeu() {
    if (numErros > numTentativas) return true;
    return false;
}

int main() {

    bool ganhou = false;
    bool perdeu = false;

    do {

        mostrarNumTentativas();
        desenharQuadroPalavra();
        mostrarLetrasForaDAPosicao();
        pedirPalavra();
        ganhou = verificarGanhou();
        perdeu = verificarPerdeu();

    } while (!ganhou && !perdeu);

    if(ganhou){
        cout << "\n\n *** PARABENS *** \n\n";
    } else if (perdeu){
        cout << "\n\n *** PERDEU ... a palavra era : " << palavraCerta << " *** \n\n";
    } else {
        cout << "\n\n *** ALGO DE ERRADO ACONTECEU *** \n\n";
    }


    return 0;
}
