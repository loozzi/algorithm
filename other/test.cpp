#include<bits/stdc++.h>
using namespace std;

struct dt{
	int a, w;
};

int n, m, w, u, v, s, t;
vector<dt> ke[5005];
bool mark[5005];
int f[5005], truoc[5005];

void dijkstra(int u, int v){
	memset(mark, false, sizeof(mark));
	for(int i = 0; i <= n; i++)
		f[i] = INT_MAX;
	f[u] = 0;
	int g;
	do{
        g = v;
		for(int i = 1; i <= n; i++)
			if(mark[i] == false && f[i] < f[g]) 
                g = i;
		if(g == v || f[g] == INT_MAX) break;
		mark[g] = true;
		for(int i = 0; i < ke[g].size(); i++){
			int k = ke[g][i].a;
			if(!mark[k] && f[k] > ke[g][i].w){
                f[k] = f[g] + ke[g][i].w;
                truoc[k] = g;
            }
		}
	} while(true);
}

void truyvet(int u, int v){
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

int main(){
	cin >> n >> m >> s >> t;
	for(int i = 0; i < m; i++){
		dt tmp;
		cin >> u >> v >> w;
		tmp.a = v;
		tmp.w = w;
		ke[u].push_back(tmp);
		tmp.a = u;
		ke[v].push_back(tmp);
	}

	dijkstra(s, t);
	cout << f[t];
	
}