#include <bits/stdc++.h>

using namespace std;

vector<int> ke[3001];
int n, m, u, v;
bool mark[3001];

void init(){
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        mark[top] = true;
        for(int i = 0; i < ke[top].size(); i++){
            int v = ke[top][i];
            if(!mark[v])
                q.push(v);
        }
    }
}

int tplt(int k){
    memset(mark, false, sizeof(mark));
    int res = 0;
    mark[k] = true;
    for(int i = 1; i<=n; i++){
        if(!mark[i]){
            res++;
            BFS(i);
        }
    }
    return res;
}

void process(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }

    int t = tplt(0);
    for(int i = 1; i <= n; i++){
        if(t < tplt(i))
            cout << i << endl;
    }

}

int main()
{
    init();
    process();

}
