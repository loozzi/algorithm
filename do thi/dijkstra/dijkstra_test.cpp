#include<bits/stdc++.h>
using namespace std;

struct dt{
	int a, b;

};
int n, m, u, v, w;
vector<dt> ke[3001];
bool mark[3001];
int f[3001];
int truoc[3001];

void dijkstra(int u, int v){
	memset(mark, false, sizeof(mark));
	for(int i = 0; i <= n; i++){
		f[i] = INT_MAX;
	}
	f[u] = 0;
	int g;
	do{
		g = v;
		for(int i = 1; i <= n; i++){
			if(f[g] > f[i] && mark[i]==false)
				g = i;
		}
		mark[g] = true;
		if(g==v || f[g] == INT_MAX)
			break;
		for(int i = 0; i < ke[g].size(); i++){
			int k = ke[g][i].a;
			if(!mark[k] && f[k] > f[g] + ke[g][i].b){
				f[k] = f[g] + ke[g][i].b;
				truoc[k] = g;
			}
		}

	} while(true);
}


int main(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> u >> v >> w;
		dt tmp;
		tmp.a = v;
		tmp.b = w;
		ke[u].push_back(tmp);
		tmp.a = u;
		ke[v].push_back(tmp);
	}
	cin >> u >> v;
	dijkstra(u, v);
	cout << f[v];
}
