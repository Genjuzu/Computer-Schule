// Created by CSL

#include "funktionen.h.h"

int SimplerPntr() {
    int x = 100;
    int *xPntr = &x;
    cout << *xPntr << endl;
    cout << &x << endl << endl;
    return 0;
}

void ChangePntr() {
    int a = 666;
    int b = 333;
    int *aPntr = &a;

    cout << *aPntr << endl;

    *aPntr = b;
    cout << *aPntr << endl << endl;
}

int ChangeValue() {
    int zahl;
    int *zahlPntr = &zahl;

    while (true) {
        cout << "Gib eine Zahl ein zwischen 1-10 :  ";
        cin >> zahl;

        if (zahl > 0 && zahl < 11){
            cout << "Sehr gut! Deine Zahl ist" << zahl << endl << endl;
        }

        else {
            cout << "Ungültige Eingabe! Versuche es erneut";
            system("cls");
        }

        while (true) {
            cout << "Bitte gib nun eine neue Zahl ein:  ";
            cin >> *zahlPntr;

            if (*zahlPntr > 0 && *zahlPntr < 11) {
                cout << endl << endl << "Deine neue Zahl lautet" << *zahlPntr << endl;
                return 0;
            }

            else {
                cout << "Versuche es erneut" << endl;
                system ("cls");
            }
        }

    }
}

void Arrays() {
    int Arr[] = {55, 33, 22, 10, 6};
    for (int i = 0; i < 5; i++) {
        cout << Arr[i] << endl;
    }
}

void Arrays2() {
    int Arr[] = {1, 5, 3, 10, 2};
    int *ArrPntr = &Arr[0];

    for (int i = 0; i < 5; i++) {
        int temp = ArrPntr[i] * 2;
        cout << temp << endl;
        ;
    }
}

int parameter(int x, int y) {
    int sum = x + y;             // Berechnung der Summe
    cout << "Die Summe ist: " << sum << endl;  // Ausgabe des Ergebnisses
    return sum;                  // Rückgabe der Summe (optional, falls du das Ergebnis weiter verwenden möchtest)
}






