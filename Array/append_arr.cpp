#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {5, 3, 1, 8, 7};

    int n = 5;
    cout << "n is :" << n << endl;

    if (n < 10)
    {
        arr[n] = 9;
    }
    n = n + 1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl
         << n;
}