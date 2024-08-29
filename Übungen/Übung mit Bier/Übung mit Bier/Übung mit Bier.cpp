#include <iostream>
#include <string>
#include <chrono>    //Zeitverzögerung
#include <thread>
#include <cstdlib>
#include <iomanip>
#include <sstream>

using namespace std;

//Tippeffekt
void slowPrint(const string& text, unsigned int millis_per_char) {
	for (const char c : text) {
		cout << c;
		cout.flush(); // Sofortiges Ausgeben des Zeichens
		this_thread::sleep_for(chrono::milliseconds(millis_per_char)); // Verzögerung
	}
}


int main()
{

// Bedingungen
	system("chcp 1252");		//Umlaute
	system("cls");			// Clearscreen

// ANSI-Escape-Code für farbigen Text
	string red = "\033[1;31m";		// roter, fetter Text
	string reset = "\033[0m";		// setzt die Farbe auf die Standardfarbe zurück
	string green = "\033[1;32m";	// grüner, fetter Text
	string reset2 = "\033[0m";		// setzt die Farbe auf die Standardfarbe zurück
	string name;
	string bargeld;

// Variablen Bestimmen
	double bier1 = 4.80, bier2 = 4.20, bier3 = 5.80;
	double budget;
	double promille_pro_bier = 0.54 / 2; // 0.54 Promille pro Liter, also 0.27 Promille pro 0.5L Bier
	double promille = 0.0;

	int kneipe;
	int lohnenswert;
	int auswahl;
	int auswahl2;
	int lappen;
	int taxifahren;


// Input und Output
	slowPrint("        Ahoi Matrose!\n\n Wie ruft man dich auf den sieben Weltmeeren?   -> ", 20);
	cin >> name;
	system("cls");

	slowPrint("        Aye, aye "+ name +"!\n\n Willkomm aufm Kiez!\n Siehst durstig aus. \n Bock auf n Bier?\n\nWie viel Knete hast denn dabei?   ", 20);
	cin >> budget;
	system("cls");

	int Ergebnis1(budget / bier1);
	int Ergebnis2(budget / bier2);
	int Ergebnis3(budget / bier3);
	int taxi1(Ergebnis1 - 20);
	int taxi2(Ergebnis2 - 20);
	int taxi3(Ergebnis3 - 20);


// Lohnt es sich?
		if (budget >= bier2 && budget <= 19) {
			slowPrint("   ARR!\n\n Du hast nur " + to_string(static_cast<int>(budget)) + " €? \n\n Bist Pleite oder was?\n\n\n Och Mann... Armes Würstchen ...\n\n\n Meinst du, dass lohnt sich,3 dahin zu eiern?\n\n 1) Joa\n\n 2) Nein\n\n 3) Mir egal! Will saufen!\n\n", 40);

			cin >> lohnenswert;
			system("cls");

			if (lohnenswert == 1) {
				slowPrint("Na gut, meen Jung.", 20);
			}

			else if (lohnenswert == 3) {
				slowPrint("Du hast aber Hummeln im Hintern! So lob ich mir das!\n\n\n", 30);
			}

			else{
				slowPrint("In Hamburch sacht man TSCHÜSS\n\n\n\n\n\n\n\n Game Over \n\n\n\n\n\n\n\n Du Luser!\n\n\n\n\n\n\n\n", 30);
				return 0;
			}

		} 


		// VIEL GELD
		else if (budget >= 50) {
			slowPrint("Wow, " + name +" - hast aber nen dicken Groschen dabei!\n\n " + to_string(static_cast<int>(budget)) + " € ist ne Menge Knete!\n Das wird ne wilde Nacht!\n\n", 20);
		}

		// GOANIX
		else if (budget < 0) {
			slowPrint("Ohne Moos nix los!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n Aber pssst. Ich hab da was. Kannst n bisschen Knete machen \n\n\n\n\n\n\n\n Bist du bereit?\n\n\n\n\n\n\n\n", 20);
			return 0;
		}

		// Nicht genug?
		else if (budget <= bier2 && budget >= 1) {
			slowPrint("Sachma willst flaxen du Landratte? \n\nHAUB AB, DU OLLE SCHRUMPFMUFFE! \n\n Kommst hier her mit nur " + to_string(static_cast<int>(budget)) + " €? \n\n Das reicht nichtmal für nen Schnack mit mir, " + name + "!\n\n\n Sieh zu, dass du Land gewinnst!\n\n\n\n\n\n\           GAME OVER \n\n\n      LOOSER! \n\n\n\n\n\n                           ... Wobei ... Ich hätt da eine Idee. Willst du dir ein wenig dazuverdienen?\n\n1)                          Ja\n2)                          Nö", 20);
			cin >> auswahl;
			if (auswahl == 1){
				slowPrint("\n\n Nun denn ... wenn du es so bitter nötig hast. Ich kenn da wen  in der Herbertstraße! Kannst aufm Bordstein rumschwalben! Hast Bock? \n\n1) Ja\n2) Nein", 30);
				cin >> auswahl2;
				system("cls");
				if (auswahl2 == 1){
					slowPrint("Beim fliegenden Holländer ! Du hast jede Ehre verloren. Dein Leben ist verwirkt! \n\n \n\n \n\n \n\n \n\n \n\n \n\n \n\n \n\n                  GAME OVER  \n\n \n\n \n\n                        DU LUSER!", 60);
				}
				else{
					slowPrint("Deine Eltern wären sicher stolz auf dich! Aber saufen wird dann heut nix! Geh bisschen ackern und komm wieder! \n\n \n\n \n\n", 40);
				}
			}
			else
			{
				slowPrint("Blaubert bleibt Blaubert und Stubenhocker bleibt Stubenhocker", 30);
				return 0;
			}
		}
		else {
			slowPrint("Dann wolln wa ma, "+ name +"!", 20);
			;
		}


// RECHNEN
			slowPrint("\nAlso mal schauen ...\n\n      Äääähm             ...  Muss mal kurz rechnen ...", 30);
			slowPrint("... Einen Moment Bidde!\n\n  ... " + to_string(static_cast<int>(budget)) + " geteilt durch ...          ... ähm ... Warte mal kurz ...", 30);
			slowPrint("\n\n*LOADING*---------------------------", 50);
			slowPrint(red + "*ERROR*" + reset, 84);

			slowPrint("\n\n Arrrr, scheisse! Verrechnet ... Hab schon ein Sitzen ... Ääh ok, gleich nochma...\n\n", 10); 
			slowPrint("\n\n*LOADING*---------------------------------------------------------------------", 10);
			slowPrint(green + "*Hat jeklappt*" + reset, 40);

			system ("cls");
			slowPrint("\nIn der Kneipe 'Schnapsidee' kannst du dir " + to_string(Ergebnis1) + " Bier leisten.\n\n", 20);
			slowPrint("In der Kneipe 'Zum letzten Tropfen' kannst du dir " + to_string(Ergebnis2) + " Bier leisten.\n\n", 20);
			slowPrint("In der Kneipe 'Koma-Koje' kannst du dir " + to_string(Ergebnis3) + " Bier leisten.\n\n\n", 20);



// Welche Kneipe?


// Schleife für falsche  Kneipenwahl
			do {
				slowPrint("\n Wo willst denn hin?\n\n 1) Schnapsidee?\n 2) Zum letzten Tropfen\n 3) Koma-Koje\n\n", 30);
				cin >> kneipe;

				if (kneipe < 1) {
					system("cls");
					slowPrint("Arr, netter Versuch! Das stand nicht zur Auswahl," + name + "!\n", 20);
				}
				else if (kneipe > 3) {
					system("cls");
					slowPrint("Arr, netter Versuch! Wähle eine gültige Option!\n", 20);
				}
				else if (Ergebnis1 < 1 || Ergebnis2 < 1 || Ergebnis3 < 1) {												// Nicht genügend Geld für die ausgewählte Bar
					slowPrint("Sachma hast du Klaubusterbären im Schädel? Ohne Moos nix los!", 10);
				}
			} while (kneipe < 1 || kneipe > 3);


	// Richtige Wahl
			system("cls");
			if (kneipe == 1){
				slowPrint("Schnapsidee!? Tja... Passt zu dir "+ name +"!\n", 20);
			}
			if (kneipe == 2) {
				slowPrint("Zum letzten Tropfen also? Der Schuppen is ja nicht gerade als Durstlöscher bekannt! Bist wohl n Sparfuchs odawas?\n\n Naja " + name + " ... Jedem das seine! Auf gehts!! \n", 20);
			}
			if (kneipe == 3) {
				slowPrint("Aye Aye Capitän " + name + "! Hervorragende Wahl. In der Koma-Koje können wir sicher einige Nächte untertauchen!\n\n\n", 20);
			}
			system("pause");
			system("cls");
			slowPrint("Denn schieß ma los, bist mit ner Barkasse da? \n\n Wähle:		[Ja] / [Nein] ", 20);
			cin >> bargeld;

			slowPrint("\n\nArrr, du Landratte! Ich meinte nicht deinen Groschen! Die Kneipe hat ne Bar-Kasse und n Kartenleser mit NFC!\n\n Ich meinte deinen Lappen, meen Freund! Eierst du selbst nach Haus? Hast ne Karre? 'N Boood? Oder musst latschen?  \n\n1) Ja, ich muss fahren. \n2) Nein, ich gehe zu Fuß. \n3) Ich nehme ein Taxi.\n", 20);
			cin >> lappen;
			system("cls");

			if (lappen == 1) {
				slowPrint("Aiii, du lebst aber gefährlich nahe am Abgrund, " + name + "!\n\n Denn pass ma auf:\n ", 30);
				slowPrint("Bei uns gibs nur volle Buddels mit nem halben Liter. \n N Liter hat 0,54 Promille. Und mehr darfst du auch nicht saufen!\n\n Wenn du deine ganzen groschen versäufst, hättest du", 10);
			}
				else if (lappen == 2) {
					slowPrint("Fleißig, fleißig. Das gibt ordentlich Muggies!", 40);
				}

				else if (lappen == 3) {
					slowPrint("Klingt nach nem Plan. Wir schauen später mal, ob du dafür flüßig genug bist! \n Lass uns erst mal schauen, wie besoffen du sein wirst!", 40);
				}

				else {
				slowPrint("Du scheinst verwirrt zu sein...", 40);
				}
			

// Anzahl der Biere basierend auf der Kneipenwahl
				int biere_anzahl = 0;

				if (kneipe == 1) {
					biere_anzahl = Ergebnis1;
				}
				else if (kneipe == 2) {
					biere_anzahl = Ergebnis2;
				}
				else if (kneipe == 3) {
					biere_anzahl = Ergebnis3;
				}

				// Promille berechnen
				promille = biere_anzahl * promille_pro_bier;
				slowPrint("du ungefähr " + to_string(promille) + " Promille im Blut.               .... Oder so!       .. Glaub ich .... Egal!\n\n", 20);

				if (promille > 0.5) {
					slowPrint("\n Das is jedenfalls leider n bisschen doll! Du gehst besser zu Fuß, " + name + "!   ... oder doch besser mit Taxi?\n\n1) Taxi\n2) zu Fuß\n\n", 20);
					int taxifahren;
					cin >> taxifahren;

					if (taxifahren == 1) {
						double verbleibendes_budget = budget - 20; // 20 Euro für das Taxi abziehen
						slowPrint("Das kostet 20€! Du hattest " + to_string(static_cast<int>(budget)) + " Euro! Dir bleiben somit nur noch " + to_string(static_cast<int>(verbleibendes_budget)) + " Euro übrig.\n", 30);

						double bierpreis = 0.0;

						// Bierpreis basierend auf der gewählten Kneipe
						if (kneipe == 1) {
							bierpreis = bier1;
						}
						else if (kneipe == 2) {
							bierpreis = bier2;
						}
						else if (kneipe == 3) {
							bierpreis = bier3;
						}

						// Anzahl der Biere, die nach den Taxikosten noch gekauft werden können
						int verbleibende_biere = static_cast<int>(verbleibendes_budget / bierpreis);
						slowPrint("Dafür bekommst du noch " + to_string(verbleibende_biere) + " Bier(e)!\n", 20);
					}

					else {
						slowPrint("Dann musst du halt latschen, du Lappen!\n\n", 30);
						}
				}
			slowPrint("\n\n\n\n\n\n Na dennmanntauu!! \n\n Von dieser Nacht werden deine Enkels noch schnaggen!  \n\n Auf gehts, \n\n \n\n PROST! \n\n \n\n \n\n \n\n\n\n \n\n \n\n \n\n \n\n \n\n \n\n \n\n", 20);
    return 0;
}