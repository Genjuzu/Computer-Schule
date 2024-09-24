// Created by CSL

#include "funktionen.h"

void eingabe(int *pnt, int laenge){
    int i =0;
    cout << "Bitte gebe " << laenge << " Werte an : " << endl;

    while (i < laenge) {
        cin >> pnt[i];
        i++;
    }
}


void ausgabe(int *pnt, int laenge) {

    cout << "Die Werte werden nun Rueckwaerts ausgegeben";

    int i = laenge -1;
    while (i != -1) {
        cout << pnt[i] << endl;
        i--;
    }
}