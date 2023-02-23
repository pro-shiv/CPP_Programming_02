#include <iostream>
using namespace std;

int add(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return add(n - 1) + n;
    }
}

int main()
{
    int r, sum;
    cin >> r;
    sum = add(r);
    cout << "Sum of " << r << " number is :" << sum;
}