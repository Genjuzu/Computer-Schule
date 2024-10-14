#include "funktionen.h"
#include <cstring>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    for (int i = 0; i < argc; i++) {

        cout << argv[i] << endl;

        char pattern[] = "/p";
        if (strcmp(argv[i], pattern))
            cout << "seitenweise" << endl;
    }

system("pause");
    return 0;
}