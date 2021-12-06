#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("sdb.inp", "r", stdin);
    freopen("sdb.out", "w", stdout);
}

void process(){
    multiset<long long> m;
    long long n, t;
    cin >> n;
    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        m.insert(a[i]);
    }
    vector<long long> d;
    for(int i  = 0; i < n; i++){
        if(m.count(a[i]) == 1){
            d.push_back(a[i]);
        }
    }
    cout << d.size() << endl;
    for(int i = 0; i < d.size(); i++)
        cout << d[i] << endl;

}

int main()
{
    init();
    process();
}
