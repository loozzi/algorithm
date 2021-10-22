#include <bits/stdc++.h>
using namespace std;

const long long DU = 1e9 + 7;

void init(){
    freopen("delete.inp", "r", stdin);
    freopen("delete.out", "w", stdout);
}

int C(int k, int n){
    if(n == k || n == 1 || k == 0)
        return 1;
    if(k == 1)
        return n;
    return C(k-1, n-1) + C(k, n-1);
}

void process(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int res = 0;
    for(int i = 0; i < n-2; i++){
        if(a[i] == 1 && a[i+1] == 2){
            for(int j = i + 2; j < n; j++){
                if(a[j] == 3){
                    int kc = j - i - 2;
                    for(int k = 0; k <= kc; k++){
                        res += C(k, kc);
                        res %= DU;
                    }
//                    cout << kc << " ";
                }
            }
        }
    }
    cout << res;
}

int main()
{
   init();
   process();
}
