#include "funktionen.h"


void Kreis() {
    double radius;
    const double Pii = 3.1415926536;  // Pii ist eine benannte Konstante f�r Pi

    cout << "Wie gro� ist der Radius deines Kreises? ";
    cin >> radius;

    double ergebnis = (Pii * 2) * radius;
    cout << "Der Umfang des Kreises betr�gt: " << ergebnis << endl;
};