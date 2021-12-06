#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("KNAPSACK2.INP", "r", stdin);
    freopen("KNAPSACK2.OUT", "w", stdout);
}

void xuli(){
    int n, m;
    cin >> n >> m;
    int v[n+1], w[n+1];
    int tv[n+1] = {0};
    for(int i = 1; i <= n; i++){
        cin >> w[i] >> v[i];
    }
    int dp[n+1][m+1];
    int d[n+1][m+1];
    for(int i = 0; i<=n; i++){
        for(int j = 0; j <= m; j++){
            dp[i][j] = 0;
            d[i][j] = 0;
            if (i == 0 || j==0)
                dp[i][j] = 0;
            else if(w[i] > j)
                dp[i][j] = dp[i-1][j];
            else {
                for(int t = 1; t <= j/w[i]; t++){
                    if(dp[i][j] < dp[i-1][j - w[i]*t] + v[i]*t){
                        dp[i][j] = dp[i-1][j - w[i]*t] + v[i]*t;
                        d[i][j] = t;
                    }
                }
            }
        }
    }
    cout << dp[n][m] << endl;

    // truy vet
    for(int i = n; i >= 1; i--){
        if(dp[i][m] != dp[i-1][m]){
            for(int j = 0; j < d[i][m]; j++)
                cout << i << " ";
            m = m - w[i] * d[i][m];
        }
    }
}

int main()
{
    doc();
    xuli();
}
