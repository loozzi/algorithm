#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    bool so = false, hoa = false, thuong = false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] <= 'Z' && s[i]>='A')
            hoa = true;
        else if(s[i]>='0' && s[i] <= '9')
            so = true;
        else if(s[i]>='a'&&s[i] <='z')
            thuong  = true;
        if(hoa && thuong && so)
            return true;
    }
    return (hoa && thuong && so);
}

int main()
{
    freopen("PASS.INP", "r", stdin);
    freopen("PASS.OUT", "w", stdout);
    long long res = 0;
    string s;
    cin >> s;

    if(s.length() < 6) cout << 0;
    else {
        for(int i = 0; i < s.length()-6; i++){
            string tmp = "";
            for(int j = 0; j < 5; j++){
                tmp += s[i+j];
            }
            for(int j = i+5; j < s.length(); j++){
                tmp += s[j];
                if(check(tmp))
                    res++;
            }
        }
        cout << res;
    }
}
