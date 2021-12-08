#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("string.inp", "r", stdin);
    freopen("string.out", "w", stdout);
    string a, b;
    cin >> a >> b;
    a = " " + a;
    b = " " + b;
    int n = a.length() + 1;
    int m = b.length() + 1;
    int f[n][m];
    memset(f, 0, sizeof(f));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i==0)
                f[i][j] = j;
            else if(j==0)
                f[i][j] = i;
            else if(a[i] == b[j])
                f[i][j] = f[i-1][j-1];
            else
                f[i][j] = min(f[i-1][j], min(f[i-1][j-1], f[i][j-1])) + 1;
        }
    }
    cout << f[n-1][m-1];
}