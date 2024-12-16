#include <stdio.h>
#include <iostream>

using namespace std;

// Pointers/apontadores

int main(){
    int x=5;
    int* y = &x;

    cout << "\n x: " << x;
    cout << "\n &x: " <<&x;
    //x = 13;
    *y  = 22;
    cout << "\n y: " <<y;
    cout << "\n *y: " <<*y;
    cout << "\n x: " << x;
    cout << "\n &x: " <<&x;

    return 0;
}
