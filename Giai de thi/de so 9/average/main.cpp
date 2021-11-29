#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("average.inp", "r", stdin);
    freopen("average.out", "w", stdout);

    int n, k;
    cin >> n >> k;
    long long a[n+5], f[n+5];
    for(int i  = 1; i <= n; i++)
        cin >> a[i];
    f[0] = 0;
    for(int i = 1; i <= n; i++)
        f[i] = f[i - 1] + a[i];


    float res = 0;
    for(int i = 1; i <= n-k; i++){
        for(int j = i+k-1; j <= n; j++){
            res = max(res, (float)(f[j] - f[i-1])/(j-i+1));
       }
    }
    cout << setprecision(3) << fixed << res;
}
