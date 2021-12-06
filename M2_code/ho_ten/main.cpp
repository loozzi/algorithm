#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("HOTEN.INP", "r", stdin);
    freopen("HOTEN.OUT", "w", stdout);
    string s;
    getline(cin, s);

    // dem so luong tu`
    int slTu = 1;
    for(int i = 1; i < s.length(); i++){
        if(s[i]!=' ' && s[i-1] == ' ')
            slTu++;
    }
    cout << slTu << endl;

    // ti`m tu dai nhat
    int max_ = 0, tmp = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' ')
            tmp++;
        else
            tmp = 0;
        max_ = max(max_, tmp);
    }
    cout << max_ << endl;

    // ghi hoa
    s[0]-=32;
    for(int i = 1; i < s.length(); i++){
        if(s[i] !=' ' && s[i-1]==' ')
            s[i] -= 32;
    }
    cout << s << endl;

    // ghi tung tu ra 1
    for(int i = 0; i < s.length(); i++){
        if(s[i] !=' ' && s[i-1]==' ')
            cout << endl << s[i];
        else
            cout << s[i];

    }
}
