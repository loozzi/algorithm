#include <bits/stdc++.h>

using namespace std;

int n;
string s;

bool check(int len){
    set<string> st;
    for(int i = 0; i < n - len + 1; i++){
        string subs = s.substr(i, len);
        if(st.find(subs) != st.end())
            return false;
        st.insert(subs);
    }
    return true;
}

int main()
{
    freopen("diffsstr.inp", "r", stdin);
    freopen("diffsstr.out", "w", stdout);

    cin >> n;
    cin >> s;
    int res = n;
    for(int i = 1; i <= n; i++){
        if(check(i)){
            res = i;
            break;
        }
    }
    cout << res;
}
