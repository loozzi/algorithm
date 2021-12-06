#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("NGOAC.INP", "r", stdin);
    freopen("NGOAC.OUT", "w", stdout);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.length() & 1 )
            cout << "NO";
        else {
            int nd = 0, nm = 0;
            for(int i = 0; i < s.length(); i++){
                if(s[i] == '(')
                    ++nm;
                else
                    ++nd;
                if(nm < nd)
                    break;
            }
            if(nm == nd)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
