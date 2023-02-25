#include <iostream>

using namespace std;

int fib(int n, int t0, int t1)
{
    int s;
    if (n <= 1)
    {
        return n;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            s = t0 + t1;
            t0 = t1;
            t1 = s;
        }
        return s;
    }
}

int main()
{
    int t0 = 0, t1 = 1, s, n, num;

    cout << "Enter the no.of fibonacci : ";
    cin >> n;
    num = fib(n, t0, t1);
    cout << num;
}