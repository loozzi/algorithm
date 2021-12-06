#include <bits/stdc++.h>

using namespace std;

string ts(int n){
    stringstream ss;
    ss << n;
    return ss.str();
}

int main()
{
    freopen("SONGUYEN.INP", "r", stdin);
    freopen("SONGUYEN.OUT", "w", stdout);
    int m, n, d = 0;
    string s;
    cin >> m >> n;
    for(int i = m; i<=n; i++){
        s=ts(i);
        for(int j = 0; j < s.length(); j++){
            if(s[j] == '0')
                d++;
        }
    }
    cout << d;
}
