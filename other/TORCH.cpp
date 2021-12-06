#include<bits/stdc++.h>

using namespace std;

struct td{
    int x, y;
};

int main(){
    int n, u , v;
    cin >> n;
    td a[n];
    for(int i = 0; i < n; i++){
        td tmp;
        cin >> u >> v;
        tmp.x = u;
        tmp.y = v;
        a[i] = tmp;
    }

    float d[n+1][n+1];
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            d[i][j] = d[j][i] = sqrt((a[i].x - a[j].x) * (a[i].x - a[j].x) + (a[i].y - a[j].y) * (a[i].y - a[j].y));
        }
    }
    int f[n+1][n+1];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i==j)
                f[i][j] = 0;
            else if(d[i][j])
                f[i][j] = d[i][j];
            else
                f[i][j] = INT_MAX;

    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                    f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
            }
        }
    }
    cout << f[0][n-1];

}
