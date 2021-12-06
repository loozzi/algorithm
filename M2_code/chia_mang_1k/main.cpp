#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHIAMANG1K.INP", "r", stdin);
    freopen("CHIAMANG1K.OUT", "w", stdout);
    int n, k, sum = 0, tmp = 0, res = 0;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum%(k+1)!=0)
        cout << "0";
    else{
        while(tmp < sum/(k+1)){
            tmp += a[res++];
        }
        cout << res;
    }
}
