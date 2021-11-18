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
    queue<float> q;
    for(int i = 0; i < a.size(); i++){
        q.push(a[i]);
    }
    while(q.size() > 1){
        float a = q.front();
        q.pop();
        a += q.front();
        q.pop();
        q.push(a);
        res += a * 0.05;
    }
    cout << res;
}
