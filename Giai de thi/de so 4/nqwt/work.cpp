#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("work.inp", "r", stdin);
    freopen("work.out", "w", stdout);
}

struct dt{
    int t, p;
};

void process(){
    int n;
    cin >> n;
    int t[n], r[n-1], f[n];
    for(int i = 0; i < n; i++)
        cin >> t[i];
    for(int i = 0; i < n-1; i++)
        cin >> r[i];
    f[0] = t[0];
    f[1] = min(f[0] + t[1], r[0]);
    for(int i = 2; i < n; i++){
        f[i] = min(f[i-1] + t[i], f[i-2] + r[i-1]);
    }
    cout << f[n-1];
}

int main()
{
    init();
    process();
}
