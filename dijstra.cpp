#include<bits/stdc++.h>

using namespace std;

struct dt{
    int v, w;
};

int n, m, u, v, w;
vector<dt> ke[5005];
bool mark[5005];
int truoc[5005];
int f[5005];


void dijkstra(int u, int v){
    for(int i = 0; i <= n; i++)
        f[i] = INT_MAX;
    f[u] = 0;
    memset(mark, false, sizeof(mark));
    truoc[u] = -1;
    int g;
    do{
        g = v;
        for(int i = 1; i <= n; i++){
            if(f[i] < f[g] && !mark[i])
                g = i;
        }
        mark[g] = true;
        if(g == v || f[g] == INT_MAX)
            break;

        for(int i = 0; i < ke[g].size(); i++){
            int k = ke[g][i].v;
            if(!mark[k] && f[k] > f[g] + ke[g][i].w){
                f[k] = f[g] + ke[g][i].w;
                truoc[k] = g;
            }
        }
    } while(true);
}

void trace(int u, int v){
    if(mark[v] = false)
        cout << "-1";
    else {
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
}

int main(){
    cin >> n >> m;
    for(int i  = 0; i < m; i++){
        cin >> u >> v >> w;
        dt tmp;
        tmp.v = v;
        tmp.w = w;
        ke[u].push_back(tmp);
        tmp.v = u;
        ke[v].push_back(tmp);
    }

    cin >> u >> v;
    dijkstra(u, v);
    cout << f[v] << endl;
    trace(u, v);
}
