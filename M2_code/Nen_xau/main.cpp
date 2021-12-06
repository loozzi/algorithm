#include <bits/stdc++.h>
#include <string>
using namespace std;

string nen_xau(string s){
    string res = "";
    int dem = 1;
    for(int i = 1; i <= s.length(); i++){
        if(s[i] == s[i-1]){
            dem++;
        }
        else {
            if(dem != 1){
                stringstream ss;
                ss << dem;
                res += ss.str() + s[i-1];
            } else {
                res += s[i-1];
            }
            dem = 1;
        }
    }
    return res;
}

int main()
{
    freopen("NENXAU.INP", "r", stdin);
    freopen("NENXAU.OUT", "w", stdout);

    string s;
    getline(cin, s);

    cout << nen_xau(s);
}
