#include<bits/stdc++.h>
using namespace std;

struct dt{
    int a, b;
};

bool cmp1(dt a, dt b){
    if(a.a == b.a)
        return a.b < b.b;
    return a.a < b.a;
}

bool cmp2(dt a, dt b){
    if(a.b==b.b)
        return a.a < b.a;
    return a.b < b.b;
}

int main(){
    freopen("stick.inp", "r", stdin);
    freopen("stick.out", "w", stdout);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<dt> a(n);
        int d[n];
        for(int i = 0; i < n; i++){
            cin >> a[i].a >> a[i].b;
            d[i] = INT_MAX;
        }
        sort(a.begin(), a.end(), cmp1);
        d[0] = INT_MIN;
        int r = 1;
        for(int i = 0; i < n; i++){
            int k = lower_bound(d, d+n, a[i].a) - d;
            d[k] = a[i].a;
            r = max(r, k);
        }
        
        cout << n - r << endl;
    }
}