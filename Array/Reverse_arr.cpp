#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[10] = {4, 1, 5, 2, 7, 11, 5, 9, 0, 8};
    n = sizeof(a) / sizeof(a[0]);
    int b[10];
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
        cout << a[i];
    }
}