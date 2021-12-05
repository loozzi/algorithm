#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("BIENDOI.INP", "r", stdin);
    freopen("BIENDOI.OUT", "w", stdout);
}

void xuli(){
    string a, b;
    cin >> a >> b;
    a = " " + a;
    b = " " + b;
    int f[a.length() + 1][b.length() + 1];
    for(int i = 0; i <= a.length(); i++){
        f[i][0] = i;
    }
    for(int i = 0; i <= b.length(); i++){
        f[0][i] = i;
    }

    for(int i = 1; i <= a.length(); i++){
        for(int j = 1; j <= b.length(); j++){
            if(a[i] == b[j]){
                f[i][j] = f[i-1][j-1];
            } else {
                f[i][j] = min(f[i-1][j], min(f[i-1][j-1], f[i][j-1])) + 1;
            }
        }
    }
    cout << f[a.length()][b.length()];
}

int main()
{
    doc();
    xuli();
}
