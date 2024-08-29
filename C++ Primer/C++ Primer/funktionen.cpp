#include "funktionen.h"



int validenummer() {
    int zahl;

    cin >> zahl;

    while (zahl <= 0) {
        cout << "Diese Zahl ist negativ. Versuche es erneut\n";
        cout << "Bitte gebe eine Zahl ein : ";
        cin >> zahl;
    }

    return zahl;
}
