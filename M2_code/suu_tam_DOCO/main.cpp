#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DOCO.INP", "r", stdin);
    freopen("DOCO.OUT", "w", stdout);
    int n, tmp, res = 1;
    cin >> n;
    cout << 2 << endl;
    while(n--){
        cin >> tmp;
        res = max(tmp, res);
        res += 1;
        cout << res << endl;
    }
}
