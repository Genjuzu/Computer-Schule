#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Card {
public:
    string name;
    string color;
    int value;
};
class Deck {
public:
    int kartenZahl = 52;
    vector<Card> karten; // Jetzt weiß der Compiler, was Card ist

    // Methoden
    void füllen() {

        string farbe[] = {"Herz", "Karo", "Pik", "Kreuz"};
        string name[] = {"Zwei", "Drei", "Vier", "Fuenf", "Sechs", "Sieben", "Acht", "Neun", "Zehn", "Bube", "Dame", "Koenig", "Ass"};
        int wert[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 11, 11, 11};


        // Die Vier Farben
        for ( int i = 0; i < 4;i++) {

            // Die 13 Karten pro Karte füllen
            for (int k = 0; k < 13; k++) {

                // Erstellen eines neuen Objektes
                Card karte;

                karte.color = farbe[i];           // i weil nur 4 Farben
                karte.name = name[k];            // k weil name und Wert dieselbe Anzahl an Array-Elementen haben
                karte.value = wert[k];          // k weil name und Wert dieselbe Anzahl an Array-Elementen haben

                karten.push_back(karte);    // Den Vektor an letzer Stelle beschreiben:

            }
        }
    };
    void mischen();
};



int main() {
    Deck Blackjack;          // Erstelle ein Deck-Objekt
    Blackjack.füllen();      // Fülle das Deck mit Karten

    cout << "Anzahl der Karten im Deck: " << Blackjack.karten.size() << endl << endl;
    cout << "Die erste Karte im Deck: "
         << Blackjack.karten[0].color << " " << Blackjack.karten[0].name << endl << endl;

    cout << "Die letzte Karte im Deck: "
         << Blackjack.karten[Blackjack.karten.size() - 1].name << " von "
         << Blackjack.karten[Blackjack.karten.size() - 1].color << endl;
    
    return 0;
}

