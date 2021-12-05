#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("SUMCHINH.INP", "r", stdin);
    freopen("SUMCHINH.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n][n], res = 0;
    for(int i = 0;i < n; i++){
        for(int j = 0;j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++)
        res += a[i][i];

    for(int i = 0; i < n; i++){
        int tmp = 0;
        for(int j = 0; j < n-i; j++){
            tmp += a[j][j+i];
        }
        res = max(res, tmp);
        tmp = 0;
        for(int j = 0; j < n-i; j++){
            tmp += a[i+j][j];
        }
        res = max(res, tmp);
    }
    cout << res;

}
