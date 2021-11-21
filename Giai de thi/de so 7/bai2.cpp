#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
    string s;
    cin >> s;
    vector<int> res;
    bool c[10];
    memset(c, false, sizeof(c));
    for(int i = 0; i < s.length(); i++){
        int k = (int)s[i] - 48;
        if((k==2||k==3||k==5||k==7) && c[k] == false){
            res.push_back(k);
            c[k] = true;
        }
        if(res.size() == 4)
            break;
    }
    if(!res.empty()){
        for(int i = 0 ; i < res.size(); i++)
            cout << res[i] << " ";
    }
    else
        cout << 0;
}
