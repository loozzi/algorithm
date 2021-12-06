#include <bits/stdc++.h>

using namespace std;

vector<int> a[1001];
bool mark[1001];

void init(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void DFS(int u){
    mark[u] = true;
    for(int i = 0; i < a[u].size(); i++)
        if(!mark[a[u][i]])
            DFS(a[u][i]);
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        mark[top] = true;
        for(int i = 0; i < a[top].size(); i++){
            if(!mark[a[top][i]])
                q.push(a[top][i]);
        }
    }
}

void process(){
    memset(mark, false, sizeof(mark));
    int n, m, u, v;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    int dem = 0;
    // dem so thanh phan lien thong
    for(int i = 1; i <= n; i++){
        if(!mark[i]){
            dem++;
            BFS(i);
        }
    }
    for(int i = 1; i <= n; i++){
        int tmp = 0;
        memset(mark, false, sizeof(mark));
        mark[i] = true;
        for(int j = 1; j <= n; j++){
            if(!mark[j]){
                tmp++;
                BFS(j);
            }
        }
        if(tmp > dem){
            cout << i << " ";
        }
    }
    cout << endl;

}

int main()
{
    init();
    int t;
    cin >> t;
    while(t--){
        process();
    }
}
