#include<bits/stdc++.h>
using namespace std;


int main(){
    freopen("lis.inp", "r", stdin);
    freopen("lis.out", "w", stdout);
    int n, res = 1;
    cin >> n;
    int a[n+5], f[n+5];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        f[i] = 1;
    }
    for(int i = 2; i <= n; i++){
        int l = 1, r = res, j = 0;
        while(l <= r){
            int m = (l+r)/2;
            if(a[i] > a[f[m]]){
                j = m;
                l = m+1;
            } else r = m-1;
        }
        if(j==res) f[++res] = i;
        if(a[i] < a[f[j+1]]) f[j+1]=i;
    }
    cout << res;
}