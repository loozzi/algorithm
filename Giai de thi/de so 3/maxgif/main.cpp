#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("maxgif.inp", "r", stdin);
    freopen("maxgif.out", "w", stdout);

    int n, res = 0, tmp1, tmp2;
    cin >> n >> tmp1;
    for(int i = 1; i < n; i++){
        cin >> tmp2;
        res = max(tmp1 + tmp2, res);
        tmp1 = tmp2;
    }
    cout << res;
}
