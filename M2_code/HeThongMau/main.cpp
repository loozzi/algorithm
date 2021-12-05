#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DEM.INP", "r", stdin);
    freopen("DEM.OUT", "w", stdout);
    int n, k;
    bool a[1000001];
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int res = 0;
        memset(a, true, sizeof(a));

        for(int i = 1; i <= k; i++){
            for(int j = 1;j <= n; j++){
                if(j%(i+1)==0)
                    a[j] = !a[j];
            }
        }
        for(int i = 1; i <= n; i++)
            if(a[i] == false) res++;

        cout << res << endl;
    }
}
