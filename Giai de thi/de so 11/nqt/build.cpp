#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("build.inp", "r", stdin);
    freopen("build.out", "w", stdout);

    vector<unsigned long long> a;
    a.push_back(1);
    a.push_back(2);
    int t, n;
    cin >> t;
    long long i = 2;
    while(t--){
        cin >> n;
        while(a.size() <= n){
            a.push_back(a[i-1] + a[i-2]);
            i++;
        }
        cout << a[n-1] << endl;
    }
}
