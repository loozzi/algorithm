#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHIAMANG.INP", "r", stdin);
    freopen("CHIAMANG.OUT", "w", stdout);
    int n, sum = 0, res = 0, tmp = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum & 1){
        cout << 0;
    } else {
        while(tmp <= sum/2){
            tmp += a[res];
            res++;
        }
        cout << res;
    }
}
