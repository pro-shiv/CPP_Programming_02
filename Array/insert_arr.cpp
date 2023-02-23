#include <iostream>

using namespace std;

int *insertx(int arr[], int pos, int n, int x)
{
    n++;
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    return arr;
}

int main()
{
    int x = 45, pos = 5, n = 8;

    int arr[100] = {5, 6, 3, 9, 2, 0, 33, 1};

    insertx(arr, pos, n, x);
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i];
    }
}