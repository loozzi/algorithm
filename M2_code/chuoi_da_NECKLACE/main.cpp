#include <bits/stdc++.h>

using namespace std;

string check(string s){
    int y, r, g;
    y = g = r = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'Y') y++;
        else if(s[i] == 'G') g++;
        else r++;
    }
    return (r==y&&g==y)?"YES":"NO";
}

int main()
{
    freopen("NECKLACE.INP", "r", stdin);
    freopen("NECKLACE.OUT", "w", stdout);
    string s;
    getline(cin, s);
    cout << check(s);
}
