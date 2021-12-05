#include <bits/stdc++.h>
#define INT_MAX 1e9 + 7

using namespace std;

int n, m, u, v, a, b, c, w;
int d[101][101], path[101][101];


void init(){
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
}

void trace(int u, int v){
    if(d[u][v] == INT_MAX){
        cout << -1;
    } else {
            cout << u << " ";
        while(u != v){
            cout << path[u][v] << " ";
            u = path[u][v];
        }
    }
}

void floyd(){
    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1;j <= n; j++)
                if(d[i][j] > d[i][k] + d[k][j]){
                    d[i][j] = d[i][k] + d[k][j];
                    path[i][j] = path[i][k];
                }

}

void process(){
    cin >> n >> m >> a >> b >> c;

    for(int i = 0; i < 101; i++){
        for(int j = 0; j < 101; j++){
            d[i][j] = INT_MAX;
            path[i][j] = j;
        }
    }

    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;
        d[u][v] = d[v][u] = w;
    }
    floyd();
    cout << d[a][b] + d[b][c] << endl;
    trace(b, c);
}

int main()
{
    init();
    process();
}
