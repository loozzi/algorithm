#include <bits/stdc++.h>

using namespace std;

vector<int> a[3001], b;
bool mark[3001];
int n, m, u, v, res = 0, d;

void init(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        d++;
        mark[top] = true;
        for(int i = 0; i < a[top].size(); i++){
            if(!mark[a[top][i]])
                q.push(a[top][i]);
        }
    }
}

void tplt(){
    for(int i = 1; i <= n; i++){
        if(!mark[i]){
            d = 0;
            bfs(i);
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
