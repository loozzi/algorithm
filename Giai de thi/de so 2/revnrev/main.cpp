#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("revnrev.inp", "r", stdin);
    freopen("revnrev.out", "w", stdout);
}

vector<int> b;

bool compare(vector<int> a){
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

void process(){
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for(int i = 1; i <= n; i++){
        a.push_back(i);
        b.push_back(i);
    }
    int u, v, m, l, kk;
    cin >> u >> v >> m >> l;
    for(int i = 0; i < k; i++){
        reverse(a.begin() + u-1, a.begin() + v);
        reverse(a.begin() + m-1, a.begin() + l);
        if(compare(a)==true){
            kk = i;
            break;
        }
    }
    k %= kk + 1;
    a=b;
    for(int i = 0; i < k; i++){
        reverse(a.begin() + u-1, a.begin() + v);
        reverse(a.begin() + m-1, a.begin() + l);
    }
    for(int i  = 0; i < a.size(); i++)\
        cout << a[i] << endl;
}

int main()
{
    init();
    process();
}
