#include <bits/stdc++.h>

using namespace std;

int n;
int a[5];

void doc(){
    freopen("TAXI.INP", "r", stdin);
    freopen("TAXI.OUT", "w", stdout);
}

void xuli(){
    cin >> n;

    memset(a, 0, sizeof(a));
    int inp_tmp, res = 0;

    for(int i = 0; i < n; i++){
        cin >> inp_tmp;
        a[inp_tmp]++;
    }

    res += a[4] + a[3] + a[2]/2;
    if(a[2]&1){
        a[1]-=2;
        res++;
    }
    a[1] -= a[3];
    if(a[1] > 0)
        res += (a[1]-1)/4 + 1;

    cout << res;
}

int main()
{
    doc();
    xuli();
}
