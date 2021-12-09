#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("valib.inp", "r", stdin);
    freopen("valib.out", "w", stdout);
    int N, W;
    cin >> N >> W;
    int value[N+1], weight[N+1];
    for(int i = 1; i <= N; i++)
        cin >> weight[i] >> value[i];
    int dp[N+1][W+1];
    for(int i = 0; i <= N; i++){
        for (int j = 0; j <= W ; j++)
        {
            if(i * j == 0)
                dp[i][j] = 0;
            else if(j < weight[i])
                dp[i][j] = dp[i-1][j];
            else{
                for(int t = 1; t <= j/weight[i]; t++){
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j - t*weight[i]] + value[i] * t);
                }
                //dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]] + value[i]);
            }
        }
    }
    cout << dp[N][W];

}
