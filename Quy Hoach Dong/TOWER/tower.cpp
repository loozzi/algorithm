#include<bits/stdc++.h>


using namespace std;

int main(){
    freopen("tower.inp", "r" , stdin);
    freopen("tower.out", "w" , stdout);
    int n, res, rmax = 0;
    cin >> n;
    int r[n+5], h[n+5];
    int f[505];
    for(int i = 0; i < n; i++){
        cin >> r[i] >> h[i];
        rmax = max(r[i], rmax);
    }
    memset(f, 0, sizeof(f));
    f[r[0]] = h[0];
    res = f[r[0]];
    for(int i = 1; i < n; i++){
        for(int j = r[i]; j <= rmax; j++){
            f[r[i]] = max(f[r[i]], f[j] + h[i]);
            res = max(res, f[r[i]]);
        }
    }
    cout << res;

}