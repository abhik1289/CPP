#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;

        vector<long> temp(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> temp[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cout << n + 1 - temp[i] << " ";
        }
        cout << endl;
    }
}
