#include <bits/stdc++.h>

using namespace std;


int main()
{
    freopen("RECT.INP", "r", stdin);
    freopen("RECT.OUT", "w", stdout);
    int n, res = 0;
    cin >> n;
    int a[n+1][n+1];
    for(int i = 1; i <= n;  i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    for(int i = 0;i <= n; i++){
        a[i][0] = 1;
        a[0][i] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 0 && a[i][j-1] && a[i-1][j])
                res++;
        }
    }
    cout << res;
}
