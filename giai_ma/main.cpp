#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("GIAIMA.INP", "r", stdin);
    freopen("GIAIMA.OUT", "w", stdout);
    string s;
    cin >> s;
    int dp[s.length()+5];
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= s.length(); i++){
        dp[i] = 0;
        if(s[i-1] > '0')
            dp[i] = dp[i-1];
        if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7'))
            dp[i] += dp[i-2];
    }
    cout << dp[s.length()];
}
