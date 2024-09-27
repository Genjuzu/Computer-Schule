#include "funktionen.h"


void eingabe1(char *quelle1) {
    cout << "Bitte gebe ein Wort ein: " << endl;
    cin.getline(quelle1,100);
}
void eingabe2(char *quelle1, char*quelle2) {
    cout << "Bitte gebe ein Wort ein: " << endl;
    cin.getline(quelle1,100);
    cout << "Bitte gebe ein zweites Wort ein: " << endl;
    cin.getline(quelle2,100);
}

int strlength(char*laenge) {
    int i = 0;
    while(laenge[i++]);
    return i;
}

void mixstring(char *ziel, char *quelle1, char *quelle2) {
    int i = 0;
    int q1 = 0;
    int q2 = 0;

    while(quelle1[q1] && quelle2[q2]) {
        ziel[i] = quelle1[q1];
        i++;
        q1++;
        ziel[i] = quelle2[q2];
        i++;
        q2++;
    }

    while(quelle1[q1]) {
        ziel[i] = quelle1[q1];
        i++;
        q1++;
    }

    while(quelle2[q2]) {
        ziel[i] = quelle2[q2];
        i++;
        q2++;
    }

    ziel[i] = '\0';

    cout << endl << ziel << endl;
}              // Cleve Version
void mixstring2(char*ziel, char*quelle1, char*quelle2) {

    int i_ziel = 0, i_quelle1 = 0, i_quelle2 = 0;

    while(quelle1[i_quelle1] || quelle2[i_quelle2]) {
        if (quelle1[i_quelle1])
            ziel[i_ziel++] = quelle1[i_quelle1++];
        if (quelle2[i_quelle2])
            ziel[i_ziel++] = quelle2[i_quelle2++];
    }
    ziel[i_ziel] = 0;
    cout << ziel;
}               // Kordt Version

int ostrstr(char* suchstring,  char* ziel) {
    int i_ziel = 0, i_suchstring = 0;

    while (ziel[i_ziel]) {                                                  // Äußere Schleife geht durch den Zielstring
        if (ziel[i_ziel] == suchstring[0]) {                               // Wenn das erste Zeichen übereinstimmt
            i_suchstring = 0;
            // Innere Schleife vergleicht Suchstring mit Zielstring
            while (suchstring[i_suchstring] && ziel[i_ziel + i_suchstring] == suchstring[i_suchstring]) {
                i_suchstring++;
            }

            if (suchstring[i_suchstring] == '\0') {                      // Wenn der komplette Suchstring übereinstimmt
                return i_ziel;                                              // Gib die Startposition zurück
            }
        }
        i_ziel++;                                                       // Zielstring-Index erhöhen für äußere Schleife
    }
    return -1;  // Wenn der Suchstring nicht gefunden wurde
}              // Cleve Version

int ostrstr2(char*suchstring, char*ziel){

    int i_suchstr = 0, i_ziel = 0, pos = 0;
    int vorhanden = 0;

    int laenge_suchstr = strlength(suchstring);
    int laenge_ziel = strlength(ziel);


    while(i_ziel < (laenge_ziel - laenge_suchstr)) {
        vorhanden = 1;
        while (i_suchstr < laenge_suchstr) {
            if(suchstring[i_suchstr] != ziel[i_ziel + i_suchstr]) {
                vorhanden = 0;
                break;
            }
        i_suchstr++;
        }
        i_ziel++;
        if (vorhanden) return i_ziel;
    }

    return (-1);
}

// void ostrcat



void Übung5() {
    char ziel[100];
    char quelle1[100];
    char quelle2[100];

    eingabe2(quelle1, quelle2);
    mixstring2(ziel,quelle1,quelle2);
}
void Übung6() {
    char suchstring[] = "Otto";
    char ziel[] = "Und Otto ging baden";

    int result = ostrstr2(suchstring, ziel);

    if (result != -1) {
        cout << "Der String wurde an Position " << result << " gefunden." << endl;
    } else {
        cout << "Der String wurde nicht gefunden." << endl;
    }
}
