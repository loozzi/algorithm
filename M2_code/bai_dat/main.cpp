#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("DAT.INP", "r", stdin);
    freopen("DAT.OUT", "w", stdout);
}

void xuli(){
    int n, res = 0;

    cin >> n;
    string s[n+1];
    for(int i = 1; i <= n; i++){
        cin >> s[i];
        s[i] = "0" + s[i];
    }
    for(int i = 0; i < s[0].length(); i++){
        s[0] += "0";
    }
    for(int i = 1; i <= n; i++){

        for(int j = 0; j < s[i].length(); j++){
            if (s[i][j] == '1'){
                res++;
                if(s[i-1][j]=='1') res--;
                if(s[i][j-1]=='1') res--;
            }
        }
    }
    cout << res;
}

int main()
{
    doc();
    xuli();
}
