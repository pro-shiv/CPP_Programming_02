#include <iostream>

using namespace std;

int searchItem(int arr[], int n, int target)
{
    int i = 0;

    while (i < n)
    {
        if (arr[i] < target)
        {
            i++;
        }
    }

    return i;
}

int main()
{
    int n, target, item;
    cout << "Enter the target value :";
    cin >> target;

    cout << "Enter the size of array :";
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    searchItem(arr, n, target);

    cout << searchItem;
}