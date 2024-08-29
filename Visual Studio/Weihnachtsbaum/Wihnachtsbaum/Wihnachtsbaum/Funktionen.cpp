#include "stdafx.h"
#include <iostream>
 
using namespace System;
using namespace std;
 
int main(array<System::String ^> ^args)
{
    for(;;)
    {
        system("cls");
 
        int Eingabe;
        int Kronenmitte;
        int Startstern;
        int Baumkronenlaenge;
        int Baumkronenbreite = 1;
        int Baumstammlaenge;
 
        cout << "Geben sie die Höhe ein: ";
        cin >> Eingabe;
 
        while(Eingabe<3)
        {
        cout << "Geben sie die Höhe ein(Min 3): ";
        cin >> Eingabe;
        }
     
        Kronenmitte = 1+Eingabe/3;
        Startstern = Kronenmitte;
        Baumkronenlaenge = Eingabe-Eingabe%3;
        Baumstammlaenge = Eingabe%3;
 
        //Gesamte Baumkrone
        for(int Reihe=1; Reihe<=Baumkronenlaenge/3;Reihe++)
        {   // Position innerhalb einer 3er-Krone
            for(int Pos=0;Pos<3;Pos++)
            {
                // Schleife für Space
                for(int space=1; space<=Startstern-Pos;space++)
                {
                    cout << " ";
                }
 
                // Schleife für Stern
                for(int Stern=0; Stern<Baumkronenbreite+Pos*2;Stern++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        Baumkronenbreite+=2;
        Startstern--;
        }
 
        //Baumstamm
        for(int i=1; i<=Baumstammlaenge;i++)
        { 
            // Schleife für Space
            for(int space=1; space<=Kronenmitte-1;space++)
            {
                cout << " ";
            }
            cout << "###" << endl;
        }
 
 
        system("Pause");
    }
}