#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DEMTAU.INP", "r", stdin);
    freopen("DEMTAU.OUT", "w", stdout);
    int n, m, res = 0;
    cin >> n >> m;
    int a[n+1][m+1];
    for(int i = 1; i <= n; i++)
        for(int j  = 1; j <= m; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++){
        a[i][0] = 0;
    }
    for(int i = 0; i < m; i++)
        a[0][i] = 0;

    for(int i = 1; i <= n; i++)
        for(int j  = 1; j <= m; j++){
            if(a[i][j] == 1 && a[i-1][j] == 0 && a[i][j-1]==0) res++;
        }

    cout << res;
}
