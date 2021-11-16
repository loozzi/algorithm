#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("cau1.inp", "r", stdin);
    freopen("cau2.out", "w", stdout);

    int n, res = 0;
    cin >> n;
    int a[n], f[n];
    cin >> a[0];
    f[0] = 1;
    for(int i = 1; i < n; i++){
        f[i]= 1;
        cin >> a[i];
        if(a[i] >= a[i-1])
            f[i] += f[i-1];
        res = max(res, f[i]);
    }
    cout << res;
}
