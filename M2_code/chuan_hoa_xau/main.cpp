#include <bits/stdc++.h>

using namespace std;

string xoa_dau_cach(string s){
    string res = "";
    while(s[0]==' ') s.erase(0, 1);
    for(int i = 0;i < s.length(); i++){
        if(s[i] != ' ')
            res += s[i];
        if(s[i] !=' ' && s[i+1] == ' ')
            res += " ";
    }
    return res;
}

void ghi_hoa_ki_tu_dau(string &s){
    s[0]-=32;
    for(int i = 0; i < s.length(); i++){
        if(!(s[i]>='a' && s[i] <= 'z') && s[i]!=' ')
            s[i] += 32;
    }
    if(s[0]>='a' && s[0] <= 'z')
        s[0] -= 32;
    for(int i = 1; i < s.length(); i++){
        if(s[i] !=' ' && s[i-1]==' ')
            s[i] -= 32;
    }
}

int main()
{
    freopen("CHXAU.INP", "r", stdin);
    freopen("CHXAU.OUT", "w", stdout);
    string s, res;
    while(getline(cin, s)){
        s = xoa_dau_cach(s);
        ghi_hoa_ki_tu_dau(s);
        cout << s << endl;
    }
}
