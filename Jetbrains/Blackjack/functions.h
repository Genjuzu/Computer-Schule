#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <ctime> // Für time()
using namespace std;


#ifndef FUNCTIONS_H
#define FUNCTIONS_H



class Karten {
    public:
        string name;
        string color;
        int value;
};

class KartenDeck {
    public:
        int Kartenanzahl = 52;
        vector<Karten> Blackjack;           // Bezieht den Vector auf die Klasse Karten

    void KartenGenerator() {

        string farbe[] = {"Herz", "Karo", "Pik", "Kreuz"};
        string name[] = {"Zwei", "Drei", "Vier", "Fuenf", "Sechs", "Sieben", "Acht", "Neun", "Zehn", "Bube", "Dame", "Koenig", "Ass"};
        int wert[] =    {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};


        for(int i = 0; i < 4 ; i++) {
            for (int k = 0; k < 13 ; k++) {
                Karten Card;
                Card.color = farbe[i];
                Card.name = name[k];
                Card.value = wert[k];
            Blackjack.push_back(Card);
            }
        }
    }

    void Mischen() {
        srand(time(0)); // Zufallsgenerator mit der aktuellen Zeit initialisieren
        int zufall = (Blackjack.size() * 20 + (rand() % 200)) * 12;

        for (int m = 1; m < zufall; m++) {
            int index1 = rand() % Blackjack.size(); // Zufälliger Index 1
            int index2;
            do {
                index2 = rand() % Blackjack.size(); // Zufälliger Index 2
            } while (index1 == index2);

            // Tausche die Karten
            Karten temp = Blackjack[index1];
            Blackjack[index1] = Blackjack[index2];
            Blackjack[index2] = temp;
        }
    }

    int Ziehen() {
        if (Blackjack.empty()) {
            cout << "Keine Karten mehr im Deck!" << endl;
            return 0;
        }

        Karten gezogeneKarte = Blackjack.back(); // Letzte Karte ziehen
        Blackjack.pop_back();                   // Karte aus dem Deck entfernen

        // Karte anzeigen
        cout << "Deine Karte ist: " << gezogeneKarte.name << " von " << gezogeneKarte.color << endl;

        return gezogeneKarte.value; // Wert der Karte zurückgeben
    }


};







#endif //FUNCTIONS_H
