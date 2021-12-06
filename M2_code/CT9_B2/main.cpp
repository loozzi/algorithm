#include <bits/stdc++.h>
using namespace std;

void init(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void xuli(){
    int n, u, v;
    cin >> n;
    vector<int> a[n+1];
    for(int i = 0; i < n; i++){
        cin >> u >> v;
        a[u].push_back(v);
    }
    // xuat
    for(int i = 1; i <=n; i++){
        for(int j = 0; j < a[i].size(); j++)
            cout << i << " " << a[i][j] << endl;
    }
}

int main()
{
    init();
    int t;
    xuli();
}
