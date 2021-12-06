#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void process(){
    int n, u, v;
    cin >> n;
    vector<vector<int> > a(n + 1, vector<int>(n + 1, 0));

    for(int i = 0; i < n; i++){
        cin >> u >> v;
        a[u][v] = a[v][u] = 1;
    }

    //xuat
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

}

int main()
{
    init();
    process();
}
