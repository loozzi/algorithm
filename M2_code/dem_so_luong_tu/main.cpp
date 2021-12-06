#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DEMTU.INP", "r", stdin);
    freopen("DEMTU.OUT", "w", stdout);
    string s;
    while(getline(cin, s)){
        int res = 0;
        s = " " + s;
        for(int i = 0;i < s.length()-1; i++){
            if(s[i] == ' ' && s[i+1] != ' ')
                res++;
        }
        cout << res << endl;
    }
}
