#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("cau3.inp", "r", stdin);
    freopen("cau3.out", "w", stdout);
    int n, k, sum, res  = 0;
    cin >> n >> k;
    int a[n][n];
    for(int i= 0; i < n; i++)
        for(int j= 0; j < n; j++)
            cin >> a[i][j];

    for(int i = 0; i <= n - k; i++){
        sum = 0;
        for(int j = 0; j < k; j++){
            for(int j1 = i; j1 < i + k; j1++){
                sum += a[j][j1];
            }
        }
        res = max(res, sum);
        for(int j = 0; j < n - k; j++){
            int tmp1 = 0, tmp2 = 0;
            for(int y = 0; y < k; y++){
                tmp1 += a[i+y][k+j];
                tmp2 += a[i+y][j];
            }
            sum = sum + tmp1 - tmp2;
            res = max(res, sum);
        }
    }
    cout << res;
}
