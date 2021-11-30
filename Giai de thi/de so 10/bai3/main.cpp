#include <bits/stdc++.h>

using namespace std;

struct dt{
    int t, m;
};

bool cmp(dt a, dt b){
    if(a.t < b.t) return true;
    if(a.t == b.t && a.m < b.m) return true;
    return false;
}

int main()
{
    freopen("bai3.inp", "r", stdin);
    freopen("bai3.out", "w", stdout);
    int n;
    cin >> n;
    int u, v;
    vector<dt> a;
    for(int i = 0; i < n; i++){
        dt tmp;
        cin >> u >> v;
        tmp.t = u;
        tmp.m = v;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0 ; i < a.size(); i++)
        cout << a[i].t << " " << a[i].m << endl;
}
