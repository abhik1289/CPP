#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (n % x == 0)
        {
            cout << 2 << endl;
            cout << n - 1 << " " << 1 << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << n << endl;
        }
    }
}
