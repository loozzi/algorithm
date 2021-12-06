#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("NMAX.INP",  "r", stdin);
    freopen("NMAX.OUT", "w", stdout);
    string s, s1, res = "";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i]>='0' && s[i] <= '9')
            s1 += s[i];
    }
    int vt = 0;
    while(res.length() < 5){
        char m = s1[vt];
        int vt_tmp = vt;
        for(int i = vt; i < s1.length() - 4 + res.length(); i++){

            if(s1[i] > m){
                m = s1[i];
                vt_tmp = i;
            }
        }
        res += m;
        vt = vt_tmp+1;
    }
    cout << res;
}
