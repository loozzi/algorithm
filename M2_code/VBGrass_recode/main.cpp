#include <bits/stdc++.h>

using namespace std;


void doc(){
    freopen("VBGRASS.INP", "r", stdin);
    freopen("VBGRASS.OUT", "w", stdout);
}

void xuli(){
    int m, n, res = 0;
    char c;
    cin >> m >> n;
    int a[m+1][n+1];
    string s[m];
    for(int i = 0; i < m; i++)
        cin >> s[i];
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(s[i-1][j-1]=='#' && a[i-1][j]!=1 && a[i][j-1]!=1){
                a[i][j] = 1;
                res+=1;
            }
            else
                a[i][j] = 0;
        }
    }
    cout << res;
}

int main()
{
    doc();
    xuli();
}
