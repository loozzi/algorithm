#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("cau3.inp", "r", stdin);
    freopen("cau3.out", "w", stdout);
    int n, k, sum, res  = 0;
    cin >> n >> k;
    int a[n+1][n+1], h[n+1][n+1], c[n+1][n+1];
    for(int i= 0; i <= n; i++)
        for(int j= 0; j <= n; j++){
            if(i * j == 0)
                c[i][j] = h[i][j] = 0;
            else {
                cin >> a[i][j];
                h[i][j] = h[i][j-1] + a[i][j];
                c[i][j] = c[i-1][j] + a[i][j];
            }
        }


    for(int i = 1; i <= n-k+1; i++){
        sum = 0;
        for(int j = i; j <= k+i-1 ; j++){
            sum += h[j][k];
        }
        res = max(res, sum);
        for(int j = k+1; j <= n; j++){
            sum = sum + c[i+k-1][j] - c[i-1][j] - (c[i+k-1][j-k] - c[i-1][j-k]);
            res = max(res, sum);
        }
    }

    cout << res;
}
