#include <bits/stdc++.h>

using namespace std;

struct dt{
    int a, d;
};

int n, m, u, v, w;
vector<dt> ke[1001];
bool mark[1001];
int f[1001];
int trace[1001];


void dijkstra(int s, int e){
    trace[s] = -1;
    for(int i = 0; i <= n; i++)
        f[i] = INT_MAX;
    f[s] = 0;
    memset(mark, false, sizeof(mark));

    int g;
    do{
        g = e;
        for(int i = 1; i <= n; i++){
            if(!mark[i] && f[i] < f[g])
                g = i;
        }
        mark[g] = true;
        if(g==e || f[g] == INT_MAX)
            break;
        for(int i = 0; i < ke[g].size(); i++){
            int k = ke[g][i].a;
            if(!mark[k]){
                if(f[k] > f[g] + ke[g][i].d){
                    f[k] = f[g] + ke[g][i].d;
                    trace[k] = g;
                }
            }
        }

    } while(true);
}

void truy_vet(int u, int v){
    if(f[v] == INT_MAX)
        cout << -1;
    else{
        cout << f[v] << endl;
        stack<int> st;
        while(u!=v){
            st.push(v);
            v = trace[v];
        }
        st.push(u);
        cout << st.size() << " ";
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
    }


}

int main()
{
    freopen("bai4.inp", "r", stdin);
    freopen("bai4.out", "w", stdout);

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;
        dt tmp;
        tmp.a = v;
        tmp.d = w;
        ke[u].push_back(tmp);
        tmp.a = u;
        ke[v].push_back(tmp);
    }

    cin >> u >> v;
    dijkstra(u, v);

    truy_vet(u, v);
}
