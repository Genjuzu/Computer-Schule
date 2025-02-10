// Stringstreams_ueben.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    system("chcp 65001");
    system("CLS");



     int klein[] = {3,12,18,5,11,7,8};

    int i = 0;
    while(klein[i]) {
        i++;
    }
     cout << "Die Länge des Arrays ist: " << i << endl;


    system("pause");
    return 0;

}