#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("HORSE.INP", "r", stdin);
    freopen("HORSE.OUT", "w", stdout);
    int n, res = 0, tmp, tg = 27872;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        tg = min(tg, tmp);
        res += tg;
    }
    cout << res - tg;
}
