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
    vector<dt> a;
    int f[m];
    for(int i = 0; i < m; i++)
        f[i] = INT_MAX;
    for(int i = 0 ; i < m; i++){
        cin >> u >> v >> t;
        dt tmp;
        tmp.a = u;
        tmp.b = v;
        tmp.t = t;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < i; j++){
            if(a[j].a <= a[i].b && f[i]>f[j] + a[i].t)
                f[i]=f[j] + a[i].t;
        }
    }
    cout << f[m-1];
}
