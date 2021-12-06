#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    return (b==0)?a:gcd(b, a%b);
}

int main()
{
    freopen("BONUS.INP", "r", stdin);
    freopen("BONUS.OUT", "w", stdout);
    long long n, k;
    cin >> n >> k;
    long long d = 0;

    bool a[k+1];
    memset(a, true, sizeof(a));
    a[0] = a[1] = false;
    for(int i = 2; i <= sqrt(k); i++){
        if(a[i])
            for(int j = i*i; j <= k; j += i){
                a[j] = false;
            }
    }

    for(int i = 2; i <= k; i++){
        if(a[i])
            d+=n/i;
    }

    for(int i = 2; i <= k; i++){
        if(a[i])
            for(int j = i + 1; j <= k; j++){
                if(a[j]){
                    int ii = i*j / gcd(i, j);
                    d -= n/ii;
                }
            }
    }

    cout << n - d;

}
