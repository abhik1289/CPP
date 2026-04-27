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

        vector<long> c_temp(n);
        c_temp = temp;
        sort(c_temp.begin(), c_temp.end());

        bool isChanged = true;
        while (isChanged)
        {
            isChanged = false;
            for (int i = 1; i < n - 1; ++i)
            {

                if (temp[i] > temp[i - 1] && temp[i] > temp[i + 1])
                {
                    swap(temp[i], temp[i + 1]);

                    isChanged = true;
                }
            }
        }
        if (is_sorted(temp.begin(), temp.end()))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
