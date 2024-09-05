#include "funktionen.h"

void WhileCpy(char *ziel, char *quelle) {
    ///WHILE SCHLEIFE
    int j = 0;
    while(quelle[j]) {
        ziel[j] = quelle[j];
        j++;
    }
    ziel[j] = '\0';   //Sonst fehlt die Nullstelle im Ziel
}

void ForCpy(char *ziel, char *quelle){
    //FOR-SCHLEIFE
    int i = 0;
    for(i = 0; quelle[i]; i++) {
        ziel[i] = quelle[i];
    }
    ziel[i] = 0;     //Sonst fehlt die Nullstelle im Ziel
}

void Übung1(){
    char a[] = "Dies ist sein String";
    char b[30];
    WhileCpy(b, a);
    cout << b << endl;
}




void namencryptographie() {


    int i = 0;
    char a[10];
    // int asciiMax = 200;

    cout << "\n\n Bitte gebe deinen Namen ein : ";
    cin.getline(a,10);
    cout << "Dein Name ist \"" << a << "\". " << endl;

    while (a[i]) {
        cout << a[i] +10;
        i++;
    }

    for(int j = 0; j < (sizeof (a[i]) / sizeof a[i]); j++) {
        cout << a[i] + 10 << endl;
    }

}
void arrayWhile() {
    int i = 0;
    int a[] = {1,2,3,4,5,6};

    while (a[i]) {
        cout << a[i];
        i++;
    }
}


