#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);

    int n;
    cin >> n;
    int a[n];
    for(int i=0 ; i < n; i++)
        cin >> a[i];
    int f[n+1];
    memset(f, 0, sizeof(f));
    for(int i = 1; i <= n; i++){
        if(a[i-1] == 0)
            f[i] = f[i-1] + 1;
    }
    int res = INT_MAX;
    for(int i = 1; i <= n; i++){
        if(f[i] == 0 && f[i-1] >= 2)
            res = min(res, f[i-1]);
    }
    cout << res;
}
