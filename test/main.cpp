#include <bits/stdc++.h>

using namespace std;


void init(){
    freopen("snt.inp", "r", stdin);
    freopen("snt.out", "w", stdout);
}

void process(){
    int n;
    cin >> n;
    int kt = n/2 + 2;
    bool snt[kt+1];
    memset(snt, true, sizeof(snt));
    for(int i = 2; i <= sqrt(kt); i++){
        for(int j = i * i; j <= kt; j+=i){
            snt[j] = false;
        }
    }
    snt[0] = snt[1] = false;
    int k = n / 4;
    vector<int> tmp;
    int dem = 0;
    for(int i = k; i >= 0 && dem <= 3; i--){
        if(snt[i]){
            tmp.push_back(i);
            dem++;
        }
    }
    dem = 0;
    for(int i = k+1; i <= kt && dem <= 3; i++){
        if(snt[i]){
            tmp.push_back(i);
            dem++;
        }
    }
    sort(tmp.begin(), tmp.end());
    int sum;
    bool check = false;
    for(int i = 0; i < tmp.size() - 3; i++){
        sum = tmp[i] + tmp[i+1] + tmp[i+2] + tmp[i+3];
        if(sum == n){
            cout << tmp[i] << " " << tmp[i+1] << " " << tmp[i+2] << " " << tmp[i+3];
            check = true;
        }
    }
    if(!check)
        cout << 0;
}

int main()
{
    //init();
    process();
}
