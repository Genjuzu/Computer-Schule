#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// 1. Satz des Pythagoras in double
// 2. Schnellster weg an Land / am Wasser mit Dezimeter incremetent
// 3. Liste vergleichen und kleinsten Wert ausspucken.

int main() {

    // Strecken
    double water = 50;  // Höhe zum Wasser
    double land = 50;   // Höhe zum Land
    double breite = 50; // Breite des Strandes

    // Hypotenusen berechnen (Pythagoras)
    double landweg = sqrt(land * land + breite * breite);
    double wasserweg = sqrt(water * water + breite * breite);

    // Geschwindigkeiten
    double landSpeed = 15.0;  // Geschwindigkeit an Land in km/h
    double waterSpeed = 5.0;  // Geschwindigkeit im Wasser in km/h

    // Umrechnung von Geschwindigkeit in m/s
    double landsec = landSpeed / 3.6;
    double watersec = waterSpeed / 3.6;
    double x = 0.1;

    double oldtime = (landweg / landsec) + (wasserweg / watersec);
    double newtime = ((landweg + x) / landsec) + ((wasserweg - x) / watersec);
    double bestTime;
    double bestX = 0;

    // Ausgabe der Ergebnisse
    cout << "Geschwindigkeit an Land: " << landsec << " m/s" << endl;
    cout << "Geschwindigkeit im Wasser: " << watersec << " m/s\n\n" << endl;
    cout << "Hypotenuse an Land: " << landweg << " Meter" << endl;
    cout << "Hypotenuse im Wasser: " << wasserweg << " Meter" << endl;
    cout << endl << oldtime;

    // Berechnung der Werte
    //do {
    //            x += 0.1; // Inkrementiere
    //    // Berechne die Wege an Land und im Wasser
    //    double landweg = sqrt((breite - x) * (breite - x) + land * land);
    //    double wasserweg = sqrt(x * x + water * water);
    //    // Berechne die Zeiten
    //    double landTime = landweg / landSpeed;
    //    double waterTime = wasserweg / waterSpeed;
    //    // Berechne die Gesamtzeit
    //    double totalTime = landTime + waterTime;
    //    // Ausgabe der berechneten Gesamtzeit
    //    cout << "Gesamtzeit für x = " << x << " Meter: " << totalTime << " Sekunden" << endl;
    //    // wenn die neue Zeit besser ist
    //    if (totalTime < totalTime) {
    //        bestTime = totalTime;
    //        bestX = x;
    //    }

    // Schleifenbedingung
    while (oldtime >= newtime){
        x = x + 0.1;
        double oldtime = (landweg / landsec) + (wasserweg / watersec);
        double newtime = ((landweg + x) / landsec) + ((wasserweg - x) / watersec);
    }

    // Ausgabe der besten Ergebnisse
    cout << fixed << setprecision(2);
    cout << "Der beste Punkt zum Einstieg ins Wasser ist bei x = " << bestX << " Meter" << endl;
    cout << "Die minimale Gesamtzeit ist " << " Sekunden" << endl;

    return 0;
}