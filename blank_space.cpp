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
        int maxZero = INT_MIN;
        int curr = 0;
        for (int i = 0; i < n; ++i)
        {
            if (temp[i] == 0)
            {
                curr++;
            }
            else
            {
                curr = 0;
            }
            maxZero = max(maxZero, curr);
        }
        cout << maxZero << endl;
    }
}
