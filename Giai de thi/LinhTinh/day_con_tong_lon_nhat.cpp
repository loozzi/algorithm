#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("DAYCONTONGMAX.INP", "r", stdin);
    freopen("DAYCONTONGMAX.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n+1], f[n+1];
    memset(f, 0, sizeof(n+1));
    int M=0, m=INT_MAX, vtM = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        f[i] = a[i] + f[i-1];
        if(M < f[i]){
            M = f[i];
            vtM = i;
        }
    }
    for(int i = 1; i < vtM; i++)
        m=min(m, f[i]);

    if(m < 0)
        cout << M-m;
    else
        cout << M;
}
