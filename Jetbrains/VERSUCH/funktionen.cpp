// Created by CSL

#include "funktionen.h"

void Arrayz(int *x, int i) {
    cout << "Bitte gebe die Erste von Zehn zahlen ein:";
    cin >> x[i];

    for ( i = 1; i < 10; i++) {
        cout << "Bitte gebe nun Zahl " << i  << " ein:";
        cin >> x[i];
    }

    cout << "Super, Vielen Dank! Deine Zahlen lauteten: " << endl;

    for (int i = 0; i < 10; i++) {
        cout << x[i] << endl;
    }
}
