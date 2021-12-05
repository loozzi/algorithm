#include <bits/stdc++.h>
using namespace std;

void init(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void xuli(){
    int n, m, u, v;
    cin >> n >> m;
    vector<int> a[n+1];
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    // xuat
    for(int i = 1; i <=n; i++){
        cout << i << ": ";
        for(int j = 0; j < a[i].size(); j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}

int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
        xuli();
}
