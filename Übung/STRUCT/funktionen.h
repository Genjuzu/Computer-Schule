#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;


struct karte {
    string name;
    string farbe;                // Farbe der Karte (Pik, Herz, Karo, Kreuz)
    int wert;                   // Wert der Karte (2-10 für Zahlen, 10 für Bildkarten, 1 oder 11 für Ass)
};
struct person{
    string name;
    int alter;
    float groesse;
    string addresse;
};

#ifndef FUNKTIONEN_H
#define FUNKTIONEN_H


void kartendeck();



#endif //FUNKTIONEN_H
