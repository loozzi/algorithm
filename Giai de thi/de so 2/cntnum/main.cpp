#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("cntnum.inp", "r", stdin);
    freopen("cntnum.out", "w", stdout);
}

long long ucln(int a, int b){
    return (b==0)?a:ucln(b, a%b);
}

void process(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long res = b-a+1;
    long long bcnn = (c*d)/ucln(c, d);

    res -= (b/c - a/c);
    res -= (b/d - a/d);
    res += (b/bcnn - a/bcnn);

    cout << res;
}

int main()
{
    init();
    process();
}
