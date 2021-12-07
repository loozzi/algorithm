#include<bits/stdc++.h>
using namespace std;




int main(){
    freopen("lis.inp", "r", stdin);
    freopen("lis.out", "w", stdout);

    int n, res = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = INT_MAX;
    }
    b[0] = INT_MIN;
    for(int i = 0;i < n; i++){
        int k = lower_bound(b, b+n, a[i]) - b;
        b[k] = a[i];
        res = max(res, k);
    }
    cout << res;
}