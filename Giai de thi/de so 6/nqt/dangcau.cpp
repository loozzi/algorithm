#include<bits/stdc++.h>

using namespace std;

vector<int> getNum(int x){
    vector<int> res;
    while(x){
        res.push_back(x % 10);
        x /= 10;
    }
    return res;
}

bool check(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        for(int j = i+1; j < a.size(); j++){
            if((a[j] == a[i] && b[j] !=b[i]) || (a[i] != a[j] && b[i] == b[j]))
                return false;
        }
    }
    return true;
}


int dc(int m){
    vector<int> a;
    a = getNum(m);
    for(int i = 10; i < m; i++){
        vector<int> b;
        b = getNum(i);
        if(check(a, b))
            return i;
    }
    return m;
}



int main(){
    freopen("dangcau.inp", "r", stdin);
    freopen("dangcau.out", "w", stdout);

    int n;
    cin >> n;
    if(n > 9){
        int res = 9;
        for(int i = 10; i <= n; i++)
            res += dc(i);

        cout << res;
    } else cout <<  n;
}