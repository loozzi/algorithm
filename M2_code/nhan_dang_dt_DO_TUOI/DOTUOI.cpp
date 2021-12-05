#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DOTUOI.INP", "r", stdin);
    freopen("DOTUOI.OUT", "w", stdout);
    int n, res = 0;
    cin >> n;
    int a[n], b[n];
    cin >> a[0];
    b[0] = 1;
    for(int i = 1; i < n; i++){
        cin >> a[i];
        b[i] = 1;
        if(a[i]==a[i-1])
            b[i] = b[i-1]+1;

        res = max(res, b[i]);
    }

    cout << res;
}
