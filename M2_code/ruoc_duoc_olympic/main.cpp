#include <bits/stdc++.h>
// https://vn.spoj.com/problems/TORCH/
using namespace std;

struct toa_do{
    int x, y;
    bool c;
};

int main()
{
    int n;
    cin >> n;
    toa_do a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i].x >> a[i].y;
        a[i].c = false;
    }
    toa_do ht = a[0];

    a[0].c = true;
    float kc, m;
    vector<int> tt;
    tt.push_back(1);
    for(int i = 0; i < n; i++)
    {
        float b[n];
        m = 100000001;
        for(int i = 1; i < n; i++){
            if(a[i].c == false){
                kc = sqrt(pow(a[i].x - ht.x, 2) + pow(a[i].y - ht.y, 2));
                b[i] = kc;
                kc = min(kc, m);
            } else b[i] = 0;
        }
        for(int i = 0; i < n; i++){
            if(b[i] == m){
                ht = a[i];
                a[i].c = true;
                tt.push_back(i);
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << tt[i] << " ";
}
