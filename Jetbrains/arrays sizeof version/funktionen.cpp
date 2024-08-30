// Created by CSL

#include "funktionen.h"

void multiarray() {
    int arr[3][3][3] = { {3, 4, 5}, {11, 45, 22}, {7, 8, 9}  };

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++){
            for (int k = 0; k < sizeof(arr[0][0]) / sizeof(arr[0][0][0]); k++){
                cout << setw(5) << arr[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
}

void arr() {
    int array [3][3] = {{3,6,9},{12,15,18},{21,24,27}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(5) << array[i][j] << " ";
        }
        cout << endl;
    }
}

void pointr() {
    int x = 24;
    int* xptr = &x;

    cout << &x << endl;
    cout << xptr << endl;
    cout << &xptr << endl;
    cout << *xptr << endl;
    *xptr = 23456;
    cout << x << endl;

}
