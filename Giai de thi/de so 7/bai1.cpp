#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];

int main(){
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);
    int n;
    cin >> n;
    int h[n], c[n];
    memset(h, 0, sizeof(h));
    memset(c, 0, sizeof(c));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            h[i] += a[i][j];
            c[j] += a[i][j];
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(h[i] == c[j])
                res++;

    cout << res;
}
