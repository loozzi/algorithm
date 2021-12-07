#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int v[n+5], w[n+5];
    for(int i = 1; i <= n; i++){
        cin >> v[i] >> w[i];
    }
    int dp[n+1][m+1];
    for(int i = 0; i<=n; i++){
        for(int j = 0; j <= m; j++){
            dp[i][j] = 0;
            if (i == 0 || j==0)
                dp[i][j] = 0;
            else if(w[i] > j)
                dp[i][j] = dp[i-1][j];
            else {
                dp[i][j] = max(dp[i-1][j], v[i] + dp[i-1][m-w[i]]);
            }
        }
    }
    for(int i = 0; i<=n; i++){
        for(int j = 0; j <= m; j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }
}

