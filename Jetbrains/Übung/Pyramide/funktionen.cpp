#include "funktionen.h"

void pyramide() {


    int zeilen = 6;      // wieviele Zeilen haben wir für das was kommt
    int steine = 1;
    int abstand;
    string name;

cout << "Hallo, wie lautet dein Name? ";
cin >> name;
cout << "Bitte gib eine Zahl ein, um zu sehen, wie hoch die Pyramide wird! ";
cin >> zeilen;

    for(int i = zeilen; i > 0; i--) // Zeilen erzeugen und aufhören, wenn Eingabezahl bei 0 angekommem ist
    {
        for(int abstand = i; abstand > 0; abstand--)        //abstand = i, da nur i sich beim iterieren verändert, nicht aber die variable 'zeilen'
        {
            cout << setw(4) << " ";
        }

        for(int j = 0; j < steine ; j++)
        {
        cout << "*";
        }

        steine += 8;
        cout << endl;
    }


    for(int x = zeilen; x > zeilen - 1; x--) // Zeilen erzeugen und aufhören, wenn Eingabezahl bei 0 angekommem ist
    {
        for(int abstand = x -3; abstand > 0; abstand --)        //abstand = i, da nur i sich beim iterieren verändert, nicht aber die variable 'zeilen'
        {
            cout << setw(1) << "  ";
        }


        cout << "Diese Pyramide wurde im Jahr 2024 erbaut von " << name << endl << endl;
    }




}

