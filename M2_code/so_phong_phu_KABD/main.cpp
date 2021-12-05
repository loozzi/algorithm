#include <bits/stdc++.h>

using namespace std;

bool spp(int n){
    int sum = 0;
    for(int i = 1; i <= n/2; i++){
        if(n%i==0)
            sum += i;
    }
    return sum > n;
}

int main()
{
    freopen("KABD.INP", "r", stdin);
    freopen("KABD.OUT", "w", stdout);
    int l, r, res = 0;
    cin >> l >> r;
    int a[r+1];
    memset(a, 0, sizeof(a));
    for(int i = 1; i <= r/2; i++){
        for(int j = i*2; j<=r; j+=i){
            a[j] += i;
        }
    }
    for(int i = l; i <= r; i++){
//        if(spp(i))
//        {
//            res++;
//        }
        if(a[i] > i)
            res++;

    }
    // 12394
    cout << res;
}
