#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("sdb.inp", "r", stdin);
    freopen("sdb.out", "w", stdout);
}

void process(){
    int n;
    cin >> n;
    long long a[n];
    map<long long, int> b;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
    }
    map<long long, int>::iterator ii;
    int res = 0;
    for(ii = b.begin(); ii != b.end(); ii++){
        if(ii->second == 1)
            res++;
    }
    cout << res << endl;
    for(int i = 0; i < n; i++){
        if(b[a[i]] == 1)
            cout << a[i] << endl;
    }

}

int main()
{
    init();
    process();
}
