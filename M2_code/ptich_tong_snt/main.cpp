// Kiem tra 1 so xem co phai la so nguyen to lien tiep hay khong

#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("nto.inp", "r", stdin);
    freopen("nto.out", "w", stdout);
}

void xuli(){
    int n;
    cin >> n;
    bool a[n];
    memset(a, true, sizeof(bool) * n);
    for(int i = 2; i * i < n; i++){
        if(a[i] == true){
            for(int j= i * i; j <= n; j+=i){
                a[j] = false;
            }
        }
    }
    int res[4], sum = 0;
    int giua = n /4;
    if(giua < 3){
        cout << -1;
        exit(0);
    }
    int x = 1;
    for(int i = giua; i >= 2 && x >= 0; i--){
        if(a[i] == true){
            res[x] = i;
            x--;
            sum += i;
        }
    }
    x = 2;
    for(int i = giua; i <= n && x <= 3; i++){
        if(a[i] == true){
            res[x] = i;
            x++;
            sum += i;
        }
    }
    if(sum == n){
        for(int i = 0; i < 4; i++){
            cout << res[i] << " ";
        }
    } else {
        cout << -1;
    }
}

int main()
{
    doc();
    xuli();
}
