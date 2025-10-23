#include <stdio.h>
#include <iostream>
using namespace std;

struct datas {
    int dia;
    int mes;
    int ano;
};

/** Estruturas de dados*/
string getMes (int x){
    switch (x) {
    case 1:
        return "Janeiro";
        break;
    case 2:
        return "Fevereiro";
        break;
    case 3:
        return "Marco";
        break;
    case 4:
        return "Abril";
        break;
    case 5:
        return "Maio";
        break;
    case 6:
        return "Junho";
        break;
    case 7:
        return "Julho";
        break;
    case 8:
        return "Agosto";
        break;
    case 9:
        return "Setembro";
        break;
    case 10:
        return "Outubro";
        break;
    case 11:
        return "Novembro";
        break;
    case 12:
        return "Dezembro";
        break;
    }

    return "ERRO";
}

int main (){

    datas dataNascimento;

    dataNascimento.ano = 2008;
    dataNascimento.mes = 11;
    dataNascimento.dia = 11;

    cout << "\n\n";
    cout << " Nasci no dia " << dataNascimento.dia;
    cout << " do mes " << getMes(dataNascimento.mes);
    cout << " no seguinte ano " << dataNascimento.ano;
    cout << "\n\n";
    return 0;
}
