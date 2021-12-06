#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("trochoi.inp", "r", stdin);
    freopen("trochoi.out", "w", stdout);
}



bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second;
}

int dem(string s){
    int res;
    for(int i = 0; i < s.length(); i++){
        if(s[i] <= '9' && s[i] >= '0'){
            res++;
        }
    }
    return res;
}

void process(){
    int n;
    cin >> n;
    vector<pair<string, int> > a;
    for(int i = 0; i < n; i++){
        pair<string, int> tmp;
        cin >> tmp.first;
        tmp.second = dem(tmp.first);
        a.push_back(tmp);
    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0; i < a.size(); i++)
        cout << a[i].first << endl;
}

int main()
{
    init();
    process();
}
