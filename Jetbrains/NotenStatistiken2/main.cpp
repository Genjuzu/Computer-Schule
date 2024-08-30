#include <iostream>
using namespace std;

int main() {
    double schueler[10];
cout << endl << "Herlich willkommen!/n Dieses Programm errechnet die Statistiken seiner 10 Schueler./n Gebe Hierzu bitte die Noten an!";

    for (int i = 0; i <10 ; i++) {
        cout << endl <<" Schueler Nummer " << i+1 << ": ";
        cin >> schueler[i];
    }

    return 0;
}