#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("KHIEUVU.INP", "r", stdin);
    freopen("KHIEUVU.OUT", "w", stdout);
}

struct dt{
    int first, second;
};

void process(){
    int n;
    string s;
    cin >> n >> s;
    s = " "+s;
    int a[n+1];
    dt f[n+1];
    for(int i = 0; i <= n; i++)
        f[i].first = f[i].second = 0;
    for(int i = 1; i <= n; i++){
        if(s[i] == '0'){
            f[i].first = f[i-1].first + 1;
            f[i].second  = f[i-1].second;
        } else {
            f[i].first = f[i-1].first;
            f[i].second = f[i-1].second + 1;
        }
    }

    int res = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j <= n; j++){
            if(f[j].first-f[i].first == f[j].second - f[i].second)
                res++;
        }
    }
    cout << res;
}

int main()
{
    init();
    process();
}
