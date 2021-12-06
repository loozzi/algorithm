#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
}

void xuli(){
    int n;
    cin >> n;
    int a[n], f[n], res = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    memset(f, 0, sizeof(f));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[i] > a[j])
                f[i] = max(f[i], f[j] + 1);
            res = max(f[i], res);
        }
    }
    cout << res + 1 << endl;

    // truy vet
    int k, m;
    bool b[n];
    memset(b, false, sizeof(b));
    for(int i = 0; i < n; i++){
        if(f[i] == res){
            k = i;
            m = a[i];
        }
    }
    b[k] = true;
    for(int i = k; i >= 0; i--){
        if(f[i] == res - 1 && a[i] < m){
            b[i] = true;
            res--;
            m = a[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(b[i])
            cout << a[i] << " ";
    }
}

int main()
{
    doc();
    xuli();
}
