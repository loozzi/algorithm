#include <bits/stdc++.h>

using namespace std;



int main()
{
    freopen("bag.inp", "r", stdin);
    freopen("bag.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    int v[n+1], w[n+1];
    for(int i = 1; i <=
     n; i++){
        cin >> v[i] >> w[i];
    }
    int d[n+1][m+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j<= m; j++){
            if(i == 0 || j == 0)
                d[i][j] = 0;
            else if(j < w[i])
                d[i][j] = d[i-1][j];
            else
                d[i][j] = max(d[i-1][j], d[i-1][j-w[i]] + v[i]);
        }
    }
    cout << d[n][m];
}
