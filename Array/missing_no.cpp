#include <iostream>

using namespace std;

void Missing(int arr[], int n)
{
    int N = n + 1;

    int total = N * (N + 1) / 2;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Missing Element is :" << total - sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 10, 9, 11};

    int n = sizeof(arr) / sizeof(arr[0]);

    Missing(arr, n);
}