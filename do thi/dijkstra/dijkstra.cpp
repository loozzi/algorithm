#include <bits/stdc++.h>

using namespace std;

int n, m, u, v, w, s, e;
vector<int> ke[3001];
bool mark[3001];
int f[3001], truoc[3001];
int a[3001][3001];

void init(){
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
}



void dijkstra(int u, int v){
    int g = u;
    do{
        g = e;
        for(int i = 1 ;i <= n; i++){
            if(!mark[i] && f[i] < f[g])
                g = i;
        }
        mark[g] = true;
        if(f[g] == INT_MAX || g == e) break;
        for(int i = 0; i < ke[g].size(); i++){
            int k = ke[g][i];
            if(!mark[k]){
                if(f[k] > f[g] + a[g][k]){
                    f[k] = f[g] + a[g][k];
                    truoc[k] = g;
                }
            }
        }
    } while(true);
}

void trace(int u, int v){
    if(!mark[v]){
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
    for(int i = 0; i < 3001; i++)
        f[i] = INT_MAX;
    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;
        ke[u].push_back(v);
        ke[v].push_back(u);
        a[u][v] = w;
        a[v][u] = w;
    }
    f[s] = 0;
    dijkstra(s, e);
    cout << f[e] << endl;
    trace(s, e);
}

int main()
{
    init();
    process();
}
