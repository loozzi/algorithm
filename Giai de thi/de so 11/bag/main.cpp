#include <bits/stdc++.h>

using namespace std;

void process1(){
    int n, m;
    cin >> n >> m;
    int v[n+1], w[n+1];
    for(int i = 1; i <=
     n; i++){
        cin >> v[i] >> w[i];
    }
    int d[n+1][m+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j<= m; j++){
            if(i == 0 || j == 0)
                d[i][j] = 0;
            else if(j < w[i])
                d[i][j] = d[i-1][j];
            else
                d[i][j] = max(d[i-1][j], d[i-1][j-w[i]] + v[i]);
        }
    }
    cout << d[n][m];
}

struct dt{
    int v, w, id;
};

bool cmp(dt a, dt b){
    return float(a.v)/a.w > float(b.v)/b.w;
}


int res = INT_MIN;
int f = 0, g = 0;
vector<dt> a;
long n, m, u, v;

int Try(int i, long w, long v){
    if(w > m) return 0;
    if(i == n && w <= m)
        return v;
    int l = Try(i+1, w + a[i].w, v + a[i].v);
    int r = Try(i+1, w, v);
    return max(l, r);
}

void process2(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        dt tmp;
        cin >> u >> v;
        tmp.w = u;
        tmp.v = v;
        tmp.id = i+1;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end(), cmp);
    cout << Try(0, 0, 0);
}


int main()
{
    freopen("bag.inp", "r", stdin);
    freopen("bag.out", "w", stdout);

    process2();
}
