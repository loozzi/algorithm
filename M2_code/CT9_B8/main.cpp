#include <bits/stdc++.h>

using namespace std;

vector<int> a[1001];
bool mark[1001];
int n, m, u, v, k;

void init()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    mark[u] = true;
    while(!q.empty()){
        int top = q.front();
        q.pop();
        for(int i = 0; i < a[top].size(); i++){

        }
    }
}

void process()
{
    cin >> n >> m >> k;
    // clear vector
    for(int i = 1; i<=n; i++)
        a[i].clear();

    for(int i = 0; i < m ;i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 0; i <= n; i++)
        mark[i] = false;

    bfs(k);
    cout << endl;
}

int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
        process();
}
