#include <bits/stdc++.h>

using namespace std;

int n, a, b;

void doc(){
    freopen("TRAM.INP", "r", stdin);
    freopen("TRAM.OUT", "w", stdout);
}

void xuli(){
    int res = 0, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        sum += b - a;
        res = max(res, sum);
    }

    cout << res;
}

int main()
{
    doc();
    xuli();
}
