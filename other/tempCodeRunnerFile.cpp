#include<bits/stdc++.h>

using namespace std;


int main(){
    int  n, rmax = 0, res = 0;
    cin >> n;
    int r[n+1], h[n+1];
    int f[505];
    for(int i = 0; i < n; i++){
        cin >> r[i] >> h[i];
        rmax = max(rmax, r[i]);
    }
    memset(f, 0, sizeof(f));
    f[r[0]] = h[0];
    for(int i = 1; i < n; i++){
        for(int j = r[i]; r[i] <= rmax; j++){
            f[r[i]] = max(f[r[i]], f[j] + h[i]);
            res = max(res, f[r[i]]);
        }
    }
    cout << res;
}