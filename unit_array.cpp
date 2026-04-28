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
        int ne = 0, po = 0;
        for (int i = 0; i < n; ++i)
        {
            if (temp[i] < 0)
                ne++;
            else
                po++;
        }
        int ans = 0;
        while (po < ne)
        {
            ans++;
            po++;
            ne--;
        }
        if (ne % 2)
        {
            ans++;
        }
        cout << ans << endl;
    }
}
