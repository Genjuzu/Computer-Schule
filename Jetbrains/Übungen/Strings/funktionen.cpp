#include "funktionen.h"


// Mathematische Funktionen
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

void ostrlen2(char *ziel) {
    int i = 0;
    int n = 1;
    while(ziel[i]) {
        i++;
        n++;
    }
    cout << endl << "Vielen Dank\n\nDein Text hat " << n - 1 << " Zeichen.  =)" << endl;
}

int ostrlen(char *ziel) {
    int i = 0;
    while(ziel[i]) {
        i++;
    }
    return i;
}



void upstring(char *ziel) {
    int i = 0;
    char ascii = 0;
    int n = 1;

    while(ziel[i]){
        if(ziel[i] > 96 && ziel[i] < 123) {
            ascii = ziel[i] - 32;
            n++;
            cout << ascii;
        }
        else {
            cout << ziel[i];
        }
        i++;
    }
    ziel[i] = '\0';
    cout << endl << endl << "Es wurden " << n-1 << " Buchstaben verändert.";
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




