#include "funktionen.h"



void readdat(char *telefon) {

    ifstream lesen(telefon);
    char input [20]; // Reicht Telefonnummern

    if (lesen) {
        lesen.getline(input, 20);
        while(!lesen.eof()) {
            cout << input << endl;
            lesen.getline(input,20);
        }
    }
}

void writedat(char *telefon) {
    ofstream schreiben (telefon);

    char input [20];           // Schreibe maximal 20, wie im input

        if (schreiben) {
            cout <<"Bitte gebe Telefonnummern ein und beende die Eingabe mit '-x' : " << endl;
            cin.getline(input,20);
            while(strcmp(input,"-x")) {
                schreiben << input << endl;
                cout <<" : ";
                cin.getline(input,20);
            }
        }
}


void copydat(char *telefon) {
readdat lesen (telefonnummer.txt)

}



