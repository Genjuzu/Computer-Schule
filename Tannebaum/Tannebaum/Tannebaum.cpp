#include <iostream>

using namespace std;

int main() {
	int Eingabe;



	cout << "Bitte gebe die Höhe des Tannebaums ein : ";
	cin >> Eingabe;

	int breite = Eingabe;
	int sterne = 1;


	for (int i = 0; i < Eingabe; i++) {  // Für jedes Stockwerk

		for (int j = 0; j < breite; j++) {
			cout << " ";
		}


		for (int k = 0; k < sterne; k++) {

			cout << "*";
		}




		breite--;
		sterne += 2;
		cout << endl;
	}




}