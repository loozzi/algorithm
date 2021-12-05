#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("QBMAX.INP", "r", stdin);
    freopen("QBMAX.OUT", "w", stdout);
}

void xuli(){
    int n, m;
    cin >> n >> m;
    int a[n+2][m+1];

    for(int i = 0; i <= m; i++)
        a[0][i] = a[n+1][i] = -2147483648;
    for(int i = 1; i <= n; i++)
        a[i][0] = 0;


    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int j = 1; j<=m ;j++){
        for(int i = 1; i <= n; i++){
            a[i][j] += max(a[i-1][j-1], max(a[i][j-1], a[i+1][j-1]));
        }
    }

    int res = 0;
    for(int i = 1; i <= n; i++){
        res = max(res, a[i][m]);
    }
    cout << res;
}



int main()
{
    doc();
    xuli();
}
