#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("VBGRASS.INP", "r", stdin);
    freopen("VBGRASS.OUT", "w", stdout);
    int n, m, res = 0;
    cin >> n >> m;
    string a[n+1];
    a[0] = "";
    for(int i = 0;i <= m; i++)
        a[0] += ".";
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] = "." + a[i];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == '#' && a[i-1][j] == '.' && a[i][j-1] == '.') res++;
        }
    }
    cout << res;
}
