#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("square.inp", "r", stdin);
    freopen("square.out", "w", stdout);
    int n, x, y;
    cin >> n;
    int a[4];
    a[0] = a[2] = INT_MAX;
    a[1] = a[3] = 0;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        a[0] = min(a[0], x);
        a[1] = max(a[1], x);
        a[2] = min(a[2], y);
        a[3] = max(a[3], y);
    }
    cout << max(a[1] - a[0], a[3] - a[2]) * max(a[1] - a[0], a[3] - a[2]);
}
