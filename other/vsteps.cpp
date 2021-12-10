#include<bits/stdc++.h>

const int mod = 14062008;

using namespace std;

int main(){
    int n, k, tmp;
    cin >> n >> k;
    int f[n+1];
    bool c[n+1];
    memset(c, true, sizeof(c));
    for(int i = 0; i<k; i++){
        cin >> tmp;
        c[tmp]  = false;
    }
    f[1] = 1;
    if(c[2]==true){
        f[2] = 1;
    } else 
        f[2] = 0;
    if(c[3] == false)
        f[3] = 0;
    else if(c[2] == true) 
        f[3] = 2;
    else f[3] = 1;
    for(int i = 4; i <= n; i++){
        if(c[i]==true)
            f[i] = f[i-1] + f[i-2];
        else
            f[i] = 0;
        f[i] %= mod;
    }
    cout << f[n];
}