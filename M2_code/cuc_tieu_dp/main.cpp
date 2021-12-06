#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CTDP.INP", "r", stdin);
    freopen("CTDP.OUT", "w", stdout);
    long long n;
    cin >> n;
    long long a[n];
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    long long res = 0;
    for(long long i = 1; i < n-1; i++){
        if(a[i-1] > a[i] && a[i+1]>a[i])
            res++;
    }
    cout << res;
}
