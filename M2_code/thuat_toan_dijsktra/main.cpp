#include <bits/stdc++.h>
#define VOCUNG 999999

using namespace std;

vector<int> ke[3001];
bool mark[3001];
int d[3001][3001];
int n, m, u, v, w, k;
int truoc[3001];
int f[3001];

void init(){
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
}

void dijkstra(int u, int v){
    int g;
    do{
        g = v;
        for(int i = 1; i <= n; i++){
            if(f[i] < f[g] && !mark[i]){
                g = i;
            }
        }
        mark[g] = true;
        if(f[g] == INT_MAX || g == v)
            break;

        for(int i = 0; i < ke[g].size(); i++){
            int k = ke[g][i];
            if(!mark[k]){
                if(f[k] > f[g] + d[g][k]){
                    f[k] = f[g] + d[g][k];
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
    cout << st.size() << " ";
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}

void process(){
    cin >> n >> m >> k;
    for(int i = 0; i < 3001; i++){
        f[i] = VOCUNG;
        for(int j = 0; j < 3001; j++){
            d[i][j] = VOCUNG;
        }
    }
    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;
        ke[u].push_back(v);
        ke[v].push_back(u);
        d[u][v] = w;
    }


    for(int i = 0; i < k; i++){
        for(int j = 0; j < 3001; j++)
            f[j] = VOCUNG;
        memset(mark, false, sizeof(mark));
        cin >> w >> u >> v;
        f[u] = 0;
        if(w == 0){
            dijkstra(u, v);
            cout<< f[v];
        } else {
            dijkstra(u, v);\
            trace(u, v);
        }
        cout << endl;
    }

}

int main()
{
    init();
    process();
}
