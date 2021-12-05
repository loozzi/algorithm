#include <bits/stdc++.h>

using namespace std;


void init(){
    freopen("snt.inp", "r", stdin);
    freopen("snt.out", "w", stdout);
}

void process(){
    int n;
    cin >> n;
    int kt = n/2;
    bool snt[kt+1];
    memset(snt, true, sizeof(snt));
    for(int i = 2; i <= sqrt(kt); i++){
        for(int j = i * i; j <= kt; j+=i){
            snt[j] = false;
        }
    }
    snt[0] = snt[1] = false;

    vector<int> ds_snt;
    for(int i = 0; i <= kt; i++){
        if(snt[i])
            ds_snt.push_back(i);
    }
    int sum;
    vector<int> res;
    for(int i = ds_snt.size() - 1; i >= 3; i++){
        sum = 0;
        for(int j = 0; j < 4; j++){
            sum += ds_snt[i - j];
            res.push_back(ds_snt[i-j]);
        }
        if(sum == n)
            break;
        if(sum != n){
            res.clear();
            if(sum < n)
                break;
        }
    }
    if(res.empty()){
        cout << 0;
    } else {
        for(int i = res.size() - 1; i >= 0; i--){
            cout << res[i] << " ";
        }
    }
}

int main()
{
    init();
    process();
}
