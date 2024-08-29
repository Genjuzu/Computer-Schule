#include <iostream>
#include <iomanip> // für setw

using namespace std;

int main()
{
    int arr[10][10];
    for (int i = 0; i < 100; i++)
    {
        arr[i/10] = i;
    }
    for (int i = 0; i < 100; i++)
    {
        cout << setw(5) << arr[i];
    }

    return 0;
}
