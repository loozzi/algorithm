#include <bits/stdc++.h>

using namespace std;

    long long a[1000001];
int main()
{
    freopen("cau2.inp", "r", stdin);
    freopen("cau2.out", "w", stdout);
    int n;
    cin >> n;
    memset(a, 0, sizeof(a));
    long long t, res = 0;
    for(int i = 0; i < n; i++){
        cin >> t;
        a[t] ++;
        res = max(a[t], res);
    }
    cout << res;
}
