#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> temp(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> temp[i];
        }

        vector<int> ans;
        // int temp = n;
        ans.push_back(temp[0]);
        for (int i = 1; i < n; ++i)
        {
            if (temp[i - 1] > temp[i])
            {
                ans.push_back(temp[i]);
                ans.push_back(temp[i]);
            }
            else
            {
                ans.push_back(temp[i]);
            }
        }

        cout << ans.size() << endl;
        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}