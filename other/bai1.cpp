#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n ; i++){
            cin >> a[i];
        }
        long long res = 0;
        long long dp[n+1];
        for(int i = 0; i < n; i++){
            dp[i] = a[i];
            for(int j = 0; j < i; j++){
                if(a[i] > a[j])
                    dp[i] = max(dp[i], dp[j] + a[i]);
            }
            res = max(res, dp[i]);
        }
        cout << res << endl;
    }
}
