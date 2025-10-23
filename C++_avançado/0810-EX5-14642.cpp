#include <stdio.h>
#include <iostream>
using namespace std;

const int numTeles = 10;
const int numSaldos = 10;
const int numDasUltimasRecargas = 1000;
int recargaAtual = 0;



struct Telemovel {
    int id;
    int numTele;
};

struct Saldo {
    int idTele;
    float saldoAtual;
    float ultimaRecarga;
    string dataUltimaRecarga;
};

struct Recargas {
    int idTele;
    float recargaOperacao;
    string dataOperaco;
};

Telemovel telemoveis[numTeles];
Saldo saldos[numSaldos];
Recargas recarga[numDasUltimasRecargas];

void popularTeles(){

    for (int i = 0; i <= numTeles; i++){
        telemoveis[i].id = 101 + (i * 101);
        telemoveis[i].numTele = 910000101 + (i * 101);
        saldos[i].saldoAtual = 0;
    }

}

void recarregamento(int numero, float valor, string data) {
    Recargas recarg;

    for (int i = 0; i < numTeles; i++) {

        if (telemoveis[i].numTele == numero) {

            if (recargaAtual >= numDasUltimasRecargas) {

                for (int j = 1; j < numDasUltimasRecargas; j++) {

                    recarga[j - 1] = recarga[j];
                }

                recargaAtual--;
            }

            recarg = { telemoveis[i].id, valor, data };
            saldos[i].saldoAtual += valor;
            saldos[i].ultimaRecarga = valor;
            saldos[i].dataUltimaRecarga = data;
            recarga[recargaAtual++] = recarg;

            cout << "Recarga de " << valor << " euros feita no numero " << numero << "\n";
            return;
        }
    }
    cout << "Numero nao existe!\n";
}

void mostrarSaldo(int numero, string historico) {
    for (int i = 0; i < numTeles; i++) {
        if (telemoveis[i].numTele == numero) {
            cout << "Saldo do numero " << numero << ": " << saldos[i].saldoAtual << " euros. Ultima recarga: " << historico << "\n";
            return;
        }
    }
    cout << "Numero nao existe!\n";
}

int main (){

    popularTeles ();

    int opcao,numero;
    string data;
    float valor;

    cout << "Numero de telomoveis disponiveis:\n 910000101 /910000202 /910000303 /910000404 /910000505\n 910000606 /910000707 / 910000808 / 910000909 /910001010";

    do {
        cout << "\n\n1-Recarregar Telefone";
        cout << "\n2-Ver Saldo";
        cout << "\nEscolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            cout << "\nDigite o numero do tele: ";
            cin >> numero;
            cout << "Digite o valor da recarga: ";
            cin >> valor;
            cout << "Digite a data da recarga(dd/mm/yyyy): ";
            cin >> data;
            recarregamento(numero, valor, data);
            break;
        case 2:
            cout << "Digite o numero do tele: ";
            cin >> numero;
            mostrarSaldo(numero, data);
            break;
         case 3:
             //sair do programa
            break;
        default:
            cout << "Opcao invalida!\n";
        }
    } while (opcao != 3);
}

