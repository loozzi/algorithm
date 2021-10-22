#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("div3.inp", "r", stdin);
    freopen("div3.out", "w", stdout);
}

int C(int k, int n){
    if(n == k || n==1)
        return 1;
    if(k == 1)
        return n;

    return C(k-1, n-1) + C(k, n-1);
}

void process(){
    int n, tmp;
    cin >> n;
    int a[3];
    memset(a, 0, sizeof(a));
    for(int i=0; i < n; i++){
        cin >> tmp;
        a[tmp%3]++;
    }
    int res = a[1] * a[2];
    if(a[0] < 2)
        res += a[0];
    else
        res += C(2, a[0]);
    cout << res;
}

int main()
{
    init();
    process();
}
