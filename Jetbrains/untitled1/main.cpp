#include <iostream>
using namespace std;

void feldkopie(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        b[i] = a[i];
    }
}

int main() {
    int a[30] = {50, 10, 20, 32, 45, 2, 1, 2, 3, 4, 5, 6, 7, 856, 3, 2, 4, 53465, 3, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // Beispielwerte
    int b[30];

    // Aufruf der Funktion zur Kopie des Arrays
    feldkopie(a, b, 30);

    // Ausgabe des kopierten Arrays b, um zu überprüfen, ob die Kopie erfolgreich war
    for (int i = 0; i < 30; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
