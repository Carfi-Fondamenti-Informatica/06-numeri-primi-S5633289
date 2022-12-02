#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int i,i2;
    cin>>i>>i2;
    bool risultato;
    if(i2==0) {
        risultato = intero(i);
        if (risultato == true) {
            cout << "numero primo";
        } else {
            cout << "numero non primo";
        }
    }else{
        risultato = intero(i,i2);
        if (risultato == true) {
            cout << "numero primo";
        } else {
            cout << "numero non primo";
        }
    }
    return 0;
}
