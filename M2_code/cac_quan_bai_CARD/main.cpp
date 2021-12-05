#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CARD.INP", "r", stdin);
    freopen("CARD.OUT", "w", stdout);
    int n, m, x, y, res = 1;
    cin >> n >> m;
    while(m--){
        cin >> x >> y;
        if(x==res)
            res = y;
    }
    cout << res;
}
