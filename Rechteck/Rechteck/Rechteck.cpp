
#include <iostream>
using namespace std;

int main(){
	int Eingabe;

	 cout << "Wie groß soll das Rechteck sein\n";
	 cin >> Eingabe;
	 system("cls");

	 for (int i = 0; i < Eingabe; i++) {
		 for (int j = 0; j < Eingabe; j++) {
			 cout << "# ";
		 }
		 cout << endl;
	 }
}

