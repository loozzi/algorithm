#include <bits/stdc++.h>

using namespace std;

struct D{
    int a, b;
};

int n, m, u, v, w, t;
vector<D> ke[1001];
bool mark[1001];
int truoc[1001], f[1001];

void init(){
    freopen("LT.INP", "r", stdin);
    freopen("LT.OUT", "w", stdout);
}

//void dijkstra(int u, int v){
//    int g;
//    for(int i = 1; i <= n; i++)
//        f[i] = INT_MAX;
//    f[u] = 0;
//    do {
//        g = v;
//        for(int i = 1; i <= n; i++){
//            if(!mark[i] && f[i] < f[g]){
//                g = i;
//            }
//        }
//        mark[g] = true;
//        if(g == v || f[g] == INT_MAX)
//            break;
//        for(int i = 0; i < ke[g].size(); i++){
//            int k = ke[g][i].a;
//            if(!mark[k])
//                if(f[k] > f[g] + ke[g][i].b){
//                    f[k] = f[g] + ke[g][i].b;
//                    truoc[k] = g;
//                }
//        }
//
//    } while(true);
//}
//
//void trace(int u, int v){
//    stack<int> st;
//    while(u != v){
//        st.push(v);
//        v = truoc[v];
//    }
//    st.push(u);
//    while(!st.empty()){
//        cout << st.top() << " ";
//        st.pop();
//    }
//}

void dijkstra(int u, int v){
	int g = v;
	for(int i = 1; i <= n; i++){
		f[i] = INT_MAX;
	}
	f[u] = 0;
	memset(mark, false, sizeof(mark));
	do{
		g = v;
		for(int i = 1; i <= n; i++){
			if(!mark[i] && f[i] < f[g])
				g = i;
		}
		mark[g] = true;
		if(g == v || f[g] == INT_MAX)
			break;

		for(int i = 0; i < ke[g].size(); i++){
			int k = ke[g][i].a;
			if(!mark[k])
			if(f[k] > f[g] + ke[g][i].b){
				f[k] = f[g] + ke[g][i].b;
				truoc[k] = g;
			}
		}
	} while(true);
}

void trace(int u, int v){
	stack<int> st;
	while(u!=v){
		st.push(v);
		v = truoc[v];
	}
	st.push(u);
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}
}


void bfs(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int g = q.front();
        q.pop();
        mark[g] = true;
        for(int i = 0; i < ke[g].size(); i++){
            int k = ke[g][i].a;
            if(!mark[k]){
                q.push(k);
                truoc[k] = g;
            }
        }
    }
}

void dem_lien_thong(){
    int res = 0;
    memset(mark, false, sizeof(mark));
    for(int i = 1; i <= n; i++){
        if(!mark[i]){
            bfs(i);
            res++;
        }
    }
    cout << res;
}

void process(){
    cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> u >> v >> w;
		D tmp;
		tmp.a = v;
		tmp.b = w;
		ke[u].push_back(tmp);
		tmp.a = u;
		tmp.b = w;
		ke[v].push_back(tmp);
	}


    //dem_lien_thong();
    cin >> u >> v;
    dijkstra(u, v);
    cout << f[v] << endl;
    trace(u, v);
}

int main()
{
    init();
    process();
}
