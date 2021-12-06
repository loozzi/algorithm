#include <bits/stdc++.h>

using namespace std;
bool cheo1[20], cheo2[20], c[10];
int a[10][10], b[10], res = 0;

void solve(){
    int sum = 0;
    for(int i = 1; i <= 8; i++){
        sum += a[i][b[i]];
    }
    res = max(res, sum);
}

void Try(int i){
    for(int j = 1; j<=8; j++){
        if(!cheo1[i+j-1] && !cheo2[8-i+j] && !c[j]){
            b[i] = j;
            c[j] = cheo1[i+j-1] = cheo2[8-i+j] = true;
            if(i == 8)
                solve();
            else
                Try(i+1);

            c[j] = cheo1[i+j-1] = cheo2[8-i+j] = false;
        }
    }
}

int main()
{
    freopen("HAUMAX.INP", "r", stdin);
    freopen("HAUMAX.OUT", "w", stdout);
    memset(c, false, sizeof(c));
    memset(cheo1, false, sizeof(cheo1));
    memset(cheo2, false, sizeof(cheo2));
    for(int i = 1; i<=8; i++)
        for(int j=1; j<=8; j++)
            cin >> a[i][j];
    Try(1);
    cout << res;
}
