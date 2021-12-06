#include <bits/stdc++.h>

using namespace std;

vector<int> a[3001];
bool mark[3001];
int n, m, u, v;

void init(){
freopen("input.inp", "r", stdin);
freopen("output.out", "w", stdout);
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        mark[top] = true;
        for(int i = 0 ; i < a[top].size(); i++){
            if(!mark[a[top][i]])
                q.push(a[top][i]);
        }
    }
}

int tplt(){
    int res = 0;
    for(int i = 1; i <= n; i++){
        if(!mark[i]){
            BFS(i);
            res++;
        }
    }
    return res;
}

void process(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    cout << tplt();
}

int main()
{
    init();
    process();
}
