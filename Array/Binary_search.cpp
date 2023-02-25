#include <iostream>

using namespace std;

int BinSearch(int arr[], int l, int h, int x)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x < arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n = 15, l, h, ind, x;

    int arr[15] = {3, 5, 11, 13, 18, 22, 23, 27, 31, 34, 36, 39, 42, 44, 47};
    cout << "Enter the element you want to search :";
    cin >> x;

    ind = BinSearch(arr, 0, n - 1, x);

    cout << "Element found at index :" << ind;
}