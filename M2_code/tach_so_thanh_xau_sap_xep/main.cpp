#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("XAU.INP", "r", stdin);
    freopen("XAU.OUT", "w", stdout);
    string s;
    cin >> s;
    s += " ";
    int a[10000];
    int n = 0;
    string tmp = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i]>='0' && s[i]<='9'){
            tmp += s[i];
        } else if(tmp != "") {
            a[n] = atoi(tmp.c_str());
            tmp = "";
            ++n;

        }
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
