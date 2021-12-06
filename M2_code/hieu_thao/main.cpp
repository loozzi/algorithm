#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int> > ke[20001];
int n, m, u, v, w, a, b, c;
int f[20001];


void init(){
    freopen("HIEUTHAO.INP", "r", stdin);
    freopen("HIEUTHAO.OUT", "w", stdout);
}

void dijkstra(int u, int v){
    for(int i = 0; i <= n; i++)
        f[i] = INT_MAX;
    f[u] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > Q;
    Q.push({f[u], u});
    int g;
    while(!Q.empty()){
        g = Q.top().second;
        Q.pop();
        if(f[g]  == INT_MAX || g == v)
            break;

        for(int i = 0;i < ke[g].size(); i++){
            int k = ke[g][i].first;
            if(f[k] > f[g] + ke[g][i].second){
                f[k] = f[g] + ke[g][i].second;
                Q.push({f[k], k});
            }
        }
    }
}

void process(){
    for(int i = 0; i < 20001; i++)
        f[i] = INT_MAX;
    cin >> n >> m >> a >> b >> c;
    for(int i = 0 ; i < m; i++){
        cin >> u >> v >> w;
        ke[u].push_back({v, w});
        ke[v].push_back({u, w});
    }
    int res = 0;

    dijkstra(a, b);
    res += f[b];

    dijkstra(b, c);
    res += f[c];


    cout << res;
}

int main()
{
    init();
    process();
}
