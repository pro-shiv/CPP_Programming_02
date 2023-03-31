#include <iostream>

using namespace std;

int main()
{

    int n, lastDupli = 0;
    cout << "Enter the no.of element : ";

    cin >> n;

    int arr[n];
    cout << "Enter the array element :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicate is :";

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] != lastDupli)
        {
            cout << arr[i];
            lastDupli = arr[i];
        }
    }
}