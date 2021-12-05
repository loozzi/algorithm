#include <bits/stdc++.h>

using namespace std;

vector<int> a[3001];
bool mark[3001];
int n, m, u, v, d, res = 0;

void init(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

bool snt(int n){
    if(n == 2) return true;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return n >= 2;
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        mark[top] = true;
        d += top;
        for(int i = 0; i < a[top].size(); i++){
            if(!mark[a[top][i]]){
                q.push(a[top][i]);
            }
        }
    }
}

void tplt(){
    for(int i = 1; i <= n; i++){
        if(!mark[i]){
            d = 0;
            BFS(i);
            if(snt(d))
                res = max(res, d);
        }
    }
}

void process(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    tplt();

    cout << res;
}

int main()
{
    init();
    process();
}
