#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("cau3.inp", "r", stdin);
    freopen("cau3.out", "w", stdout);
    string s;
    cin >> s;
    s = " " + s;
    int f[s.length()+5];
    memset(f, 0, sizeof(f));
    for(int i = 1; i < s.length(); i++){
        f[i] = f[i-1] + (int)s[i] - 48;
        cout << f[i] << " ";
    }


}
