#include "funktionen.h"

#include <algorithm>
using namespace std;



// Tauscht die Inhalte der beiden Arrays
void tauschen(int *Arrpntr, int *BrrPntr, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        temp = Arrpntr[i];      // Speichert den Wert von Arrpntr[i]
        Arrpntr[i] = BrrPntr[i]; // Tauscht den Wert von BrrPntr[i] in Arrpntr[i]
        BrrPntr[i] = temp;      // Setzt den alten Wert von Arrpntr[i] in BrrPntr[i]
    }
}


// Arrays sortieren
void sortArr() {
    // Initialisiere Arr 1
    int Arr[5] = {5, 2, 9, 1, 7};

    // Zeige die Elemente von Arr 1 an
    cout << "Arr 1 vor dem Tauschen: ";
    for(int i = 0; i < 5; i++) {
        cout << setw(5) << Arr[i];
    }
    cout << endl << endl;

    // Initialisiere Arr 2
    int Brr[5] = {2, 3, 4, 5, 6};

    cout << "Arr 2 vor dem Tauschen: ";
    for(int i = 0; i < 5; i++) {
        cout << setw(5) << +Brr[i];
    }
    cout << endl << endl << endl << endl;

    // Tausche Arr 1 und Arr 2
    tauschen(Arr, Brr, 5);

    // Output für Array
    cout << "Arr 1 vor dem Tauschen: ";
    for (int i = 0; i < 5; i++) {
        cout << setw(5) << Arr[i];
    }

    cout << endl << endl;

    cout << "Arr 2 vor dem Tauschen: ";
    for (int i = 0; i < 5; i++) {
        cout << setw(5) << Brr[i];
    }

    cout << endl << endl<< endl << endl<< endl << endl;

}

void fürjede() {
    int Arr[] = {1, 2, 3, 4, 5};

    for(int x : Arr) {
        cout << x << " ";  // Gibt die Werte mit einem Leerzeichen aus
    }
}

void Tannebaum() {

    int hoehe;
    int sterne = 1;
    cout << "Bitte gebe die größe des Baums an :";
    cin >> hoehe;


    for (int i = hoehe; i > 0; i--){
        for(int breite = i; breite > 0; breite--) {
            cout << " ";
        }

        for(int k = 0; k < sterne ; k ++) {
            cout << "*";
        }
        sterne += 2;
        cout << endl;
    }

    for (int i = hoehe; i > 0; i--){

        for(int breite = 0; breite < 3; breite++) {
            cout << " ";
        }

            cout << "***";
        cout << endl;
    }

}



