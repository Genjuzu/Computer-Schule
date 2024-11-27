// Created by CSL

#include "funktionen.h"


void eingabe(int *arr, int index) {
    cout << "Bitte gebe 10 Ganzzahlen ein!" << endl;

    for (int i = 0; i < index; i++) {
        cin >> arr[i];
    }

    cout << "Unsortiertes Array: ";
    for (int i = 0; i < index; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void ausgabe(int *arr, int index) {
    // Ausgabe des sortierten Arrays
    cout << "Sortiertes Array: ";
    for (int i = 0; i < index; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert(int *arr, int laenge) {
    for(int start = 1; start < laenge-1; start++) {
        int temp = arr[start];

        int sortEnd = start-1;

        while (sortEnd != 0 && arr[sortEnd] < temp) {
            arr[sortEnd + 1] = arr[sortEnd];
            sortEnd--;
        }

        arr[sortEnd + 1] = temp;
    }
}
void insertionSort() {
    int arr[10];  // Beispiel-Array
    int laenge = sizeof(arr) / sizeof(arr[0]);

    eingabe(arr, laenge);
    insert(arr,laenge);
    ausgabe(arr, laenge);
}


void tannebaum() {
    int hoehe = 5;
    string leer = " ";
    int stern = 1;

// Zeilen
    for (int zeile = hoehe; zeile > 0; zeile--){

        // Leerzeichen
        for (int i = 0; i < hoehe; i++) {
            cout << leer;
        }

        // Sterne in der Zeile
        for (int k = 0; k < stern; k++) {
            cout << "*";
        }

        stern += 2;
        hoehe--;
        cout << endl;
    }
}
void rechteck(){
    int breite;
    int hoehe;

        cout << "Bitte gebe die Breite ein: ";
        cin >> breite;

        cout << "Bitte gebe die Hoehe ein: ";
        cin >> hoehe;
        cout << endl;

    //Zeilen
        for (int i = 0; i < hoehe; i++) {

            // breite
            for (int j = 0; j < breite; j++) {
                cout << " * ";
            }
            cout << endl;
        }
}
void rahmen() {
    int hoehe;
    int breite;

    cin >> hoehe;
    cin >> breite;

    // Zeilen
    for (int i = 0; i < hoehe; i++) {
        if (i == 0 || i == hoehe - 1) {
            // Erste und letzte Zeile komplett mit Sternen füllen
            for (int j = 0; j < breite; j++) {
                cout << "*";
            }
        } else {
            // Mittlere Zeilen: Sternenrahmen mit Leerzeichen dazwischen
            cout << "*";  // Linker Rand
            cout << setw(breite - 1) << "*";  // Innenraum mit Leerzeichen und rechter Rand
        }
        cout << endl;
    }

}
void halbDreieck() {
    int hoehe;
    cout << "Bitte die Hoehe bestimmen: " << endl;
    cin >> hoehe;
    cout << endl;
    int stern = 1;

//Zeilen Bestimmen
    for(int i = hoehe ; i > 0 ; i--) {

        for (int j = 0; j < stern ; j++) {
            cout << "*";
        }
        stern++;
    cout << endl;
    }

}
void umgekehrtes_Dreieck() {
    int hoehe;
    cout << "Bitte die Hoehe bestimmen: " << endl;
    cin >> hoehe;
    cout << endl;
    int stern = hoehe;


    //Zeilenabstand
    for (int i = hoehe; i > 0 ; i--) {

        //Sterne

        for (int s = 0; s < stern; s++) {
            cout << "*";
        }
        stern--;
        cout << endl;
    }
}
void pyramide() {
    int hoehe;
    int stern = 1;
    cin >> hoehe;

    //Zeilen bestimmen
    for (int i = 0; i < hoehe ; i++) {

        for (int l = hoehe - i; l > 0 ; l--) {
            cout << " ";
        }

        for (int s = 0 ; s < stern; s++) {
            cout << "*";
        }


        cout << endl;
        stern += 2;
    }

}
void zahlenpyramide() {
    int hoehe;
    int stern = 1;
    int zahlen = 1;
    cin >> hoehe;

    //Zeilen bestimmen
    for ( int i  = 1 ; i <= hoehe  ; i++) {

        // Schleife für Leerzeichen
        for (int leer  = hoehe - i; leer > 0 ; leer--) {
            cout << " ";
        }

        for(int s  = 0; s < stern; s++) {
            cout << zahlen;
            if (zahlen >= i) {
                for (int y = zahlen; y > 1 ; y--) {
                    zahlen--;
                    cout << zahlen;
                }
                break;
            }
            zahlen++;
        }

        zahlen = 1;
        stern += 2;
        cout << endl;

    }
}
void diamand() {
    int breite;
    int stern = 1;
    int i = 0;
    cin >> breite;
    int hoehe = (breite / 2) + 1;


    //Zeilen

    // Schleife für oberes Dreieck
        for(int i = 0; i < hoehe; i++ ) {
            // Leerzeichen
            for(int l = hoehe - i ; l > 0 ; l--) {
                cout << " ";
            }

            // sterne
            for (int s = 0; s < stern; s++) {
                cout << "*";
            }

            cout <<  endl;
            stern += 2;
    }

    stern -= 4;

    int temp = 2;


    // Schleife für unteres Dreieck
    for(int u = 1; u < hoehe; u++) {

        // Leerzeichen
        for(int l = temp - i ; l > 0 ; l--) {
            cout << " ";
        }

        // sterne
        for (int s = stern; s > 0 ; s--) {
            cout << "*";
        }

        cout <<  endl;
        stern -= 2;
        temp++;
    }

    stern -= 2;




}

void kreuz() {

    int hoehe;
    int stern = 1;
    int i = 0;
    cin >> hoehe;

    // Zeilen

    for (int i = 0; i < hoehe; i++) {




    }


}



