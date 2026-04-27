#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, el;
        cin >> n >> el;

        vector<int> temp(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> temp[i];
        }

        int mx = INT_MIN;
        int curr = 0;

        for (int i = 0; i < n; ++i)
        {
            if (temp[i] == el)
            {
                curr++;
            }
            else
            {
                curr--;
            }

            mx = max(mx, curr);

            if (curr < 0)
                curr = 0;
        }

        if (mx > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
