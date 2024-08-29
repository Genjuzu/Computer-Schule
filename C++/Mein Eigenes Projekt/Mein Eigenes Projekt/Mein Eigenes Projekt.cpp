// Mein Eigenes Projekt.cpp //

#include <iostream>
using namespace std;

int main() {
	int auswahl = 0;
	string bye = "\n\nDas wars!\n\n Danke und Tschussss!\n\n";
	string name;
	int alter;
	cout << "       Guten Tag!\n\n Dies ist mein erstes C++ Programm!\n\n Moechtest du es erforschen? \n\n (1)Ja \n (2)Nein \n" << endl;
	cin >> auswahl;
	system("cls");
	if (auswahl == 1) {
		cout << "\n\n     Das macht mich sehr gluecklich\n\n     Danke!" << endl << endl;
		cout << "\n     Wie heisst du?\n" << endl;
		cin >> name; cout << endl;
		system("cls");
		cout << "\n\n       Hallo " << name << "!\n     Wie alt bist du?\n" << endl;
		cin >> alter;
	}

	else if (auswahl == 2) {
		while (true) {
			cout << "\n\n\n\n              Du bist doof!\n\n\n" << endl << "\n\n Versuche es erneut!\n\n 1) Ja\n\n 2)Ok \n\n 3)Sry, ich habe mich vertippt\n" << endl;
			cin >> auswahl;
			system("cls");

			if (auswahl != 0) {
				cout << "\n\n\n\n\n\n       Zu spaet du Blett \n\n\n\n\n\n";
				cout << "\n\n Versuche es erneut!\n\n 1) Ja\n\n 2)Ok \n\n 3)Sry, ich habe mich vertippt\n" << endl;
				cin >> auswahl;
				if (auswahl == 0) {
					system("cls");
					break;
				}
			}
			else if (auswahl == 2) {
				while (true) {
					cout << "\n\n\n\n              Du bist doof!\n\n\n" << endl << "\n\n Versuche es erneut!\n\n 1) Ja\n\n 2) Ok \n\n 3) Sry, ich habe mich vertippt\n" << endl;
					cout << "0) Zurück zum Anfang" << endl;
					cin >> auswahl;

					if (auswahl == 0) {
						system("cls");
						break; // Beendet die Schleife und kehrt zum Anfang des Programms zurück
					}

					system("cls");
					cout << "\n\n\n\n\n\n       Zu spaet du Blett \n\n\n\n\n\n";
					cout << "\n\n Versuche es erneut!\n\n 1) Ja\n\n 2) Ok \n\n 3) Sry, ich habe mich vertippt\n" << endl;
					cout << "0) Zurück zum Anfang" << endl;
					cin >> auswahl;

					if (auswahl == 0) {
						system("cls");
						break; // Beendet die Schleife und kehrt zum Anfang des Programms zurück
					}
				}
				return 0;
			}
				
			else {
				cout << "\n\n\n       Idiot, du hattest doch nur zwei zur Auswahl! Kannst du nicht mal bis zwei zaehlen? \n\n                                       Deeeeegggaah \n\n\n\n\n\n\n\n" << endl;
				return 0;
			}
		}
	}

		// Hier kannst du weitere Funktionen oder Berechnungen hinzufügen.

		cout << bye << endl;
		return 0;
	
}
