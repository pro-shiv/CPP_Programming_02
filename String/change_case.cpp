#include <iostream>

using namespace std;

int main()
{
    char a[] = "ShiVaM";

    for (int i = 0; a[i] != '\0'; i++)
    {

        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] += 32;
        }
        else if (a[i] >= 97 && a[i] <= 122)
        {
            a[i] -= 32;
        }
    }
    cout << a;
}