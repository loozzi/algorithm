#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TAXI158B.INP", "r", stdin);
    freopen("TAXI158B.OUT","w", stdout);
    int res = 0, n, tmp;
    cin >> n;
    int a[5];
    for(int i = 1; i < 5; i++)
        a[i] = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        a[tmp]++;
    }

    res += a[4];
    if(a[3] >= a[1]){
        res += a[3];
        a[1] = 0;
    }
    else{
        res += a[3];
        a[1] -= a[3];
    }
    if(a[2]>=2*a[1]){
        if(a[1]&1){
            a[2] -= (a[1]/2 + 1);
            res += (a[1]/2 + 1);
        }
        else {
            a[2] -= a[1]/2;
            res += a[1]/2;
        }
        res += a[2]/2;
        if(a[2]&1){
            res += 1;
        }
    } else{
        res += a[2]*2;
        a[1] -= 2*a[2];
        res += a[1]/4;
        if(a[1]%4 !=0) res += 1;
    }
    cout << res;

}
