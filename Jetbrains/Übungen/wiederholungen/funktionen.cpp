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
}

int ostrstr(char*ziel, char*quelle) {
    int index = 0;
    int q = 0;

    while(quelle[q++]);
    cout << q;



    return index;
}




void Übung5() {
    char ziel[100];
    char quelle1[100];
    char quelle2[100];
    int i = 0;

    eingabe2(quelle1, quelle2);
    mixstring(ziel,quelle1,quelle2);



}

void Übung6() {
    char quelle1[100];
    char quelle2[100];
    int i = 0;

    eingabe2(quelle1, quelle2);
    ostrstr(quelle1, quelle2);

}
