#include <stdio.h> // entrada e saida em C
#include <iostream> // entrada e saida em C++
using namespace std;

int main() {


    int num1,num2, num3, ma, mi;
    double media;

    cout << "\nDigite um número: ";
    cin >> num1;

    ma = num1;
    mi = num1;

    cout << "\nDigite um número: ";
    cin >> num2;

    if (num2 > ma) {
        ma = num2;
    }

    if (num2 < mi) {
        mi = num2;
    }

    cout << "\nDigite um número: ";
    cin >> num3;

    if (num3 > ma) {
        ma = num3;
    }

    if (num3 < mi) {
        mi = num3;
    }



    cout << "\nO maximo = " <<ma<< "\n\n";
    cout << "\nO minimo = " <<mi<< "\n\n";
    cout << "\nA media = " <<((num1 + num2 + num3) / 3.0);

    cout << "\n soma dos numeros = " << (num1 + num2 + num3);



    return 0;

}
