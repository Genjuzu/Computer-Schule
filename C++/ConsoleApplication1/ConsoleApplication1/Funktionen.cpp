#include "Funktionen.h"
#include <iostream> // Hinzugef�gt f�r std::cout

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
        return 0; // R�ckgabe eines Standardwerts oder einer speziellen Fehlerbehandlung
    }
    return a / b;
}

int multiplizieren(int a, int b)
{
    return a * b;
}
