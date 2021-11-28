#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("sqroot.inp", "r", stdin);
    freopen("sqroot.out", "w", stdout);
    long long n, d = 2021;
    cin >> n;
    cout << ((n%d) * ((n+1)%d) * ((2*n+1)%d)) / 6 % 2021;
}
