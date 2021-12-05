#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TRIP.INP", "r", stdin);
    freopen("TRIP.OUT", "w", stdout);
    int n, d, res = 0;
    cin >> n >> d;
    int a[n];
    bool b[n];
    memset(b, true, sizeof(n));
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a+n);
    for(int i = n-1; i >= 0 ; i--){
        if(b[i]){
            int k = 0, m;
            for(int j = 0; j < n; j++){
                if(b[j]){
                    k = a[j];
                    m = j;
                    break;
                }
            }
            res++;
            b[i] = false;
            if(a[i]+k <= d){
                b[m] = false;
            }
        }
    }
    cout << res;
}
