#include <bits/stdc++.h>

using namespace std;

vector<int> a[1001];
bool mark[1001];

void init(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void BFS(int u, int v){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        mark[top] = true;
        if(top == v){
            cout << "YES" << endl;
            return;
        }
        for(int i = 0; i < a[top].size(); i++){
            if(!mark[a[top][i]]){
                q.push(a[top][i]);
            }
        }
    }
    cout << "NO" << endl;
}

void process(){
    int n, m, u, v, k;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> u >> v;
        BFS(u, v);
        memset(mark, false, sizeof(mark));
    }

    for(int i = 0; i <= n; i++)
        a[i].clear();
}

int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
        process();
}
