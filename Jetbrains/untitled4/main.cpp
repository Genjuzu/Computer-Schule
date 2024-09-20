#include <iostream>
using namespace std;

int Summe(int a, int b) {
    return a+b;
}

int quadrat(int c) {
    return c*c;
}

int quadro (int c) {
    return c*c;
}


int main()
{
    int a, b, c;
    cout << "Geben sie die erste Zahl an :" << endl;
    cin >> a;

    cout << "Geben sie die zweite Zahl an :" << endl;
    cin >> b;

    cout << Summe (a,b) << endl << endl;

    if (Summe (a,b) > 49) {
        cout << quadrat(Summe (a,b));
    }

    else {
        cout << quadro(Summe (a,b));
    }

}
