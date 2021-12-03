#include<bits/stdc++.h>
using namespace std;

int n, m;
int w[100];
int a[100];
int res = 0;

void kq(){
    int r = 0;
    for(int i = 1; i <= m; i++)
        r += w[i] * a[i];
    if(r <= n)
        res = max(res, r);
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == m)
            kq();
        else
            Try(i+1);
    }
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
        cin >> w[i];
    Try(1);
    cout << res;
}
