#include <iostream>
using namespace std;

double minimum(double* pntr, int size) {
    // Setze den ersten Wert als Minimum
    double min = *pntr;

    // Durchlaufe das Array, um das tatsächliche Minimum zu finden
    for(int i = 1; i < size; ++i) {
        if(*pntr + i) < min) {
            min = *(pntr + i);
        }
    }

    return min;
}

int main() {
    int size;

    // Benutzereingabe für die Array-Größe
    cout << "Geben Sie die Anzahl der Elemente im Array ein: ";
    cin >> size;

    // Dynamische Allokation des Arrays
    double* arr = new double[size];

    // Benutzereingabe für die Array-Elemente
    cout << "Geben Sie " << size << " Gleitkomma-Zahlen ein:" << std::endl;
    for(int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> *(arr + i);
    }

    // Berechne und gib das Minimum aus
    double minValue = minimum(arr, size);
    cout << "Das Minimum im Array ist: " << minValue << std::endl;

    // Speicher freigeben
    delete[] arr;

    return 0;
}
