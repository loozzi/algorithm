#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("QBSTR.INP", "r", stdin);
    freopen("QBSTR.OUT", "w", stdout);
}

void xuli(){
    string a, b;
    cin >> a >> b;
    int m = a.length(), n = b.length();
    a = " " + a;
    b = " " + b;
    int f[m+1][n+1];
    for(int i = 0; i <= m; i++)
        f[i][0] = 0;
    for(int i = 0; i<=n; i++)
        f[0][i] = 0;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i]==b[j]){
                f[i][j] = f[i-1][j-1] + 1;
            } else {
                f[i][j] = max(f[i-1][j], f[i][j-1]);
            }
        }
    }
    cout << f[m][n] << endl;


    // truy vet
    string res = "";
    while(m!=0 && n!=0){
        if(a[m]==b[n]){
            res = a[m] + res;
            m--;
            n--;
        } else {
            if(f[m-1][n] > f[m][n-1])
                m--;
            else
                n--;
        }
    }
    cout << res;

}

int main()
{
    doc();
    xuli();
}
