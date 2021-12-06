#include <bits/stdc++.h>

using namespace std;


void init(){
    freopen("dayso.inp", "r", stdin);
    freopen("dayso.out", "w", stdout);
}


void process(){
    long long n, m;
    cin >> n >> m;

    long long s = 0, s1, res = 0;
    long long i = 0;
    while(s < n){
        i++;
        s += i;
    }
    res = i * (s - n + 1);
    while(s < m){
        i++;
        s += i;
        res += i * i;
    }
    res -= (s-m) * i;
    cout << res;
}

int main()
{
    init();
    process();
}
