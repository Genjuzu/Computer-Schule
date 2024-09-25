#include "funktionen.h"

// INPUT
void eingabe(char *pntr1, char *pntr2){
    cout << "Bitte gebe ein Wort ein, dass wir als Quelle nutzen : " << endl;
    cin.getline(pntr1, 100);

    cout << "Bitte gebe ein zweites Wort ein, auf das wir die Quelle anwenden: " << endl;
    cin.getline(pntr2, 100);
}


void toSmall (char *pntr) {
    int i = 0;
    while (pntr[i]) {
        if(pntr[i] > 65 && pntr[i] < 91) {
            pntr[i] = pntr [i] + 32;
        }
        i++;
    }
}




void strcopy_if_not_exists(char *quelle, char *ziel) {
    int q = 0;
    int z = 0;

// Itteriere durch die Quelle
    while (quelle[q]) {

        // Vergleiche den ersten Wert des Ziels mit jedem Buchstaben der Quelle
        while(ziel[z]) {
            if(quelle[q] == ziel[z] || quelle[q] == ziel[z] + 32 || quelle[q] == ziel[z] - 32)  {
                ziel[z] = 'x';
            }
            z++;
        }
        ziel[z] = '\0';
        z  = 0;     // Zähler des Ziels zurücksetzen
        q++;       // Die nächste Position der Quelle
    }
    quelle[q] = '\0';
    system("pause");
    cout << endl << ziel << endl; // Das veränderte char Array "ziel" ausgeben.
}




int ostrlen (char*quelle) {

    int i = 0;
    while(quelle[i++]);
    return i;

}



void Aufgabe1() {
    char quelle[100];
    char ziel[100];

    eingabe(quelle,ziel);
    strcopy_if_not_exists(quelle,ziel);

    system("pause");
}




