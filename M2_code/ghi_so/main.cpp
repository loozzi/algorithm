#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("GHISO.INP", "r", stdin);
    freopen("GHISO.OUT", "w", stdout);
    int n;
    while(cin >> n){
        int res = 0;
        while(n){
            if(n&1) --n;
            else n/=2;
            res++;
        }
        cout << res << endl;
    }
}
