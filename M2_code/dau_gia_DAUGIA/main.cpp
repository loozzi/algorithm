#include <bits/stdc++.h>

using namespace std;

bool sdx(int n){
    string s;
    stringstream ss;
    ss << n;
    s = ss.str();
    for(int i = 0; i <= s.length()/2; i++){
        if(s[i]!=s[s.length() - i-1])
            return false;
    }
    return true;
}

int main()
{
    freopen("DAUGIA.INP", "r", stdin);
    freopen("DAUGIA.OUT", "w", stdout);
    int l, r, res = 0;
    cin >> l >> r;
    bool a[r+1];
    memset(a, true, r+1);
    for(int i = 2; i <= sqrt(r+1); i++)
        for(int j = i*2; j<=r+1; j+=i)
            a[j] = false;

    for(int i = l; i <= r; i++){
        if(a[i]){
            if(sdx(i)) res++;
        }
    }
    cout << res;
}
