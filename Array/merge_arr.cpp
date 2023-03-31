#include <iostream>
#include <algorithm>

using namespace std;

void merge(int a[], int b[], int res[], int n, int m)
{
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            res[k++] = a[i++];
        }
        else
        {
            res[k++] = b[j++];
        }
    }
    while (i < n) // If array a elements are left in the array a-put in res//
    {
        res[k] = a[i];
        k++;
        i++;
    }
    while (j < m) // If array a elements are left in array b-put in res //
    {
        res[k] = b[j];
        k++;
        j++;
    }
}

int main()
{
    int a[] = {1, 2, 4};
    int b[] = {1, 3, 4};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(a[0]);

    int res[n + m];

    merge(a, b, res, n, m);

    for (int i = 0; i < n + m; i++)
    {
        cout << " " << res[i] << " ";
    }
}