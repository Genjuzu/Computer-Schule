#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// 1. Satz des Pythagoras ind double
// 2. Schnellster weg an Land / am Wasser mit Dezimeter incremetent
// 3. Liste vergleichen und kleinsten Wert ausspucken.



int main(){

	//Strecken
	double water = 50;
	double land = 50;
	double breite = 100;

	double landSpeed = 15.0;  // Geschwindigkeit an Land in km/h
	double waterSpeed = 5.0;  // Geschwindigkeit im Wasser in km/h

	double landseconds = landSpeed / 3.600;
	double waterseconds = waterSpeed / 3.600;

	cout << landseconds;
	cout << waterseconds;


}



