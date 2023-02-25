#include <iostream>

using namespace std;

int *delet(int arr[], int n, int del)
{

    for (int i = del - 1; i <= n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return arr;
}

int main()
{
    int del, n = 8;
    int arr[100] = {4, 3, 9, 2, 1, 7, 32, 1};
    cout << "Enter the index no. you want to delet :" << endl;
    cin >> del;

    delet(arr, n, del);
    cout << "Final array : " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << endl;
    }
}