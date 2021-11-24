#include <bits/stdc++.h>

using namespace std;

int n, m, u, v, w, s, e;
vector<pair<int, int> > ke[3001];
bool mark[3001];
int f[3001], truoc[3001];
int a[3001][3001];

void init(){
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
}

struct cmp{
    bool operator()(pair<int, int> a, pair<int, int> b){
        return a.second  > b.second;
    }
};

void dij(int u, int v){
    priority_queue<pair<int, int>, vector<pair<int, int> >, cmp > Q;
    Q.push({u, f[u]});
    int g;
    while(!Q.empty()){
        g = Q.top().first;
        Q.pop();
        if(f[g] == INT_MAX || g == v)
            break;

        for(int i = 0; i < ke[g].size(); i++){
            int k = ke[g][i].first;
            if(f[k] > f[g] + ke[g][i].second){
                f[k] = f[g] + ke[g][i].second;
                truoc[k] = g;
                Q.push({k, f[k]});
            }
        }
    }

}

void dijkstra(int u, int v){
    int g;
    for(int i = 0; i < 3001; i++)
        f[i] = INT_MAX;
    f[u] = 0;
    do{
        g = v;
        for(int i = 1 ;i <= n; i++){
            if(!mark[i] && f[i] < f[g])
                g = i;
        }
        mark[g] = true;
        if(f[g] == INT_MAX || g == v) break;
        for(int i = 0; i < ke[g].size(); i++){
            int k = ke[g][i].first;
            if(!mark[k]){
                if(f[k] > f[g] + ke[g][i].second){
                    f[k] = f[g] + ke[g][i].second;
                    truoc[k] = g;
                }
            }
        }
    } while(true);
}

void trace(int u, int v){
    if(f[v] == INT_MAX){
        cout << "-1";
        return;
    }
    stack<int> st;
    while(u!=v){
        st.push(v);
        v = truoc[v];
    }
    st.push(u);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}

void process(){
    cin >> n >> m >> s >> e;
    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;
        ke[u].push_back({v, w});
        ke[v].push_back({u, w});
//        a[u][v] = w;
//        a[v][u] = w;
    }
    dij(s, e);
    cout << f[e] << endl;
    trace(s, e);
}

int main()
{
    init();
    process();
}
