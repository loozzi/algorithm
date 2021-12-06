#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("div3.inp", "r", stdin);
    freopen("div3.out", "w", stdout);
    int n, t;
    cin >> n;
    int a[4];
    a[1] = a[2] = a[0] = 0;
    for(int i = 0; i < n; i++){
        cin >> t;
        a[t%3]++;
    }
    int res = 0;
    res += a[0] * (a[0] - 1) / 2;
    res += a[1] * a[2];
    cout << res;

}
