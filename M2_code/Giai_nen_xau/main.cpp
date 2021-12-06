#include <bits/stdc++.h>

using namespace std;

int str_to_int(string s){
    int res;
    stringstream ss(s);
    ss >> res;
    return res;
}

string giai_nen(string s){
    string res = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            string so="";
            so += s[i];
            ++i;
            while(s[i] >= '0' && s[i] <= '9'){
                so += (s[i]);
                i++;
            }
            for(int j=0; j < str_to_int(so); j++){
                res += s[i];
            }
        }
        else
            res += s[i];

    }
    return res;
}



int main()
{
    freopen("NENXAU.INP", "r", stdin);
    freopen("NENXAU.OUT", "w", stdout);
    string s;
    getline(cin, s);

    cout << giai_nen(s);
}
