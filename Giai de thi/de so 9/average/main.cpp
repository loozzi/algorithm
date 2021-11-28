#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("average.inp", "r", stdin);
    freopen("average.out", "w", stdout);

    int n, k;
    cin >> n >> k;
    long long a[n+5], f[n+5];
    for(int i  = 0; i < n; i++)
        cin >> a[i];
    f[0] = a[0];
    for(int i = 1; i < n; i++)
        f[i] = f[i - 1] + a[i];


    float res = 0;
    for(int i = k-1; i < n; i++){
        for(int j = 0; j < i - k; j++)
            res = max(res, (float)(f[i] - f[j])/(i - j + 1));
    }
    cout << setprecision(3) << fixed << res;
}
