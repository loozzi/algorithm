#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DEMDOAN.INP", "r", stdin);
    freopen("DEMDOAN.OUT", "w", stdout);
    int n, k, res = 0;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++){
        int tmp = 0;
        for(int j = i; j < n; j++){
            tmp += a[j];
            if(tmp >= k) res++;
        }
    }
    cout << res;
}
