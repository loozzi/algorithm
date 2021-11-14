#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("sdb.inp", "r", stdin);
    freopen("sdb.out", "w", stdout);
}

struct dt{
    long long vl, id;
    bool c;
};

bool cmp1(dt a, dt b){
    return a.vl < b.vl;
}

bool cmp2(dt a, dt b){
    return a.id < b.id;
}

void process(){
    int n, tmp;
    cin >> n;
    vector<dt> a;
    for(int i = 0 ; i < n; i++){
        cin >> tmp;
        dt tmp1;
        tmp1.id = i;
        tmp1.vl = tmp;
        tmp1.c = true;
        a.push_back(tmp1);
    }
    sort(a.begin(), a.end(), cmp1);
    for(int i = 0; i < a.size() - 1; i++){
        if(a[i].vl == a[i+1].vl){
            a[i].c = a[i+1].c = false;
        }
    }
    sort(a.begin(), a.end(), cmp2);
    vector<int> res;
    for(int i = 0; i < a.size(); i++){
        if(a[i].c)
            res.push_back(a[i].vl);
    }
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << endl;
    }

}

int main()
{
    init();
    process();
}
