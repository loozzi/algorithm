#include <bits/stdc++.h>

using namespace std;

// ha`m thu`a

int stoi_(string tmp){
    stringstream ss;
    ss << tmp;
    int res;
    ss >> res;
    return res;
}

int main()
{
    freopen("ARRSTRING.INP", "r", stdin);
    freopen("ARRSTRING.OUT", "w", stdout);
    string s = "";
    while(getline(cin, s)){
        int res = 0;
        s += " ";
        string tmp = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i]>='0' && s[i]<='9'){
                tmp += s[i];
            }
            else if(tmp != ""){
                res += stoi(tmp);
                tmp = "";
            }
        }
        cout << res << endl;
    }
}
