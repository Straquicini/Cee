#include <stdio.h> // entrada e saida em C
#include <iostream> // entrada e saida em C++
using namespace std;

// import libraries

int main() {


    int x, y, idade;
    x = 10;
    y = 5;

    double pi = 3.1416;

    char letraNome = 'R';
    string nome = "Renan";

    cout << "Bem vindo, " << nome << "\n\n";
    cout << "Qual a tua idade: ";
    cin >> idade;
    cout << "\n Entao naceste em " << (2024 - idade) << "\n\n";

    //cout << "\n 10 + 5 = " << (x + y);
    printf("\n %d + %d = %d", x, y, (x + y));
    //printf("%d", x + y);

    // imprimir ao monitor em C
    //printf("1.Hello World!\n");

    // imprimir ao monitor em C++
    //cout << "2.Hello World!\n";
    return 0;

}
