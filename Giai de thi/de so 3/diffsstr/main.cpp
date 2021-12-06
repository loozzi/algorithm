#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("diffsstr.inp", "r", stdin);
//    freopen("diffsstr.out", "w", stdout);

    int n;
    cin >> n;
    string s;
    cin >> s;

    bool c[255];
    int res = n;
    for(int i = 0; i < n; i++){
        memset(c, false, sizeof(c));
        for(int j = i; j < res; j++){
            if(c[s[j]] ==  true){
                res = min(res, j-i);
            } else {
                c[s[j]] = true;
            }
        }
    }
    cout << res;
}
