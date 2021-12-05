#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("NKCABLE.INP", "r", stdin);
    freopen("NKCABLE.OUT", "w", stdout);
}

void xuli(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int f[n];
    f[0] = a[0];
    f[1] = a[1];
    for(int i = 2; i < n; i++){
        f[i] = min(f[i-1], f[i-2]) + a[i-1];
    }
    cout << f[n-1];
}

int main()
{
    doc();
    xuli();
}
