#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("MECUNG.INP", "r", stdin);
    freopen("MECUNG.OuT", "w", stdout);
}

void xuli(){
    long long m, n;
    cin >> m >> n;
    long long f[n];
    memset(f, 0, sizeof(f));
    f[0] = 1;
    f[1] = 2;
    f[2] = 4;
    for(int i = 3; i < n; i++){
        f[i] = f[i-3] + f[i-2] + f[i-1];
    }
    cout << m - f[n-1];
}

int main()
{
    doc();
    xuli();
}
