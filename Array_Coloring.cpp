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
        int oddSum = 0;
        int evnSum = 0;
        for (int i = 0; i < n; ++i)
        {
            if (temp[i] % 2 == 0)
            {
                evnSum += temp[i];
            }
            else
            {
                oddSum += temp[i];
            }
        }
        if ((oddSum % 2 == 0 && evnSum % 2 == 0) || (oddSum % 2 == 1 && evnSum % 2 == 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}