#include <bits/stdc++.h>

using namespace std;

vector<int> a[3001], t, b;
bool mark[3001];
int n, m, u, v, res = 0, d;


void init(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}


void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        mark[top] = true;
        b.push_back(top);
        d++;
        for(int i = 0; i < a[top].size(); i++){
            if(!mark[a[top][i]])
                q.push(a[top][i]);
        }
    }
}

int find_node(){
    int node = 0;
    for(int i = 1; i <= n; i++){
        if(!mark[i]){
            d = 0;
            BFS(i);
            if(d > res){
                node = i;
                res = d;
            }
        }
    }
    return node;
}

void process(){
    cin >> n >> m;
    t.push_back(0);
    for(int i = 0; i < n; i++){
        cin >> u;
        t.push_back(u);
    }

    for(int i = 0; i < m; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    int node = find_node();
    b.clear();
    memset(mark, false, sizeof(mark));
    BFS(node);
    cout << b.size() << " ";
    int res = 0, max_tmp = 0;
    for(int i = 0; i < b.size(); i++){
        max_tmp = max(max_tmp, t[b[i]]);
        res += t[b[i]];
    }
    cout << res - max_tmp;
}

int main()
{
    init();
    process();
}
