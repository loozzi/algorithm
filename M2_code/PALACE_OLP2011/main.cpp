#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1000], f[1000][1000];
bool b[1000], cheo1[18], cheo2[18];
int res = 129811122;

void inKQ(){
    int sum = 0;
    for(int i = 1; i <= n ;i++)
        sum += f[i][a[i]];
    res= min(res, sum);
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!b[j] && !cheo1[i + j - 1] && !cheo2[8-j+i]){
            a[i] = j;
            b[j] = true;
            cheo1[i + j - 1] = true;
            cheo2[8 - j + i] = true;
            if(i == n)
                inKQ();
            else
                Try(i+1);
            b[j] = false;
            cheo1[i + j - 1] = false;
            cheo2[8 - j + i] = false;
        }
    }
}

int main()
{
    freopen("palace_olp2011.inp", "r", stdin);
    freopen("palace_olp2011.out", "w", stdout);
    memset(b, false, sizeof(b));
    memset(cheo1, false, sizeof(cheo1));
    memset(cheo2, false, sizeof(cheo2));
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j<=n; j++)
            cin >> f[i][j];
    Try(1);
    cout << res;

}
