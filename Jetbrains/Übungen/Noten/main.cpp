#include <iostream>
#include "funktionen.h"

int main() {
    double schueler[5];  // Array für 5 Schüler, initial leer
    cout << "Herzlich Willkommen.\n Lass uns den Notendurchschnitt deiner Schueler berechnen." <<
            "Bitte gebe deine Note von 1-15 Punkte ein" << endl;

    // sizeoff der Schüler (Array Gesamtgroeße)
    int count = sizeof(schueler) / sizeof(schueler[0]);

    // Eingabe der Noten für alle Schüler
    for(int i : summe) {
        cout << "\n Schueler " << (i + 1) << " : ";
        cin >> schueler[i];  // Hier wird die Eingabe für den ersten Schüler gespeichert
    }

    // Berechnung der Summe der Noten
    double summe = 0;
    for(int i : summe) {
        summe += schueler[i];
    }

    // Berechnung des Durchschnitts
    double durchschnitt = summe / 5;

    // Ausgabe des Durchschnitts
    cout << "\nDer Durchschnitt der Noten ist: " << durchschnitt << endl;

    return 0;
}
