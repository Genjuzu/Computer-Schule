#include <iostream>
using namespace std;

// Die swap-Funktion wird außerhalb der main-Funktion definiert
void swap(int *pntr1, int *pntr2) {
    int temp = *pntr1; // Speichert den Wert von wert1 (den pntr1 zeigt)
    *pntr1 = *pntr2;   // Wert von wert2 wird auf den Speicherplatz von wert1 geschrieben
    *pntr2 = temp;     // Wert von wert1 (gespeichert in temp) wird auf den Speicherplatz von wert2 geschrieben
}

int main()
{
    int wert1 = 5;
    int wert2 = 9;

    int *pntr1 = &wert1;
    int *pntr2 = &wert2;

    // Aufruf der swap-Funktion
    swap(pntr1, pntr2);

    // Ausgabe der getauschten Werte zur Überprüfung
    cout << "wert1: " << wert1 << endl; // Sollte 9 anzeigen
    cout << "wert2: " << wert2 << endl; // Sollte 5 anzeigen


}
