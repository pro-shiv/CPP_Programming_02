#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    int arr[10] = {8, 3, 4, 1, 9, 11, 5, 0, 10, 21};
    n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}