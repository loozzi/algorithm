#include <bits/stdc++.h>

using namespace std;

vector<bool> mark(1001, false);
vector<int> matrix[1001];

void doc()
{
    freopen("matrix.inp", "r", stdin);
    freopen("matrix.out", "w", stdout);
}

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    mark[u] = true;
//    cout << u << " ";
    while(!q.empty()){
        int k = q.front();
        q.pop();
        for(int i = 0; i < matrix[k].size(); i++){
            if(mark[matrix[k][i]] == 0){
                q.push(matrix[k][i]);
                mark[matrix[k][i]] = true;
//                cout << matrix[k][i] << " ";
            }
        }
    }
}

void xuli()
{
    int n, m, u, v;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> u >> v;
        matrix[u].push_back(v);
        matrix[v].push_back(u);
    }

    bfs(1);
    for(int i = 1; i <= n; i++){
        if(mark[i]==true)
            cout << i << " ";
    }
}

int main()
{
    doc();
    xuli();
}
