#include <iostream>
#include <stdio.h>
using namespace std;

const int numAlunos = 20;
const int numInformacoes = 3;
string infos[numAlunos] [numInformacoes] = {
    {"SERGIO", "15", "FAMALICAO" },
    {"GRANJA", "15", "FAMALICAO" },
    {"PEIXOTO", "15", "FAMALICAO" },
    {"GABRIEL", "15", "V.CONDE" },
    {"HENRIQUE", "15", "RIBEIRAO" },
    {"MITRAO", "15", "RIBEIRAO" },
    {"RENAN", "16", "RIBEIRAO" },
    {"EDUARDO", "16", "FREAMUNDE" },
    {"SAMUEL", "15", "S.TIRSO" },
    {"FRED", "15", "FAMALICAO" },
    {"RUBEN", "15", "S.TIRSO" },
    {"RUI", "15", "S.TIRSO" },
    {"AMORIM", "16", "FREAMUNDE" },
    {"MATEUS", "15", "FAMALICAO" },
    {"DAVID", "15", "TROFA" },
    {"SANTIAGO", "14", "FAMALICAO" },
    {"FERREIRA", "17", "TROFA" },
    {"MARCELO", "15", "AVES" },
    {"ANDRE", "15", "RIBEIRAO" },
    {"TIAGO", "15", "VIZELA" }

};

void mostraInfos(){
    int coluna, linha;
    for ( linha = 0; linha < numAlunos; linha++){
        for ( coluna = 0; coluna < numInformacoes; coluna++){
            cout << infos[linha][coluna] << "\n";;
        }
    }
}


int main(){
    int op, aux;

    mostraInfos();

    /*cout << "\nNome: " << infos[6][0];
    cout << " :: Idade: " << infos [6][1];
    cout << " :: Cidade: " << infos [6][2];*/


    return 0;
}


