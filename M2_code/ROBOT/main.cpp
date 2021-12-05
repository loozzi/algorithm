#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);
}

void xuli(){
    int n, m;
    cin >> n >> m;
    int a[n+1][m+2];
    int f[n+1][m+1];
    int res = 12372138;
    int tmp;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j<=m+1; j++){
            f[i][j] = 0;
        }
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= m; j++){
            f[i][j] += min(f[i-1][j-1] + abs(a[i-1][j-1] - a[i][j]), min(f[i-1][j] + abs(a[i-1][j] - a[i][j]), f[i-1][j+1] + abs(a[i-1][j+1] - a[i][j])));
        }
    }

    for(int i = 1; i <= m; i++)
        res = min(res, f[n][i]);
    cout << res << endl;
    int index;
    for(int i = 1; i <= m; i++){
        if(res == f[n][i])
            index = i;
    }
    int t[n];
    t[n-1] = index;

    for(int i = 1; i <= m; i++)
        f[1][i] = a[1][i];

    for(int i = n; i >= 2; i--){
        int k = min(a[i][index-1] - a[i-1][index-1], min(a[i][index] - a[i-1][index], a[i][index+1] - a[i-1][index+1]));
        if(k == a[i][index-1] - a[i-1][index-1] ){
            index--;
        } else if(k == a[i][index+1] - a[i-1][index+1]){
            index++;
        }
        t[i - 2] = index;
    }


    for(int i = 0; i < n; i++)
        cout << i+1 << " " << t[i] << endl;
}

int main()
{
    doc();
    xuli();
}
