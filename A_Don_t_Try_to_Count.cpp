#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int al, sl;

        cin >> al >> sl;

        string a, s;
        cin >> a;
        cin >> s;
        int count = 0;

        string temp = a;

        while (temp.length() < s.length())
        {
            temp += temp;
            count++;
        }

        if (temp.find(s) != string::npos)
        {
            cout << count << endl;
            continue;
        }

        temp+=temp;
        count++;

        if (temp.find(s) != string::npos)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }

        // cout << count << endl;
    }
}