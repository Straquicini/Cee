#include <iostream>
#include <stdio.h>
using namespace std;

/*void nomeinicial (string nome1){
    //comprimento da palavra
    cout << nome1.length();
    //mostra a letra na posicao X
    cout << "\n" << nome1 [0] ;

}*/

string iniciais (string nome1){
    string res = "";
    string primeiro = "", ultimo = "";

    primeiro = nome1 [0];
    for (int i = 1; i < nome1.length(); i++){
        if (nome1 [i-1] == ' ' && nome1 [i] != ' '){
            ultimo = nome1[i];
        }
    }

    res = primeiro + ultimo;
    return res;
}

int main(){
    int aux;

    cout << iniciais("Renan Straquicini");

    return 0;
}


