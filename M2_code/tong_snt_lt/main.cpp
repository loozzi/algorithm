#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool a[n+1];
    memset(a, true, sizeof(bool) * (n+1));
    for(int i = 2; i <= sqrt(n); i++){
        for(int j = i*i; j <= n; j+=i){
            a[j] = false;
        }
    }
    int t = 0;
    vector<int> res;
//    for(int i = 2; i < n; i++){
//        if(a[i]){
//            res.push_back(i);
//            t += i;
//        }
//        if(t >= n) break;
//    }
//    if(t==n){
//        for(int i = 0; i < res.size() - 1; i++){
//            cout << res[i] << " + ";
//        }
//        cout << res[res.size() - 1];
//    }
//    else {
//        cout << -1;
//    }


}
