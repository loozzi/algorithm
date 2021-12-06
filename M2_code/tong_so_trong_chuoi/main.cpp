#include <bits/stdc++.h>

using namespace std;

int stoi(string tmp){
    stringstream ss;
    ss << tmp;
    int tmp2;
    ss >> tmp2;
    return tmp2;
}

int main()
{
    freopen("STRSUM.INP", "r", stdin);
    freopen("STRSUM.OUT", "w", stdout);
    string s;
    int res = 0;
    getline(cin, s);
    s += " ";
    string tmp = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i]>='0' && s[i]<='9'){
            tmp += s[i];
        } else if(tmp != "") {
            res += atoi(tmp.c_str());
            tmp = "";
        }
    }
    cout << res;
}
