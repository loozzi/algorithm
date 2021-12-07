#include<bits/stdc++.h>
using namespace std;


int main(){
    freopen("spseq.inp", "r", stdin);
    freopen("spseq.out", "w", stdout);
    int n, res1 = 1, res2=1;
    cin >> n;
    int a[n+5];
    int t[n+5], g[n+5];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        t[i]= g[i] = 1;
    }
    for(int i = 2; i <= n; i++){
        int l = 1, r = res1, j = 0;
        while(l <= r){
            int m = (l+r)/2;
            if(a[i] > a[t[m]]){
                l = m+1;
                j = m;
            } else r = m-1;
        }
        if(a[i] < a[t[j+1]]) t[j+1] = i;
        if(j == res1) t[++res1] = i;
    }

    for(int i = 1; i <= n; i++){
        int l = 1, r = res2, j = 0;
        while(l <= r){
            int m = (l+r) / 2;
            if(a[i] < a[g[i]]){
                j = m;
                l = m+1;
            } else r = m-1;
        }
        if(j == res2) g[++res2] = i;
        if(a[i] > a[g[j+1]]) g[j+1] = i;
    }
    int res = 0;
    for(int i = 1; i < n; i++){
        res = max(res, 2*min(t[i], g[n]-g[i])-1);
    }
    cout << res;
}