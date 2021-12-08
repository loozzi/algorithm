#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("countpl.inp", "r", stdin);
    freopen("countpl.out", "w", stdout);
    string s;
    cin >> s;
    s = " " + s;
    int n = s.length();
    bool f[n+1][n+1];
    int res = 0;
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(i == j)
                f[i][j] = true;
            else if(s[i] == s[i+1])
                f[i][i+1] = true;
            else if(s[i] == s[j])
                f[i][j] = f[i+1][j]-1;
            else
                f[i][j] = false;
            if(f[i][j])
                res = max(res, abs(i-j));
        }
    }
    cout << res;
}