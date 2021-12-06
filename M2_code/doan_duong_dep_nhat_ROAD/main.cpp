#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("ROAD.INP", "r", stdin);
    freopen("ROAD.OUT", "w", stdout);
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[n];

    cin >> a[1];
    b[1] = a[1];
    b[0] = 0;
    for(int i = 2; i <= n; i++){
        cin >> a[i];
        b[i] += a[i] + b[i-1];
    }


    int res_v = 0, res_u = 0;

    for(int i = n; i > 1; i--){
        int kc;
        for(int j = 0; j < i; j++){
            kc = i-j
            if((b[i]-b[j])/)
        }
    }
}
