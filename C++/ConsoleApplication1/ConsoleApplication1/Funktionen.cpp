#include "Funktionen.h"
#include <iostream> // Hinzugefügt für std::cout

int addieren(int a, int b)
{
    return a + b;
}

int subtrahieren(int a, int b)
{
    return a - b;
}

int dividieren(int a, int b)
{
    if (b == 0) {
        std::cout << "Fehler: Division durch Null ist nicht erlaubt!" << std::endl;
        return 0; // Rückgabe eines Standardwerts oder einer speziellen Fehlerbehandlung
    }
    return a / b;
}

int multiplizieren(int a, int b)
{
    return a * b;
}
