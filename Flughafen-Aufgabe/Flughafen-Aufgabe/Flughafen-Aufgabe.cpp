#include "funktionen.h"
using namespace std;



int main()
{
    system("chcp 65001");
    // Enternungen zu den Flughäfen
        string abflughafen[3] = {"Berlin", "Hamburg", "Bremen"};

        double spritpreis = 0.45;
        double entfernung[3] = {187, 88, 156 };
        double ausgaben = 0.75;
        double Hotelpreis = 65;
        double Flugpreis;

    //Willkommen
        cout << "Guten Tag! \n Willkommen in unserem Reisebuero! Wir beraten Sie gern! Wo soll es hin gehen?" << endl << endl;

    // Zeige die Abflughäfen zur Auswahl an
        for (int i = 0; i < 3; ++i) {
            cout << (i + 1) << ") " << abflughafen[i] << endl;
        }

    // Eingabe des Benutzers einlesen
        int auswahl;
        cout << "\n\nBitte waehlen Sie einen Abflughafen (1-3): \n\n";
        cin >> auswahl;
        system("cls");


    // Den ausgewählten Flughafen speichern
        string gewahlterFlughafen = abflughafen[auswahl - 1];
        double gewaehlteEntfernung = entfernung[auswahl - 1];
        double fahrtkosten = gewaehlteEntfernung * spritpreis;

    // Ausgabe der Fahrtkosten
        cout << "Sie haben " << gewahlterFlughafen << " ausgewaehlt." << endl;
        cout << "Die Fahrtkosten betragen: " << fahrtkosten << " EURO" << endl << endl;
        cout << "Geben Sie nun bitte den Preis des Fluges an:   ";
  
    // Anreise berechnen
        cin >> Flugpreis;
        system("cls");
        double anreise = fahrtkosten + Flugpreis;
        cout << "\n In diesem Fall beträgt der Preis für die gesamte Anreise beträgt nun" << anreise << endl;



    // Hotelkosten
        cout << "Wie viele Tage möchten Sie das Hotel buchen? Die Nacht kostet 65 Euro" << endl;
        double tage;
        cin >> tage;
        system("cls");
        double hotelgesamt = tage * Hotelpreis;
        cout << "Die kosten für Ihr Hotel betragen " << hotelgesamt << " Euro";

    // Gesamtkosten ermitteln
        cout << endl << "Bedenken Sie jedoch, dass Sie an Ihrem Urbalaubsziel ebenfalls Ausgaben haben werden.";
        cout << "\nDiese belaufen Sich für gewöhnlich auf 75% des Pauschalpreises";

        double vorortkosten = (hotelgesamt + Flugpreis) * ausgaben;
        cout << "\n Somit kostet ihr Reiseabenteurer neben den Pauschalkosten " << vorortkosten << " Euro" << endl;
        cout << endl << "Dies ergibt einen Gesamtpreis (Exklusive ihrer Anfahrt zum Flughafen) von :" << endl << endl;

        double gesamtpreis = vorortkosten + hotelgesamt + Flugpreis;

        cout << "Flugpreis: " << Flugpreis << endl;
        cout << "Hotel für " << tage << hotelgesamt << endl;
        cout << "Kosten vor Ort " << vorortkosten << endl << endl;
        cout << "Gesamtpreis " << gesamtpreis << endl << endl << endl;





        return 0;



}

