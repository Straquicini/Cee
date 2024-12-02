#include <iostream>
#include <stdio.h>
using namespace std;

string nome, pai, mae;
int idade, idadePai, idadeMae;

/** funcao para mostrar em menu **/
void menu (){
    cout << "\n\n ***  A MINHA APP *** \n\n";
    if ( nome != "") cout << "OLa " << nome << ",\n\n";
    cout << " 1 - Ler o SEU nome \n";
    cout << " 2 - Ler a SUA idade \n";

    cout << " 4 - Ler o nome do PAI \n";
    cout << " 5 - Ler a idade do PAI \n";

    cout << " 6 - Ler o SEU nome da MAE\n";
    cout << " 7 - Ler a SUA idade da MAE\n";

    cout << " 8 - Mostrar decendencia\n\n";
    cout << " 3 - Mostrar Mensagem BV\n\n";
    cout << " 0 - Sair da APP \n\n";
    cout << "R: ";
}

/** funcao para ler o nome **/
string funcaoLerNome (){
    string aux;
    cout << "\n\n Escreva o nome: ";
    // O cin apenas le uma palavra nao uma frase
    //cin >> aux;

    // o getline le a frase toda até ser dado um enter
    // enter = nova linha -- quebra de linha
    cin.ignore();
    getline (cin, aux);
    return aux;
}

int funcaoLerIdade(){
    int aux;
    cout << "\n\n Escreva a idade: ";
    cin >> aux;

    return aux;
}

void funcaoMsgBV(string nomeX, int idadeX){
    cout << "\n\nChamaste " + nomeX + " e tens ";
    cout << to_string (idadeX);
    cout << " anos!";
}

void  funcaoMostraDescendencia(string paiX, string maeX, string nomeX, int idadePaiX, int idadeMaeX, int idadeX){
    cout << "\n\n" << nomeX << " de " << idadeX << " aninhos, filho de " << paiX << " que tem " << idadePaiX << " anos e filho de " << maeX << " que tem " << idadeMaeX << " anos";
}

int main(){
    int op;

    do{
        menu();

        cin >> op;

        switch (op){
            case 1:
                nome = funcaoLerNome();
                break;

            case 2:
                idade = funcaoLerIdade();
                break;

            case 3:
                funcaoMsgBV(nome, idade);
                break;

            case 4:
                pai = funcaoLerNome();
                break;

            case 5:
                idadePai = funcaoLerIdade();
                break;

            case 6:
                mae = funcaoLerNome();
                break;

            case 7:
                idadeMae = funcaoLerIdade();
                break;

            case 8:
                funcaoMostraDescendencia(pai, mae, nome, idadePai, idadeMae, idade);
                break;

            default:
                break;
        }
    } while (op != 0);


    //menu();
    //funcaoLerNome();

    return 0;
}


