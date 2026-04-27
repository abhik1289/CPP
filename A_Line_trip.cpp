#include <bits/stdc++.h>
using namespace std;



int main(){

    long long t;
    cin >> t;
    while(t--)
    {
      
        long n,end;
        cin >> n >> end;
        vector<long long> temp(n+2);
        temp[0] =0;

        for(int i=1;i<=n;i++)
         cin >> temp[i];

         temp[n+1] = end;

        vector<long long> diff(n+1,0);

        for(int i=0;i<n+1;i++)
        {
            diff[i] = abs(temp[i]-temp[i+1]);
        }
        diff[n]= diff[n]*2;
        sort(diff.begin(),diff.end());
        cout << diff[n]  <<endl;


    }

    
}

