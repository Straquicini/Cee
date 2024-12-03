#include <iostream>
#include <stdio.h>
using namespace std;


void funcaoA(int x){
    cout << x;
    if (x > 0){
        x--;
        funcaoA(x);
    }
}

int main(){
   funcaoA(8);

    return 0;
}


