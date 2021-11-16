#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("sumation.inp", "r", stdin);
    freopen("sumation.out", "w", stdout);
    int n, tmp;
    cin >> n;
    vector<int> a, b;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    float res = 0;
    while(a.size() != 1){
        b.clear();
        for(int i = 0; i < a.size()/2; i++){
            b.push_back(a[i*2] + a[i * 2 + 1]); // a[i] + a[a.size() - i - 1];
            res += (float)(a[i] + a[a.size() - i - 1]) * 5 / 100;
        }
        if(a.size() & 1)
            b.push_back(a[a.size() -1]); // a[a.size() /2);

        sort(b.begin(), b.end());
        for(int i = 0 ; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << endl;
        a.clear();
        a = b;
    }
    cout << res;
}
