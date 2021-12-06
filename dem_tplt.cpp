#include<bits/stdc++.h>

using namespace std;

int n, m, u, v;
vector<int> ke[5005];
bool mark[5005];
int truoc[5005];

void bfs(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int t = q.front();
        mark[t] = true;
        q.pop();
        for(int i = 0; i < ke[t].size(); i++){
            if(!mark[ke[t][i]]){
                q.push(ke[t][i]);
                truoc[ke[t][i]] = t;
            }
        }
    }
}

void tplt(){
    int lt = 0;
    memset(mark, false, sizeof(mark));
    for(int i = 1; i <= n; i++){
        if(!mark[i]){
            bfs(i);
            lt++;
        }
    }
    cout << lt;
}

int main(){
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }


    memset(mark, false, sizeof(mark));
    tplt();
}
