#include <bits/stdc++.h>
using namespace std;

bool isEven(long n)
{
    return n % 2 == 0;
}

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;

        if (isEven(n) || isEven((n - k)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
