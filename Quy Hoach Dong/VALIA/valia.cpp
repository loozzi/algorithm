#include<bits/stdc++.h>
using namespace std;

int res = 0;

int main(){
    freopen("valia.inp", "r", stdin);
    freopen("valia.out", "w", stdout);
	int n, W;
	cin >> n >> W;
	int value[n+1], weight[n+1];
	for(int i = 1; i <= n; i++)
		cin >> weight[i] >> value[i];
	
	int dp[n+5][W+5];
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= W; j++){
			if(i * j == 0)
				dp[i][j] = 0;
			else if(j < weight[i])
				dp[i][j] = dp[i-1][j];
			else
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]] + value[i]);
		}
	}
	cout << dp[n][W];
}