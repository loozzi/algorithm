#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("trochoi.inp", "r", stdin);
    freopen("trochoi.out", "w", stdout);
}

struct dt{
    string s;
    int vl;
};

int convert(string s){
    int res = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9')
            res++;
    }
    return res;
}

bool cmp(dt a, dt b)
{
    return a.vl < b.vl;
}

void process(){
    int n;
    cin >> n;
    vector<dt> a;
    for(int i = 0; i < n; i++){
        dt tmp;
        cin >> tmp.s;
        tmp.vl = convert(tmp.s);
        a.push_back(tmp);
    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0; i < a.size(); i++){
        cout << a[i].s << endl;
    }
}

int main()
{
    init();
    process();
}
