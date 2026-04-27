#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        // cout << n <<s << endl;
        bool is_more_than_consucutive_three_empty_cell = false;
        // int n = s.size();
        int space = 0;
        int wall = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '.')
            {
                space++;
            }
            else
            {
                if (space >= 3)
                {
                    // cout << "CALLED" <<endl;
                    // cout << "CALL for" << t<<endl;
                    is_more_than_consucutive_three_empty_cell = true;
                    break;
                }else{
                    space=0;
                }
                wall++;
            }
        }

        //  cout << space;
        if(space>=3)
        is_more_than_consucutive_three_empty_cell=true;

        if (is_more_than_consucutive_three_empty_cell)
        {
            cout << 2 << endl;
            // return;
        }
        else
        {
            cout << n - wall <<endl;
        }
    }
}
