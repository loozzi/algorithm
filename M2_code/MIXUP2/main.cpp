#include <bits/stdc++.h>

using namespace std;

int n, k, res = 0;
int s[20], a[20];
bool b[20];

void doc(){
    freopen("MIXUP2.INP", "r", stdin);
    freopen("MIXUP2.OUT", "w", stdout);
}

void solve(){
    bool c = true;
    for(int i = 1; i < n; i++){
        if(abs(s[a[i]] - s[a[i+1]]) <= k)
            c = false;
    }
    if(c)
        res++;
}

void dq(int i){
    for(int j = 1; j <= n; j++){
        if(!b[j]){
            a[i] = j;
            b[j] = true;
            if(i == n){
                solve();
            } else {
                dq(i+1);
            }
            b[j] = false;
        }
    }
}

void xuli(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> s[i];
    }
    memset(b, false, sizeof(b));
    dq(1);
    cout << res;
}

int main()
{
    doc();
    xuli();
}
