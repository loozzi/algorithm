#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TABLE.INP", "r", stdin);
    freopen("TABLE.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n+2][n+2], b[n+2][n+2];
    for(int i = 1; i <=n ; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    for(int i = 0; i <= n; i++){
        a[i][0] = a[0][i] = a[i][n+1] = a[n+1][i] = 0;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=n; j++){
            b[i][j] = a[i][j] + a[i-1][j] + a[i+1][j] + a[i][j+1] + a[i][j-1];
        }
    }
    cout << n << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
