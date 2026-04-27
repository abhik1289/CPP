#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> temp(n);
        for (int i = 0; i < n; i++)
            cin >> temp[i];

        map<int, int> map;

        for (int i = 0; i < n; ++i)
        {
            map[temp[i]]++;
        }

        if (map.size() >= 3)
        {
            cout << "No" << endl;
        }
        else
        {
            int f1 = map.begin()->second;
            int f2 = map.rbegin()->second;

            if (f1 == f2)
            {
                cout << "Yes" << endl;
            }else if(abs(f1-f2)==1 && n%2==1)
            {
                cout << "Yes" << endl;

            }else{
            cout << "No" << endl;

            }
        }
    }
}
