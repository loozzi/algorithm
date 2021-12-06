#include <bits/stdc++.h>

using namespace std;

struct data_{
    int a, b, id;
};

bool compare(data_ a, data_ b){
    return (a.b-a.a) < (b.a - b.b);
}

int main()
{
////    freopen("HOP.INP", "r", stdin);
////    freopen("HOP.OUT", "w", stdout);
//    int n;
//    cin >> n;
//    data_ dt[n];
//    for(int i = 0; i < n; i++)
//    {
//        cin >> dt[i].a;
//    }
//
//    for(int i = 0; i < n; i++)
//        cin >> dt[i].b;
//    sort(dt, dt+n, compare);
//    vector<data_> res;
//    res.push_back(dt[0]);
//    for(int i = 1; i < n; i++){
//        if(dt[i].a >= dt[i-1].b)
//            res.push_back(dt[i]);
//    }
//
//    cout << res.size() << endl;
//    for(int i = 0 ; i < res.size(); i++){
//        cout << res[i].a+1 << " ";
//    }
}
