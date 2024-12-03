#include <iostream>
#include <stdio.h>

using namespace std;

int somar (int num1, int num2){
    return (num1 + num2);

}

void junta2nome (string nome1, string nome2){
    cout << "\n" << nome1 << " " << nome2 ;

}

int main(){
    int aux;
    //soma2numeros(3,5);
    //junta2nome("Renan", "Straquicini");

    aux = somar (3, 5);
    cout << "\n" << aux;

    return 0;
}


