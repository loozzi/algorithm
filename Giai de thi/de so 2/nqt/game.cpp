#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("GAME.INP", "r", stdin);
    freopen("GAME.OUT", "w", stdout);
}

void process(){
    int m, n, a, b;
    cin >> m >> n;
    a = max(m, n);
    b = min(m, n);
    int res  = 0;
    res += a;
    a--;
    a = max(a, b);
    res += a;
    cout << res;
}

int main()
{
    init();
    process();
}
