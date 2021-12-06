#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHUSON.INP", "r", stdin);
    freopen("CHUSON.OUT", "w", stdout);
    int n;
    while(cin >> n){
        string s = "";
        int i = 1;
        while(s.length() < n){
            s+=to_string(i++);
        }
        cout << s[n-1] << endl;
    }
}
