#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BDX.INP", "r", stdin);
    freopen("BDX.OUT", "w", stdout);
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int m = s2.length();
    int dp[n+2][m+2];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i==0 || j==0)
                dp[i][j] = i+j;
            else if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1])) + 1;
        }
    }
    cout << dp[n][m];
}
