#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("CHESS.INP", "r", stdin);
    freopen("CHESS.OUT", "w", stdout);
}

void xuli(){
    int n, m, x, y;
    cin >> n >> m;
    bool a[n+1][n+1];
    long long f[n*n+1][n*n+1];
    memset(f, 0, sizeof(f));
    memset(a, true, sizeof(a));
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        a[x][y] = false;
    }
    if(!a[1][2])
        f[1][2] = 1;
    if(!a[2][1])
        f[2][1] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if((i==1&&j==2)||(i==2&&j==1))
                continue;
            else
                f[i][j] = a[i][j]*(f[i-1][j] + f[i][j-1]) % 1000000000;
        }
    }
    cout << f[n][n];
}

int main()
{
    doc();
    xuli();
}
