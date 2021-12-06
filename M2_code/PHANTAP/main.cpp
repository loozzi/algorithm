#include <bits/stdc++.h>
using namespace std;
int n, u = 100000, v = 1;
int a[20], b[20];

void solve(){
    int c = 0, d = 0;
    for(int i = 1; i <= n; i++){
        if(b[i])
            c += a[i];
        else
            d += a[i];
    }

    if(u == abs(c-d))
        v++;
    else if(u > abs(c-d)){
        u = abs(c-d);
        v = 1;
    }
}

void Try(int i){
    for(int j = 0; j<=1; j++){
        b[i] = j;
        if(i==n){
            solve();
        } else Try(i+1);
    }
}

int main()
{
    freopen("PHANTAP.INP", "r", stdin);
    freopen("PHANTAP.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    Try(1);
    cout << v << " " << u;
}
