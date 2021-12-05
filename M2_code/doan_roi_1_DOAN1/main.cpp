#include <bits/stdc++.h>

using namespace std;

struct doan{
    int a, b, stt;
};

bool compare(doan a, doan b){
    return (a.b < b.b);
}

int main()
{
    freopen("DOAN1.INP", "r", stdin);
    freopen("DOAN1.OUT", "w", stdout);
    int n;
    vector<int> res;
    cin >> n;
    doan d[n];
    for(int i = 0; i < n; i++){
        cin >> d[i].a >> d[i].b;
        d[i].stt = i+1;
    }

    sort(d, d+n, compare);
    res.push_back(d[0].stt);
    int k = 0;
    for(int i = 1; i < n; i++){
        if(d[i].a > d[k].b){
            res.push_back(d[i].stt);
            k = i;
        }
    }
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << endl;
}
