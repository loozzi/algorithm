#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("nkpalin.inp", "r", stdin);
    freopen("nkpalin.out", "w", stdout);
    string a;
    cin >> a;
    string b = a;
    reverse(b.begin(), b.end());
    a = " " + a;
    b = " " + b;
    int n = a.length(), m = b.length();
    int f[n+1][m+1];
    for(int i = 0; i <= n;i++){
        for(int j = 0; j<=m; j++){
            if(i*j == 0)
                f[i][j]=0;
            else if(a[i] == b[j])
                f[i][j] = f[i-1][j-1] + 1;
            else 
                f[i][j] = max(f[i-1][j], f[i][j-1]);
        }
    }
    m--;
    n--;
    while(m*n != 0){
        if(a[n] == b[m]){
            cout << a[n];
            m--;
            n--;
        }
        else{
            if(f[n-1][m] > f[n][m-1])
                n--;
            else
                m--;
        }
    }
}