#include <bits/stdc++.h>
using namespace std;

const long long DU = 1e9 + 7;

void init(){
    freopen("delete.inp", "r", stdin);
    freopen("delete.out", "w", stdout);
}



int demSoLuong(int n){
    int res = 1;
    for(int i = 0; i < n; i++){
        res *= 2;
        res %= DU;
    }

    return res;
}

void process(){
    int n;
    cin >> n;
    int a[n+5], c[n+5];
    vector<int> viTri, viTri2;
    memset(c, 0, sizeof(c));
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] == 2){
            c[i] = c[i-1]+1;
            if(a[i-1] == 1)
                viTri2.push_back(i-1);
        }
        else
            c[i] = c[i-1];
        if(a[i] == 3)
            viTri.push_back(i);

    }
    int res = 0;
    for(int i = viTri.size() - 1; i >= 0; i--){
        for(int j = 0; j < viTri2.size(); j++){
            if(viTri2[j] < viTri[i])
                res += demSoLuong(c[viTri[i]] - c[viTri2[j]+1] + 1);
            res %= DU;
        }
    }
    cout << res;
}

int main()
{
   init();
   process();
}
