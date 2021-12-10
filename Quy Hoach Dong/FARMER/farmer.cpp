#include<bits/stdc++.h>

using namespace std;

int dp[2002][30002];

int main(){
    freopen("farmer.inp", "r", stdin);
    freopen("farmer.out", "w", stdout);
    int q, n, m;
    cin >> q >> n >> m;
    int v[n+m+1], w[n+m+1];
    for(int i = 1; i <= n+m; i++){
        cin >> v[i];
        w[i] = v[i];
        if(i > n)
            v[i]--;
    }
    for(int i = 0; i <= n+m; i++){
        for(int j = 0; j <= q; j++){
            if(i*j==0) dp[i][j] = 0;
            else if(j < w[i])
                dp[i][j] = dp[i-1][j];
            else 
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
        }
    }
    cout << dp[m+n][q];
}