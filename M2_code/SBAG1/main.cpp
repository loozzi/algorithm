#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("SBAG.INP", "r", stdin);
    freopen("SBAG.OUT", "w", stdout);
}

struct dt{
    int w, v;
};

void xuli(){
    int m, n;
    cin >> n >> m;
    dt a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i].w >> a[i].v;
    }
    int f[n+1][m+2];

    for(int i = 0; i <= n; i++){
        for(int j = 0; j<=m; j++){
            if(i==0||j==0)
                f[i][j] = 0;
            else if(j < a[i].w)
                f[i][j] = f[i-1][j];
            else
                f[i][j] = max(f[i-1][j], f[i-1][j-a[i].w] + a[i].v);
        }
    }

    cout << f[n][m] << endl;


    // truy vet
    bool b[n+1];
    memset(b, false, sizeof(b));
    int i = n;
    int w = m;
    while(i!=0){
        if(f[i][w] != f[i-1][w]){
            b[i] = true;
            w = w - a[i].w;
        }
        i--;
    }
    for(int i = 1; i<=n; i++){
        if(b[i])
            cout << i << " ";
    }
}

int main()
{
    doc();
    xuli();
}
