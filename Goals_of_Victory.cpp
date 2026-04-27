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
        vector<int> temp(n - 1);
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> temp[i];
        }
        int sum = 0;

        for (int i = 0; i < n - 1; i++)
        {
            sum += temp[i];
        }
        cout << sum * -1 << endl;
    }
}