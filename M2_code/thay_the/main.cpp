#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("THAYTHE.INP", "r", stdin);
    freopen("THAYTHE.OUT", "w", stdout);

    string s, cu, moi;
    getline(cin, s);
    getline(cin, cu);
    getline(cin, moi);
    while(s.find(cu) < s.length()){
        int vt = s.find(cu);
        s.erase(vt, cu.length());
        s.insert(vt, moi);
    }
    cout << s;
}
