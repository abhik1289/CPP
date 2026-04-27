#include <bits/stdc++.h>
using namespace std;

int main()
{

    long n;
    cin >> n;
    vector<int> temp(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> temp[i];
    }

    sort(temp.begin(), temp.end());

    int minEl = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        minEl = min(minEl, abs(temp[i]));
    }
    cout << minEl << endl;
}