#include <bits/stdc++.h>

using namespace std;

int ucln(int a, int b){
    return (b==0)?a:ucln(b, a%b);
}

bool stt(int n){
    int a = n, b = 0;
    while(n){
        b = b*10 + n%10;
        n/=10;
    }
    return (ucln(a, b)==1);
}

int main()
{
    freopen("NKNUMFRE.INP", "r", stdin);
    freopen("NKNUMFRE.OUT", "w", stdout);
    int l, r, res = 0;
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        if(stt(i))
            res++;
    }
    cout << res;
}
