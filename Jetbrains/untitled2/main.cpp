#include <iostream>
using namespace std;

int summe (int *a) {
    int b = 0;

    for (int x : a) {
        b += a;
    }
    return b;
}


int main() {
    int programm[] = {1,2,3,4,5,6,7,8,9,10};

    cout << summe (programm);


    return 0;
}
