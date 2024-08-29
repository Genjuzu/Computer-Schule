#include <iostream>
#include "Funktionen.h"
using namespace std;

int main() {
	int auswahl = 0;
	do {
		int a, b, ergebnis;

		cout << "Was wollen Sie machen? \n \n(1) Addieren \n(2) Dividieren \n(3) Subtrahieren \n(4) Multiplizieren \n(5) Beenden \n";
		cin >> auswahl;
		system("cls");


		if (auswahl > 0 && auswahl < 5) {

			cout << "Bitte geben Sie die erste Zahl ein: ";
			cin >> a;

			cout << "Bitte geben Sie die zweite Zahl ein: ";
			cin >> b;
		}


		switch (auswahl) {
			case 1:
				ergebnis = addieren(a, b);
				cout << "\nDas Ergebnis ist " << ergebnis << endl;
				break;
			case 2:
				ergebnis = dividieren(a, b);
				cout << "\nDas Ergebnis ist " << ergebnis << endl;
				break;
			case 3:
				ergebnis = subtrahieren(a, b);
				cout << "\nDas Ergebnis ist " << ergebnis << endl;
				break;
			case 4:
				ergebnis = multiplizieren(a, b);
				cout << "\nDas Ergebnis ist " << ergebnis << endl;
				break;
			case 5:
				cout << "Auf Wiedersehen!";
			default:
				cout << "Falsche Eingabe!";
		}
	} while (auswahl != 5); // Hier wird der do-while-Block korrekt geschlossen

	return 0; // Optional, aber empfehlenswert
}