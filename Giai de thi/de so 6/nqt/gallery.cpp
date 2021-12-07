#include <bits/stdc++.h>

using namespace std;

struct dt{
    int a, b, t;
};

bool cmp(dt a, dt b){
    return a.b < b.b;
}



int main()
{
    freopen("gallery.inp", "r", stdin);
    freopen("gallery.out", "w", stdout);
    int n, m, u, v, t;
    cin >> n >> m;
    dt a[m+5];
    int f[m];
    for(int i = 0; i < m; i++)
        f[i] = INT_MAX;
    a[1].a = a[1].b = a[1].t = 0;
    for(int i = 2 ; i <= m+1; i++){
        cin >> a[i].a >> a[i].b >> a[i].t;
    }
    sort(a+1, a+2+m, cmp);
    for(int i = 1; i <= m; i++){
        for(int j = 0; j < i; j++){
            if(a[j].a <= a[i].b)
                f[i]= min(f[j] + a[i].t, f[i]);
        }
    }
    cout << f[m-1];
}
