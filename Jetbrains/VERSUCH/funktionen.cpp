#include "funktionen.h"

// INPUT
void eingabe(char *ziel, char *quelle){
    cout << "Bitte gebe ein Wort ein: " << endl;
    cin.getline(quelle, 100);

    cout << "Bitte gebe ein zweites Wort ein: " << endl;
    cin.getline(ziel, 100);
}

//Funktionen
int ostrlen (char*quelle) {
    int i = 0;
    while(quelle[i++]);
    return i;
}
void tooSmall (char *pntr) {
    int i = 0;
    while (pntr[i]) {
        if(pntr[i] > 64 && pntr[i] < 91) {
            pntr[i] = pntr[i] + 32;
        }
        i++;
    }
}
void strcopy_to_x(char *quelle, char *ziel) {
    int q = 0;
    int z = 0;

// Itteriere durch die Quelle
    while (quelle[q]) {

        // Vergleiche den ersten Wert des Ziels mit jedem Buchstaben der Quelle
        while(ziel[z]) {
            if(quelle[q] == ziel[z])  {
                ziel[z] = 'x';
            }

            else if(quelle[q] == ziel[z] + 32 || quelle[q] == ziel[z] - 32){
                ziel[z] = 'X';
            }
            z++;
        }
        ziel[z] = '\0';
        z  = 0;     // Zähler des Ziels zurücksetzen
        q++;       // Die nächste Position der Quelle
    }
    quelle[q] = '\0';

    cout << endl << ziel << endl; // Das veränderte char Array "ziel" ausgeben.
}


// Aufgaben vom Script Script
int tooUpper(char *pntr, int i) {
    if (pntr[i] >= 'a' && pntr[i] <= 'z') {     // Überprüfe, ob der Buchstabe klein ist
        pntr[i] = pntr[i] - 32;                // Mache den Buchstaben groß
        return 1;                                     // Gib 1 zurück, da ein Buchstabe geändert wurde
    }
    return 0;  // Gib 0 zurück, wenn kein Buchstabe geändert wurde
}
int upstring(char*pntr) {
    int i = 0;                                          // Index, um durch den String zu iterieren
    int changes = 0;                                   // Zählt die Anzahl der geänderten Zeichen

    // Iteriere durch den String
    while (pntr[i]) {
        changes += tooUpper(pntr, i);            // Wende tooUpper auf das aktuelle Zeichen an und inkrementiere die Anzahl der Änderungen
        i++;                                    // Gehe zum nächsten Zeichen
    }

    cout << "Das Wort in grossen Buchstaben: " << pntr << endl << endl;
    cout << "Anzahl der veraenderten Buchstaben: " << changes << endl<< endl<< endl;

    return changes;  // Gib die Anzahl der geänderten Zeichen zurück
}
int upstring2 (char *pntr) {
    int i = 0;
    int index = 0;
    while (pntr[i]) {
        if(pntr[i] > 96 && pntr[i] < 123) {
            pntr[i] = pntr[i] - 32;
            index++;
        }
        i++;
    }
    cout << "Das Ergebnis ist: " << pntr << endl << endl;
    cout << "Veraenderte Werte : " << index << endl << endl;
    return index;
}
void reversestring(char *pntr) {
    int zaehler = 0;
    int i = 0;

    while(pntr[zaehler++]);
    zaehler -= 2;

    while(pntr[i]) {
        cout << pntr[zaehler];
        i++;
        zaehler--;
    }
    cout << endl << endl;
}               //Mit Zeichenzähler



// Aufgaben
void Aufgabe1() {
    char quelle[100];
    char ziel[100];

    eingabe(quelle,ziel);

    tooSmall(quelle);
    tooSmall(ziel);

    cout << "Die eingegebenen Worte in kleinen Buchstaben : " << endl << endl << ziel << endl << quelle << endl;
}
void Aufgabe2() {
    char quelle[100];
    char ziel[100];

    eingabe(quelle,ziel);
    strcopy_to_x(quelle,ziel);

    system("pause");
}
void Aufgabe3() {
    char quelle[100];
    char ziel[100];

    eingabe(ziel,quelle);

    // upstring(quelle);                 // Mit TooUpper
    upstring2(quelle);                  // Alternative

    system("pause");
    // upstring(ziel);                   // Mit TooUpper
    upstring2(ziel);                    // Alternative
    // system("pause");


}               //Script Aufgabe
void Aufgabe4(){
    char Eingabe[100];
    cout << "Bitte gebe ein Wort ein, dass wir umdrehen werden :";
    cin.getline(Eingabe,100);
    reversestring(Eingabe);
}













