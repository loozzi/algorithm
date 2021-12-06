#include <bits/stdc++.h>

using namespace std;

long long p(long long i){
    long long res = 1;
    for(long long j = 0; j < i; j++){
        res*=3;
    }
    return res;
}

int main()
{
    freopen("MYSTERY.INP", "r", stdin);
    freopen("MYSTERY.OUT", "w", stdout);
    long long a, res = 1;
    for(long long i = 1; i <= a/2; i++){
        if(a % i == 0)
            res = res*(p(i)-1)%20122007;
    }
    cout << res;
}
