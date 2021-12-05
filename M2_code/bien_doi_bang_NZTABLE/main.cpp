#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("NZTABLE.INP", "r", stdin);
    freopen("NZTABLE.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n+1][n+1], b[n+1][n+1];
    for(int i = 1; i <=n ;i++)
        for(int j = 1; j <= n ;j++)
            cin >> a[i][j];

    // xu li
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] > 0)
                b[i][j] = a[i][j];
            else {
                int h = 0, kc = n;
                for(int t = 1; t <= n; t++){
                    if(a[i][t] != 0 && kc >= abs(t-j)){
                        h = max(h, a[i][t]);
                        kc = abs(t-j);
                    }
                    if(a[t][j] != 0 && kc >= abs(t-i)){
                        h = max(h, a[t][j]);
                        kc = abs(t-i);
                    }
                }
                b[i][j] = h;
            }
        }
    }

    // xuat ket qua
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
