#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TWINS.INP", "r", stdin);
    freopen("TWINS.OUT", "w", stdout);
    int n, k, res=0;
    cin >> n >> k;
    int sl = n + 1;
    bool a[sl];
    memset(a, true, sizeof(a));
    for(int i = 2; i <= sqrt(sl); i++){
        if(a[i] == true){
            for(int j = i*2; j<=sl; j+=i){
                a[j] = false;
            }
        }
    }
    a[0] = a[1] = false;
    for(int i = 2; i <= n-k; i++){
        if(a[i] == true && a[i+k] == true){
            i = i+k-1;
            res++;
        }
    }
    cout << res;
}
