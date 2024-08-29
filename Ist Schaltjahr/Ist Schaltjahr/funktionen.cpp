#include "funktionen.h"

bool schaltjahr() {


	int year;
		cout << "\n\nGuten Tag.\n\nBitte gebe ein Jahr ein, um zu schauen, ob es ein Schaltjahr ist!     ";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)) {
		cout << "\n\nJa, es ist ein Schaltjahr\n\n";
		return 0;
	}
	else
	{
		cout << "Nein, es ist kein Schaltjahr\n\n\n" << endl << endl;
		return 1;
	}

	return 0;

}


bool switchyear() {
	int year;
	cout << "\n\nGuten Tag.\n\nBitte gebe ein Jahr ein, um zu schauen, ob es ein Schaltjahr ist!     ";
	cin >> year;

	switch ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)) {
	case 1:
		cout << "\n\nJa, es ist ein Schaltjahr\n\n";
		break;
	case 0:
		cout << "\n\nNein, es ist kein Schaltjahr\n\n";
		break;
	}
	return 0;
}