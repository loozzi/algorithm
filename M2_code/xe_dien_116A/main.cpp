#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TRAM.INP", "r", stdin);
    freopen("TRAM.OUT", "w", stdout);
    int n, len, xuong, suc_chua = 0, res = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> xuong >> len;
        suc_chua += len - xuong;
        res = max(res, suc_chua);
    }
    cout << res;
}
