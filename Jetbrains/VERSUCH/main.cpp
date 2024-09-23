#include "funktionen.h"

int main()
{
    int Arr[10];
    int i = 0;

    cout << "Bitte gebe die Erste von Zehn zahlen ein:";
    cin >> Arr[i];

    for ( i = 1; i < 10; i++) {
        cout << "Bitte gebe nun Zahl " << i  << " ein:";
        cin >> Arr[i];
    }

    cout << "Super, Vielen Dank! Deine Zahlen lauteten: " << endl;

    for (int i = 0; i < 10; i++) {
        cout << Arr[i] << endl;
    }



    return 0;
}
