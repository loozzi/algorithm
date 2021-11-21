#include<bits/stdc++.h>
using namespace std;

int getIndex(string s){
    bool c[255];
    memset(c, false, sizeof(c));
    int a[s.length()], b[s.length()];
    vector<int> v;
    for(int i = 0; i < s.length(); i++){
        v.push_back((int)s[i]);
    }
    v.push_back(0);
    sort(v.begin(), v.end());
    v.push_back(0);
    for(int i = 1; i < v.size(); i++){
        if(v[i-1] != v[i] && v[i] != v[i+1])
            c[v[i]] = true;
    }

    for(int i = 0 ; i < s.length(); i++){
        if(c[s[i]]== true)
            return i+1;
    }

    return -1;
}

int main(){
    freopen("bai3.inp", "r", stdin);
    freopen("bai3.out", "w", stdout);
    int n;
    string s;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> s;
        cout << getIndex(s) << endl;
    }

}
