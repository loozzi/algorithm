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

void dfs(int u){
    mark[u] = true;
    cout << u << " ";
    for(int i = 0; i < a[u].size(); i++){
        if(!mark[a[u][i]])
            dfs(a[u][i]);
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
    }
    for(int i = 0; i <= n; i++)
        mark[i] = false;

    dfs(k);
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
