#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("knapsack.inp", "r", stdin);
    freopen("knapsach.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    int value[n+1], weight[n+1], f[n+1][m+1];
    for(int i = 1; i <= n; i++){
        cin >> value[i] >> weight[i];
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i * j == 0)
                f[i][j] = 0;
            else if(j < weight[i])
                f[i][j] = f[i-1][j];
            else
                f[i][j] = max(f[i][j-1], f[i][j - weight[i]] + value[i]);
        }
    }
    cout << f[n][m];
}

