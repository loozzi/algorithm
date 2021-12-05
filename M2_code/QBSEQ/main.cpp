#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("qbseq.inp", "r", stdin);
    freopen("qbseq.out", "w", stdout);
}

void xuli(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
        a[i] %= k;
    }

    int dp[n+1][1001];
    for(int i = 0; i <= 1000; i++){
        dp[0][i] = -12392193;
    }
    dp[0][0] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j<k; j++)
            dp[i][j] = max(dp[i-1][j], dp[i-1][(j+k - a[i]) % k] + 1);
    }
    cout << dp[n][0];
}

void xuli2(){
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[n];
    int res  = 0;
    vector<int> m;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        b[i] = a[i] / k;
        a[i] %= k;
        if(a[i] == 0){
            res++;
        } else {
        m.push_back(a[i]);
        }
    }

    for(int i = 0; i < m.size(); i++){
        cout << m[i] << " ";
    }
}

int main()
{
    doc();
    xuli();
}
