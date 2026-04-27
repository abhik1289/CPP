#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    scanf("%ld", &t);

    while (t--)
    {
        long n;
        scanf("%ld", &n);

        vector<long> a(n);
        long mx = 0;

        for (long i = 0; i < n; i++)
        {
            scanf("%ld", &a[i]);
            if (a[i] > mx)
                mx = a[i];
        }

        vector<long> b, c;

        for (long i = 0; i < n; i++)
        {
            if (a[i] < mx)
                b.push_back(a[i]);
            else
                c.push_back(a[i]);
        }

        if (b.empty())
        {
            puts("-1");
            continue;
        }

        printf("%ld %ld\n", b.size(), c.size());

        for (long x : b)
            printf("%ld ", x);
        puts("");

        for (long x : c)
            printf("%ld ", x);
        puts("");
    }

    return 0;
}