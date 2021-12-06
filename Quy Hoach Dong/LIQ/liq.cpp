#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("liq.inp", "r", stdin);
    freopen("liq.out", "w", stdout);
    int n, res = 1;
    cin >> n;
    int a[n+5], f[n+5];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        f[i] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            if(a[i] >= a[j]){
                f[i] = max(f[j] + 1, f[i]);
                res = max(res, f[i]);
            }
        }
    }

    cout << res;
}