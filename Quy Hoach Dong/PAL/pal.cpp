#include<bits/stdc++.h>

const int mod = 1e9 + 7;

using namespace std;


int main(){
    freopen("pal.inp", "r", stdin);
    freopen("pal.out", "w", stdout);
    string s;
    cin >> s;
    int n = s.length();
    s = " " + s;
    int f[n+1][n+1];
    int res = 0;
    memset(f, 0, sizeof(f));
    for(int i = 1; i <= n; i++)
        f[i][i] = 1;
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n - k; i++){
            int j = k+i;
            f[i][j] = f[i+1][j] + f[i][j-1];
            if(s[i] == s[j])
                f[i][j]++;
            else 
                f[i][j] -= f[i+1][j-1];
            f[i][j] = (f[i][j]%mod + mod)%mod;
        }
    }
    cout << f[1][n];
}