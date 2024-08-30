#include <iostream>
using namespace std;

int main()
{
    int array [3][3] = {{3,6,9},{12,15,18},{21,24,27}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
