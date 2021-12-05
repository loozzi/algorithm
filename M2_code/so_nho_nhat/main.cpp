// SAI

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("SNN.INP", "r", stdin);
    freopen("SNN.OUT", "w", stdout);
    int n, m, x, y;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i <= n; i++)
        a[i] = i;
    for(int i = 0; i<m ; i++){
        cin >> x >> y;
        if(x > y && a[y]>0){
            a[y] += a[x];
            a[x] = 0;
        } else if(x < y && a[x]>0){
            a[x] += a[y];
            a[y] = 0;
        }
    }
    int max_ = a[0], max_i = 0;
    for(int i = 1; i <= n; i++){
        if (max_<a[i]){
            max_i = i;
            max_ = a[i];
        }
    }
    cout << max_i;

}
