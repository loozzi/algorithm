#include <bits/stdc++.h>
using namespace std;

const long long DU = 1e9 + 7;

void init(){
    freopen("delete.inp", "r", stdin);
    freopen("delete.out", "w", stdout);
}

void process(){
    int n;
    cin >> n;
    int a[n+5], n3[n+5], n1[n+5];
    memset(n1, 0, sizeof(n1));
    memset(n3, 0, sizeof(n3));
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] == 1)
            n1[i] = n1[i-1] + 1;
        else
            n1[i] = n1[i-1];
        if(a[i] == 3)
            n3[i] = n3[i-1] + 1;
        else
            n3[i] = n3[i-1];
    }
    int res = 0;
    int pos = 0;
    for(int i = 2; i < n; i++){
        if(a[i] == 2){
            n1[i] = n1[i] + n1[pos];
            res += n1[i] * (n3[n] - n3[i]);
            n1[i] = n1[i] + n1[pos];
            pos = i;
        }
    }
    cout << res;
}

int main()
{
   init();
   process();
}
