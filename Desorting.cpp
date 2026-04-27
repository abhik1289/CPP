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
        int required_oprations = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            if (temp[i] <= temp[i + 1])
            {
                int diff = temp[i + 1] - temp[i];
                int opration = (diff / 2) + 1;
                required_oprations = min(required_oprations, opration);
            }
            else
            {
                required_oprations = 0;
            }
        }
        cout << required_oprations << endl;
        }
}