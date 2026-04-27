#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> temp(10, vector<char>(10));
        for (int i = 0; i < 10; ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                cin >> temp[i][j];
            }
        }

        vector<int> store(5);
        int n = 10;
        int ans = 0;

        for (int i = 0; i < 5; i++)
        {
            int count = 0;

            // top
            for (int j = i; j < n - i; j++)
            {
                if (temp[i][j] == 'X')
                {
                    count++;
                }
            }
            // down
            for (int j = i; j < n - i; j++)
            {
                if (temp[n - i - 1][j] == 'X')
                {
                    count++;
                }
            }
            // left
            for (int j = i + 1; j < n - i - 1; j++)
            {
                if (temp[j][i] == 'X')
                {
                    count++;
                }
            }
            // right
            for (int j = i + 1; j < n - i - 1; j++)
            {
                if (temp[j][n - i - 1] == 'X')
                {
                    count++;
                }
            }
            ans += count * (i + 1);
            // store[i] = count;
            // count = 0;
        }
        cout << ans << endl;
    }
}
