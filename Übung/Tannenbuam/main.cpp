#include <iostream>
using namespace std;

int main() {
    int hoehe=5;
    //cout << "Hallo, bitte gebe dir Hoehe des Tannenbaums ein!" << endl;
    //cin >> hoehe;

    for(int i = hoehe; i > 0; i--) {

        for(int leer = i; leer > 0; leer--) {
            cout << " ";
        }

        for(int stern = 0; stern < i; stern += 2) {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
