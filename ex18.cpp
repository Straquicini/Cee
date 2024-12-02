#include <iostream>
#include <stdio.h>
using namespace std;

int numPosicoes = 4;

int main(){
    string op;
    string cars [numPosicoes] = {"Volvo", "BMW","Ford", "Mazda" };

    for  (int i = 0; i < numPosicoes; i++) {
        cout << i << " = " << cars [i] << "\n";
    }

    int j = 0;
    for  (string car : cars) {
        cout << j << " = " << car << "\n";
        j++;
    }
    cin >> op;

    return 0;
}


