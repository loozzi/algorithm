#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("NKSGAME.INP", "r", stdin);
    freopen("NKSGAME.OUT", "w", stdout);
    long long n, res;
    cin >> n;
    long long a[n], b[n];
    for(long long i = 0; i < n; i++)
        cin >> a[i];
    for(long long i = 0; i < n; i++)
        cin >> b[i];

    sort(a, a+n);
    sort(b, b+n);

    res = abs(a[n-1] + b[0]);
    int m=0, k=n-1;
    for(int i = 0; i < 2*n; i++){
        res = min(res, abs(a[m]+b[k]));
        if(a[m]+b[k]>0) --k;
        else if(a[m]+b[k] < 0) ++m;
        else if(a[m]+b[k]==0){
            res = 0;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        res = min(res, abs(a[m]+b[k]));
        if(a[m]+b[k]>0) --k;
        else if(a[m]+b[k] < 0) ++m;
        else if(a[m]+b[k]==0){
            res = 0;
            break;
        }
    }
    cout << res;
}
