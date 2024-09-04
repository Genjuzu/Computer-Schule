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

// Funktion zur berechnung der Summe
double summe(double *arrPntr, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arrPntr[i];
    }
    return sum;
}

// Funktion zur Berechnung des Durchschnitts
double durchschnitt(double *ArrPntr, int n) {
    return summe(ArrPntr, n) / n;
}

// Funktion zur Berechnung des Maximums
double maximum(double *ArrPntr, int n) {
    double max = ArrPntr[0];

    for(int i = 0; i < n; i++) {
        if (ArrPntr[i] > max) {
            max = ArrPntr[i];
        }
    }
    return max;
}

// Funktion zur Berechnung des Minimums
double minimum(double *ArrPntr, int n) {
    double min = ArrPntr[0];

    for(int i = 0; i < n; i++) {
        if(ArrPntr[i] < min) {
            min = ArrPntr[i];
        }
    }
    return min;
}

void ArraySumme() {
        double Arrays[5];  // Statisches Array

    // Schleife für die Eingabe der Zahle
        cout << "Bitte gebe 5 Zahlen ein.\n";
            for (int i = 0; i < 5; i++) {
                cout << "Zahl " << i + 1 << " : ";
                cin >> Arrays[i];  // Eingabe der Zahl über Zeiger
            }
    system("Cls");

    // Ausgabe der Zahlen
        cout << "Die eingegebenen Zahlen sind: " << endl << endl;
            for (int i = 0; i < 5; i++) {
                cout << setw(5) << Arrays[i] << endl;  // Ausgabe der Zahlen
            }
        cout << endl;

        double result = summe(Arrays, 5);
        cout << "Die Summe ist : " << summe(Arrays, 5) << endl << endl;

    // Berechnung des Durchschnitts
    cout << endl << "Der Durchschnitt der Summe ist: " << summe(Arrays, 5) / 5 << endl << endl;

    // Berechnung des Durchschnitts
    cout << endl << "Der Durchschnitt der Summe ist: " << durchschnitt(Arrays,sizeof(Arrays) / sizeof(Arrays[0])) << endl << endl;

    // Berechnung des Maximums
    cout << endl << "Das Maximum der Summe ist: " << maximum(Arrays, sizeof(Arrays)/sizeof(Arrays[0]));

    // Berechnung des Minimums
    cout << endl << "Das Minimum der Summe ist: " << minimum(Arrays, sizeof(Arrays)/sizeof(Arrays[0]));

    system ("pause");
}

int parameter(int x, int y) {
    int sum = x + y;             // Berechnung der Summe
    cout << "Die Summe ist: " << sum << endl;  // Ausgabe des Ergebnisses
    return sum;                  // Rückgabe der Summe (optional, falls du das Ergebnis weiter verwenden möchtest)
}

void Tannebaum() {
    int size;
    cout << "Bitte gib die Groesse des Tannenbaums an" << endl;
    cin >> size;

    for (int i = 0; i < size; i++) {  // Die äußere Schleife steuert die Zeilen von oben nach unten
        for (int leer = 0; leer < size - i - 1; leer++) {
            cout << " ";  // Leerzeichen, um das Sternchen nach rechts zu rücken
        }

        for (int stern = 0; stern < 2 * i + 1; stern++) {
            cout << "*";  // Sterne drucken, Anzahl der Sterne wächst mit jeder Zeile
        }

        cout << endl;  // Sinn der Aussenschleife. Gehe zur nächsten Zeile, nach ausführung der anderen beiden FOR
    }
}






