#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("FILE.INP", "r", stdin);
    freopen("FILE.OUT", "w", stdout);
    string s;
    int a[(int)('z'+1)];
    memset(a, 0, sizeof(a));
    while(cin >> s){
        for(int i = 0; i < s.length(); i++)
            a[(int)s[i]]++;
    }
    for(int i = 0; i < (int)('z'+1); i++){
        if(a[i]>0)
            cout << char(i) << " - " << a[i] << endl;
    }
}
