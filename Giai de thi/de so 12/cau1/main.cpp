#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("cau1.inp", "r", stdin);
    freopen("cau1.out", "w", stdout);

    long long m, n;
    cin >> m >> n;
    int k = __gcd(m, n);
    int res = 0;
    for(int i = 1; i <= sqrt(k); i++)
        if(k %i==0)
            res+=2;

    if(k == (int)sqrt(k) * (int)sqrt(k))
        res--;
    cout << res;
}
