#include <iostream>
#include <stdio.h>
using namespace std;


/*int fibonacci(int x){
    int i, res, ultimo=1, penultimo=0;


    cout << penultimo << "\n" << ultimo << "\n";

    for(i=3 ; i<=x ; i++){
        cout << (ultimo+penultimo) << "\n";

        res = penultimo;
        penultimo = ultimo;
        ultimo = ultimo + res;

    }

    return ultimo;

}*/

int fibonacci(int x){
    int res = 0;
    if (x < 1)
        res = 0;
    else if ( x == 1)
        res = 1;
    else if (x == 2)
        res = 1;
    else
        res = fibonacci (x-1) + fibonacci (x-2);

    return res;
}

int main(){
    cout << fibonacci(10);

    return 0;
}


