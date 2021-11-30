#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
    vector<string> a;
    string s;
    while(cin >> s)
        a.push_back(s);

    string b[a.size() + 1];
    for(int i = 0; i < a.size(); i++){
        b[i+1] = "0" + a[i];
    }
    s = "";
    for(int i = 0; i <= a[0].length(); i++)
        s += "0";

    b[0] = s;
    int res = 0;
    for(int i = 0; i <= a.size(); i++){
        for(int j = 0; j < b[i].length(); j++){
            if(b[i][j] == 'x' && b[i-1][j] == '0' && b[i][j-1] == '0' && b[i-1][j-1] == '0')
                res++;
        }
    }
    cout << res;
}
