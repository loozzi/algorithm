#include<bits/stdc++.h>
using namespace std;

struct dt{
    int a, b, d;
};

bool cmp(dt a, dt b){
    if(a.b==b.b)
        return a.a < b.a;
    return a.b < b.b;
}

int main(){
    freopen("stadium.inp", "r", stdin);
    freopen("stadium.out", "w", stdout);

    int n;
    cin >> n;
    dt a[n+1];
    for(int i = 0; i < n; i++){
        cin >> a[i].a >> a[i].b >> a[i].d;
    }
    sort(a, a+n, cmp);
    int f[n+5], res = 0;
    memset(f, 0, sizeof(f));
    for(int i = 0; i < n; i++){
        f[i] = a[i].d;
        for(int j = 0; j < i; j++){
            if(a[j].b <= a[i].a){
                f[i] = max(f[i], f[j] + a[i].d);
                res = max(res, f[i]);
            }
        }
    }
    cout << res;
}