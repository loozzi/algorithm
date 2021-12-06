#include <bits/stdc++.h>

using namespace std;

vector<int> mark(1001, 0);
vector<int> matrix[1001];

void doc()
{
    freopen("matrix.inp", "r", stdin);
    freopen("matrix.out", "w", stdout);
}

void dfs(int u)
{
    mark[u] = 1;
    cout << u << " ";
    for(int i = 0; i < matrix[u].size(); i++)
    {
        if(mark[matrix[u][i]] == 0)
        {
            dfs(matrix[u][i]);
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

    dfs(2);
}

int main()
{
    doc();
    xuli();
}
