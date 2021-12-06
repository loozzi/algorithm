#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("INPUT.INP", "r", stdin);
    freopen("INPUT.OUT", "w", stdout);
}

void xuli(){
    int n, m;
    cin >> n >> m;
    int a[n+1], b[m+1];
    int f[n+1][m+1];

    for(int i = 1; i<=n; i++){
        cin >> a[i];
        f[i][0] = 0;
    }
    for(int i = 1 ; i<=m; i++){
        cin >> b[i];
        f[0][i] = 0;
    }
    f[0][0] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i]==b[j])
                f[i][j] = f[i-1][j-1] + 1;
            else
                f[i][j] = max(f[i-1][j], f[i][j-1]);
        }
    }
    cout << f[n][m] << endl;


    // truy vet
    int res[f[n][m]];
    int id = f[n][m]-1;
    while(n!=0 && m!=0){
        if(a[n] == b[m]){
            res[id] = a[n];
            m--;
            n--;
            id--;
        }
        else if(f[n-1][m] > f[n][m-1])
            n--;
        else
            m--;
    }
    for(int i = 0; i < sizeof(res)/sizeof(int); i++)
        cout << res[i] << " ";
}

int main()
{
    doc();
    xuli();

}
