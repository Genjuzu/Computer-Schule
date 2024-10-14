// Created by CSL
#include "funktionen.h"


void personenDaten(person* p) {
    cout << "Guten Tag\n\nBitte gebe deinen Namen ein : ";
    getline(cin, p->name);  // Zugriff auf das name-Feld der Struktur über den Zeiger
    cout << endl << endl << "Vielen Dank!\n\nGebe nun bitte dein Alter in Zahlen ein: ";
    cin >> p->alter;
    cout << endl << endl <<  "Vielen Dank!\n\nGebe nun bitte deine groesse ein: ";
    cin >> p->groesse;
    cout << endl <<endl <<   "Danke\n\nBitte gebe nun deine Addresse ein : ";
    getline(cin, p->addresse);  // Zugriff auf das address-Feld der Struktur über den Zeiger
}




void kartengenerator(karte *deck) {
    string farben[4] = {"Pik", "Herz", "Karo", "Kreuz"};
    string namen[13] = {"Zwei", "Drei", "Vier", "Fuenf", "Sechs", "Sieben", "Acht", "Neun", "Zehn", "Bube", "Dame", "Koenig", "Ass"};
    int werte[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};
    int index = 0;  // Index für alle 52 Karten

    for (int i_farben = 0; i_farben < 4; i_farben++ && index < 53) {  // Schleife für die 4 Farben
        for (int i_wert = 0; i_wert < 13; i_wert++) {  // Schleife für die Kartenwerte und Namen
            deck[index].farbe = farben[i_farben];  // Farbe der Karte setzen
            deck[index].name = namen[i_wert];    // Name der Karte setzen
            deck[index].wert = werte[i_wert];    // Wert der Karte setzen
            index++;  // Nächster Kartenslot
        }
    }
}
void kartendeck() {    karte deck[52]; // Array für 52 Karten
    kartengenerator(deck); // Deck generieren

    // Ausgabe des Decks
    for (int i = 0; i < 52; i++) {
        cout << deck[i].farbe << " " << deck[i].name << " (Wert: " << deck[i].wert << ")" << endl;
    }
}
