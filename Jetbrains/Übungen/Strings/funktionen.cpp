#include "funktionen.h"

// Kryptographie
void namencryptographie(char *ziel){
    int i = 0;
    char ascii;
    char ascii2;

    while(ziel[i]) {
        if (ziel[i] < 55){
            ascii = ziel[i] + 55;
            cout << ascii;
        }

        else{
            ascii2= ziel[i] - 20;
            cout << ascii2;
        }
        i++;
    }
    ziel[i]=0;
    cout << endl;
}
void decryption(char *ziel){
    char asciiDecrypt1;
    char asciiDecrypt2;
    int j = 0;

    while(ziel[j]){
        if(ziel[j] > 110 && ziel[j] < 128){
            asciiDecrypt1 = ziel[j] - 55;
            cout << asciiDecrypt1;
        }
        else if(ziel[j] == 87) {                //Leerzeichen (ASCII W = 87)
            cout << " ";
        }
        else if(ziel[j] == 46) {                //Punkte bleiben Punkte
            cout << ".";
        }
        else if(ziel[j] < 110 && ziel[j] != 87 && ziel[j] != 46){
            asciiDecrypt2 = ziel[j] + 20;
            cout << asciiDecrypt2;
        }
        j++;
    }
    ziel[j]=0;
}


// Mathematische Funktionen
void WhileCpy(char *ziel, char *quelle) {
    ///WHILE SCHLEIFE
    int j = 0;
    while(quelle[j]) {
        ziel[j] = quelle[j];
        j++;
    }
    ziel[j] = '\0';   //Sonst fehlt die Nullstelle im Ziel
}                              // Übung 1 - Richtig
void ForCpy(char *ziel, char *quelle){
    //FOR-SCHLEIFE
    int i = 0;
    for(i = 0; quelle[i]; i++) {
        ziel[i] = quelle[i];
    }
    ziel[i] = 0;     //Sonst fehlt die Nullstelle im Ziel
}                               // Übung 1 - Alternativ
void ostrlen2(char *ziel) {
    int i = 0;
    int n = 1;
    while(ziel[i]) {
        i++;
        n++;
    }
    cout << endl << "Vielen Dank\n\nDein Text hat " << n - 1 << " Zeichen.  =)" << endl;
}                                          // Übung 2 - Falsch
int ostrlen(char *ziel) {
    int i = 0;
    while(ziel[i]) {
        i++;
    }
    return i;
}                                           // Übung 2 - Richtig
void upstring(char *ziel) {
    int i = 0;
    char ascii = 0;
    int n = 0;

    while(ziel[i]){
        if(ziel[i] > 96  && ziel[i] < 123) {
            ascii = ziel[i] - 32;
            n++;
            cout << ascii;
        }
        else {
            cout << ziel[i];
        }
        i++;
    }
    cout << endl << endl << "Es wurden " << n << " Buchstaben verändert.";
        }                                        // Übung 3 - Richtig
void mixstring2(char *ziel, char *quelle1, char *quelle2) {           // Übung 5
    int i = 0;
    int q1 = 0;
    int q2 = 1;
    int temp = 0;

    while(ziel[i]) {
        if(ziel[temp] / ziel[temp] == 1) {
            ziel[i] = quelle1[q1];
            q1 += 2;
        }
        else {
            ziel[i] = quelle2[q2];
            q2 += 2;
        }
        temp++;
    }
    ziel[i] = '\0';   //Sonst fehlt die Nullstelle im Ziel

}       // Übung 5 - Falsch
void mixstring(char *ziel, char *quelle1, char *quelle2) {           // Übung 5 - Richtig
    int i = 0;
    int q1 = 0;
    int q2 = 0;

    // Solange beide Strings noch Zeichen haben
    while (quelle1[q1] != 0 && quelle2[q2] != 0) {
        ziel[i] = quelle1[q1];
        i++;
        q1++;
        ziel[i] = quelle2[q2];
        i++;
        q2++;
    }

    // Wenn noch Zeichen in quelle1 übrig sind
    while (quelle1[q1]) {
        ziel[i] = quelle1[q1];
        i++;
        q1++;
    }

    // Wenn noch Zeichen in quelle2 übrig sind
    while (quelle2[q2]) {
        ziel[i] = quelle2[q2];
        i++;
        q2++;
    }

    ziel[i] = '\0';   //Sonst fehlt die Nullstelle im Ziel
}       // Übung 5 - Richtig



void ostrstr(char *satz, char *wort){
    int s = 0;
    int w = 0;
    int wordsize = 0;
    int proof = 0;
    int zaehler = 1;

    while(satz[s] || wordsize == zaehler) {
        while(wort[wordsize]) {
        wordsize++;
        }
        cout << "Das Wort hat " << wordsize << " Zeichen. Mal sehen, wo diese Anzahl an gleichen Zeichen hintereinander vorkommen." << endl << endl;

        while(wort[w] != satz[s]) {
        w = 0;
        zaehler++;
        }

        while(wort[w] == satz[s]) {
            w++;

        }
        s++;
        cout << zaehler << endl;
    }
}


// Ausführbare Funktionen
void Übung1(){
    char a[] = "Dies ist sein String";
    char b[30];
    WhileCpy(b, a);
    cout << b << endl;
}
void Übung2() {
    system("cls");
    cout << "Bitte gebe einen Text ein mit maximal 80 Zeichen : ";
    char text2[80];
    cin.getline(text2, 80);
    cout << ostrlen(text2) << endl;
}
void Übung3() {
    system("cls");
    cout << "Bitte gebe einen Text ein mit maximal 80 Zeichen : ";
    char text3[80];
    cin.getline(text3, 80);
    upstring(text3);
}
void Übung4() {
    system("cls");
    cout << endl << endl << "Bitte gebe einen Text ein mit maximal 80 Zeichen : ";
    char input[80];
    cin.getline(input, 80);

    ostrlen(input);
    int i = ostrlen(input) - 1;
    cout << "\nOkay! Das sind " << i << " Zeichen\nIch werde sie nun umdrehen.\nBist du bereit?\n" << endl;

    system("pause");
    system("cls");

    cout << endl << endl << endl;

    while(input[i] > 0) {
        cout << input[i];
        i--;
    }
    cout << endl << endl;
}
void Übung5(){
    char name1[80];
    char name2[80];
    char nameMix[80];

    cout << "Bitte gebe einen Namen ein";
    cin.getline(name1,80);
    cout << "Bitte gebe einen zweiten Namen ein ";
    cin.getline(name2,80);

    mixstring(nameMix, name1, name2);
    cout << nameMix << endl;
}
void Übung6() {
    char String1 [100];
    char String2 [100];

    cout << "Bitte ein Wort ein : ";
    cin.getline(String1, 100);
    cout << "Bitte gib nun einen Satz ein ein, der dein Wort darin durchsucht : ";
    cin.getline(String2, 100);
    ostrstr(String2, String1);
}


// EXE Cryptographie
void crypto() {
    cout << "Bitte gebe einen Text ein mit maximal 500 Zeichen : ";
    char message[500];
    cin.getline(message,500);
    namencryptographie(message);
}
void decrypt() {
    cout << endl << endl << "Bitte gebe nun deine verschlüsselte Nachricht ein : ";
    char decrypt[500];
    cin.getline(decrypt,500);
    decryption(decrypt);
}


void arrayWhile() {
    int i = 0;
    int a[] = {1,2,3,4,5,6};

    while (a[i]) {
        cout << a[i];
        i++;
    }
}








