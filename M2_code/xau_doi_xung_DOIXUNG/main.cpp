#include <bits/stdc++.h>

using namespace std;

bool xdx(string s){
    for(int i = 0; i <= s.length()/2; i++)
        if(s[i]!=s[s.length() - i - 1])
            return 0;
    return 1;
}

int main()
{
    freopen("DOIXUNG.INP", "r", stdin);
    freopen("DOIXUNG.OUT", "w", stdout);
    int n;
    cin >> n;
    string s;
    vector<int> res;
    for(int i = 1; i <= n; i++){
        cin >> s;
        if(xdx(s)){
            res.push_back(i);
        }
    }

    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
}
