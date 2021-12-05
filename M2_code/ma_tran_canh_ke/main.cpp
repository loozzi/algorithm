#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("matrix.inp", "r", stdin);
    freopen("matrix.out", "w", stdout);
}

void xuli(){
    int n, m, u, v;
    cin >> n >> m;
    vector<vector<int> > a(n+1);
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<a[i].size(); j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    doc();
    xuli();
}
