#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("decrease.inp", "r", stdin);
    freopen("decrease.out", "w", stdout);
}

int get_num(int n){
    stringstream ss;
    ss << n;
    string s = ss.str();
    char c = s[0];
    for(int i = 0; i < s.length(); i++){
        c = max(c, s[i]);
    }

    return (int)c - 48;
}

void process(){
    int n;
    cin >> n;
    int res = 0;
    while(n!=0){
        res++;
        n -= get_num(n);
    }
    cout << res;
}

int main()
{
    init();
    process();
}
