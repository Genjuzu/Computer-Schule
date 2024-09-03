#include "funktonen.h"
#include <iostream>
using namespace std;

void verdoppeln(int* pntr) {
    *pntr = *pntr * 2;  // Verdopple den Wert, auf den der Pointer zeigt
}



int main(){
    cout << "Bitte geben Sie 10 Werte ein" << endl;
    int x = 5;
    int *pntr = &x;
    verdoppeln(pntr);  // Korrekte Art, die Funktion aufzurufen
    cout << "Der verdoppelte Wert ist: " << x << endl;
    return 0;
}

