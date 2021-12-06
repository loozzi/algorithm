#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("VSTEPS.INP", "r", stdin);
    freopen("VSTEPS.OUT", "w", stdout);
}

void xuli(){
    int n, k;
    cin >> n >> k;
    int tmp, f[n+1];
    bool b[n+1];
    memset(b, true, sizeof(b));
    memset(f, 0 ,sizeof(f));
    for(int i = 0; i < k; i++){
        cin >> tmp;
        b[tmp] = false;
    }

    f[1] = 0;
    if(b[2])
        f[2] = 1;
    if(b[3]&&b[2])
        f[3] = 2;
    if(!(b[3]&&b[2]))
        f[3] = 0;

    for(int i = 4; i <= n; i++)
        if(b[i]==true)
            f[i] = (f[i-1] + f[i-2]) % 14062008;
        else
            f[i] = 0;

    cout << f[n];
}

int main()
{
    doc();
    xuli();
}
