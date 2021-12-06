#include <bits/stdc++.h>

using namespace std;

vector<bool> mark(1001, false);
vector<int> matrix[1001];
int n, m, u, v;

void doc()
{
    freopen("matrix.inp", "r", stdin);
    freopen("matrix.out", "w", stdout);

}
void bfs(int u)
{
    int tmp;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        tmp = q.front();
        q.pop();
        mark[tmp] = true;
        for(int i = 0; i < matrix[tmp].size(); i++){
            if(!mark[matrix[tmp][i]])
                q.push(matrix[tmp][i]);
        }
    }
}

void dfs(int u){
    mark[u] = true;
    for(int j = 0; j < matrix[u].size(); j++)
        if(!mark[matrix[u][j]])
            dfs(matrix[u][j]);
}


void dem_tp_lien_thong(int n){
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(!mark[i]){
            dem++;
            dfs(i);
//            bfs(i);
        }
    }
    cout << dem;
}


void xuli()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> u >> v;
        matrix[u].push_back(v);
        matrix[v].push_back(u);
    }

    dem_tp_lien_thong(n);
}

int main()
{
    doc();
    xuli();
}
