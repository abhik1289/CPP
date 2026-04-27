#include <bits/stdc++.h>
using namespace std;


int main() {

    long t;
    cin >>t;
     while(t--)
    {
    long n,k;

    cin >> n>>k;

    vector<long long> temp(n);

    for(int i=0;i<n;++i)
    {
        cin >> temp[i];
    }

    vector<long long> copy_array;

    copy_array = temp;

    sort(copy_array.begin(),copy_array.end());


    if(copy_array==temp || k>1)
    {
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }
   

    }


}

