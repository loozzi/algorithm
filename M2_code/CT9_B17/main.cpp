#include <bits/stdc++.h>

using namespace std;

vector<int> a[1001];
bool mark[1001];

void init(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void DFS(int u){
    mark[u] = true;
    for(int i = 0; i < a[u].size(); i++)
        if(!mark[a[u][i]])
            DFS(a[u][i]);
}

void process(){
    memset(mark, false, sizeof(mark));
    int n, m, u, v;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    DFS(1);
    bool check = true;
    for(int i = 1; i <= n; i++)
        check *= mark[i];
    if(check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    for(int i = 0; i <= n; i++)
        a[i].clear();
}

int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
        process();
}
