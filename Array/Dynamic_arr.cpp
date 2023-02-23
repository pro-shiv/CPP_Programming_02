#include <iostream>

using namespace std;

int main()
{
    // static array//
    int A[5] = {4, 3, 1, 5, 9};

    // Dynamic array //

    int *p = new int[5];
    p[0] = 4;
    p[1] = 8;
    p[2] = 2;
    p[3] = 0;
    p[4] = 5;
    p[5] = 7;
    int a = sizeof(p);
    cout << "size of " << a << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << p[i] << endl;
    }
}