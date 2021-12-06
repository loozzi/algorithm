#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("GHH.INP", "r", stdin);
    freopen("GHH.OUT", "w", stdout);
}

bool checkShh(int n){
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i + n/i;
        }
    }
    int k = sqrt(n);
    if(k * k == n){
        sum -= k;
    }
    return (n <= sum);
}

void process(){
    int n;
    cin >> n;
    int m;
    vector<int> res;
    for(int i = 0; i < n; i++){
        cin >> m;
        if(checkShh(m))
            res.push_back(m);
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
