#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("exp.inp", "r", stdin);
    freopen("exp.out", "w", stdout);
    int n, s;
    cin >> n;
    int a[n+5];
    bool c[n+5];
    memset(c, false, sizeof(c));
    c[0] = true;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> s;
    for(int i = 0; i < n; i++){
        c[a[i]] = true;
        for(int j = s; j >= a[i]; j--){
            if(c[j-a[i]] == true)
                c[j] = true;
        }
    }
    if(c[s] == true)
        cout << "YES";
    else
        cout << "NO";

}