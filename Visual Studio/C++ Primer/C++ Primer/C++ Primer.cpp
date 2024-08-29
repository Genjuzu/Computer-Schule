#include "funktionen.h"


int main() {
    cout << "Bitte gebe eine Zahl ein : ";
    int zahl1 = validenummer();

    cout << "Bitte gebe eine weitere Zahl ein : ";
    int zahl2 = validenummer();

    while (zahl2 <= 0) {
        cout << "Diese Zahl ist negativ. Versuche es erneut\n";
        cout << "Bitte gebe eine Zahl ein : ";
        cin >> zahl2;
        system("cls");
    }

    int ergebnis = zahl1 + zahl2;
    system("cls");

        cout << "Dein Ergebnis muss unter 100 sein. Mal sehen, ob das klappt.\n\n";
        system("pause");

        if (ergebnis > 100) {
            cout << endl << "Dein Ergebnis ist ueber 100. Um genau zu sein: " << ergebnis;
        }
        else{
            cout << endl << "Super! Das Ergebnis ist " << ergebnis << endl << endl;
        }

    return 0;
}
