#include <bits/stdc++.h>

using namespace std;

void doc(){}

bool spp(int n){
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i == 0)
            sum += i + n/i;
    if(sqrt(n)*sqrt(n) == n)
        sum -= sqrt(n);
    return sum > n;
}

void xuli(){
    int l, r, res = 0;
    cin >> l >> r;
    int f[r*2];
    memset(f, 0, sizeof(f));
    for(int i = 1; i <= r/2; i++)
        for(int j = i*2; j <= r; j+=i)
            f[j] += i;

    for(int i = l; i <= r; i++){
        if(f[i] > i)
            res++;
    }
    cout << res;
}

int main()
{
    doc();
    xuli();
}
