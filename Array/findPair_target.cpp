#include <iostream>

using namespace std;

void pairElement(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "index no. is " << i << " and " << j << " " << endl
                     << "element is " << arr[i] << " and " << arr[j] << endl;
            }
        }
    }
}

int main()
{
    int arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the target number :";
    cin >> target;
    pairElement(arr, n, target);
}