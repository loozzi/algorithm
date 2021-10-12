#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("GAME.INP", "r", stdin);
    freopen("GAME.OUT", "w", stdout);
}

void process(){
    int m, n;
    cin >> m >> n;
    if(m > n){
        m+=n;
        n = m - n;
        m = m - n;
    }
    int res = 0;
    res += m;
    m -= 1;
    res += max(m, n);
    cout << res;
}

int main()
{
    init();
    process();
}
