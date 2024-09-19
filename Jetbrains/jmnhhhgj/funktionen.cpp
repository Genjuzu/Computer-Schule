#include "funktionen.h"

int Dezimalkreis() {
    int x = 1;
    int d = 1;

    for (x =1; x >= 0; x +=d) {
        cout << x << endl;

        if (x == 10) {
            d=-d;
        }

        if (x == 0) {
            d = +d;
        }
    }

    return 0;
}

void verdoppeln(int *zahl, int groesse) {
    for (int i = 0; i < groesse; i++) {
        zahl[i] = zahl[i] * 2;
    }
}

void faklutaet() {
    int n;
    int multiplikation = 1;
    int ergebnis = 1;

    cout << "Bitte gebe eine Zahl fuer die Faklultaet an : ";
    cin >> n;

    while (n) {
        n--;
        ergebnis = ergebnis * multiplikation;
        multiplikation++;
    }

    cout << endl << endl << ergebnis;
}






