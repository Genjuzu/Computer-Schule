#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;


struct karte {
    string name;
    string farbe; // Farbe der Karte (Pik, Herz, Karo, Kreuz)
    int wert;     // Wert der Karte (2-10 für Zahlen, 10 für Bildkarten, 1 oder 11 für Ass)
};


void kartengenerator(karte *deck) {
    string farbe[4] = {"Pik", "Herz", "Karo", "Kreuz"};
    string name[13] = {"Zwei", "Drei", "Vier", "Fünf", "Sechs", "Sieben", "Acht", "Neun", "Zehn", "Bube", "Dame", "König", "Ass"};
    int wert [13] ={2,3,4,5,6,7,8,9,10,10,10,10,11};
    int index = 0;                    // Index, um jede Karte im Deck-Array zu belegen

    for (int i = 0; i < 4; i++){                        // Farbe generieren
    farbe[i]                                           // Farbe

        for (int k = 0; k < 13; k++) {              // Name und Wert der Karte

        }

    }
}

int main()
{
    karte deck[52];
    karte pik2, Pik3, Pik4, Pik5, Pik6, Pik7, Pik8, Pik9, PikBube, PikDame, PikKoenig, PikAss;

    pik2.name = "Pik 2";
    pik2.wert= 2;


}
