#include<bits/stdc++.h>

using namespace std;


bool f[503][50003];

void cc(){
        freopen("exp.inp", "r", stdin);
    freopen("exp.out", "w", stdout);
    int n, s;
    cin >> n;
    int a[n+5], sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cin >> s;
    memset(f, false, sizeof(f));
    for(int i = 2; i <= n; i++){
        for(int j = -sum; j <= sum; j++){
            if(j + a[i] <= sum){
                if(f[i-1][j+a[i] + 25000])
                    f[i][j+25000] = true;
            }
            if(j - a[i] >= -sum){
                if(f[i-1][j-a[i] + 25000])
                    f[i][j+25000] = true;
            }
        }
    }
    
    if(f[n][s+25000] == true)
        cout << "YES";
    else
        cout << "NO";
}

void dd(){
    freopen("exp.inp", "r", stdin);
    freopen("exp.out", "w", stdout);
    int n, sum = 0, s;
    cin >> n;
    int a[n+5];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cin >> s;
    memset(f, false, sizeof(f));
    f[0][a[0]] = true;
    int d = 25000;
    for(int i = 1; i < n; i++){
        for(int j = -sum; j <= sum; j++){
            if(j + a[i] <= sum){
                if(f[i-1][j + a[i] + d]){
                    f[i][j+d] = true;
                }
            }
            if(j - a[i] >= sum){
                if(f[i-1][j - a[i] + d])
                    f[i][j+d] = true;
            }
        }
    }
    if(f[n-1][s])
        cout << "YES";
    else
        cout << "NO";
}

int main(){
    dd();


}