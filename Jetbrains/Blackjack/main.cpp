#include "functions.h"
#include "neuefunktionen.h"






int main() {
    KartenDeck Deck;              // Erstelle ein Deck-Objekt
    Deck.KartenGenerator();      // Fülle das Deck mit Karten

    cout << "Vor dem Mischen:\nAnzahl der Karten im Deck: " << Deck.Blackjack.size() << endl << endl;
    cout << "Die erste Karte im Deck: "
         << Deck.Blackjack[0].color << " " << Deck.Blackjack[0].name << endl << endl;

    cout << "Die letzte Karte im Deck: "
         << Deck.Blackjack[51].name << " von "
         << Deck.Blackjack[Deck.Blackjack.size() - 1].color << endl << endl << "Karten mischen!\n" << endl << endl;

     system ("pause");
     system ("cls");

    Deck.Mischen();

    cout << endl << "Nach dem Mischen:" << endl << endl;
    cout << "Die erste Karte im Deck ist nun: "
         << Deck.Blackjack[0].color << " " << Deck.Blackjack[0].name << endl << endl;

    cout  << "Spiel Beginnen?" << endl << endl << "______________________________________________________________________" << endl << endl;

     system ("pause");
     system ("cls");

     int score = 0;
     string auswahl;

     while (score < 21) {
          score += Deck.Ziehen(); // Addiere den Wert der gezogenen Karte zum Score
          cout << "Aktueller Punktestand: " << score << endl;
          if (score > 21) {
               cout << "Du hast leider verloren" << endl << endl;
               system ("pause");
               return 0;;
          }

          cout << endl << "Neue Karte ziehen?\n\n1. Ja\n2. Nein" << endl << endl;
          cin >> auswahl;

          if (auswahl == "2" || auswahl == "Nein") {
               break;
          }
          system("cls");
     }


    cout << "Spiel beenden?";
    system ("pause");
    return 0;

}

