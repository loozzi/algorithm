#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("sumation.inp", "r", stdin);
    freopen("sumation.out", "w", stdout);
    int n, tmp;
    cin >> n;
    priority_queue<int, vector<int>, greater<int> > q;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        q.push(tmp);
    }
    float res = 0;
    while(q.size() > 1){
        int a = q.top();
        q.pop();
        a += q.top();
        q.pop();
        res += a * 0.05;
        q.push(a);
    }
    cout << setprecision(2) << fixed << res;
}