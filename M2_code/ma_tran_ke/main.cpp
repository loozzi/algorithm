#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("matrix.inp", "r", stdin);
    freopen("matrix.out", "w", stdout);
}

void xuli(){
    vector<vector<int> > a(1001, vector<int>(1001, 0));
    int n, m, u, v;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        a[u][v] = a[v][u] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
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
