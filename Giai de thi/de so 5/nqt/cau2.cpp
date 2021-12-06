#include <bits/stdc++.h>

using namespace std;

struct dt{
    int u, v;
};

int n, m, u, v, cc;
bool mark[1001];
vector<int> ke[1001];
vector<dt> nhap;


void reset(){
    for(int i = 0 ; i < 1001; i++){
        ke[i].clear();
    }
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int k = q.front();
        q.pop();
        mark[k] = true;
        for(int i = 0; i < ke[k].size(); i++){
            if(mark[ke[k][i]] == false){
                q.push(ke[k][i]);
            }
        }

    }
}

int demTPLT(){
    int res = 0;
    memset(mark, false, sizeof(mark));
    for(int i = 1; i <= n; i++){
        if(mark[i] == false){
            bfs(i);
            res++;
        }
    }
    return res;
}

int demCanhCau(int j){
    reset();
    for(int i = 0; i < nhap.size(); i++){
        if(i != j){
            u = nhap[i].u;
            v = nhap[i].v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
    }
    return demTPLT();
}

int main()
{
    freopen("cau2.inp", "r", stdin);
    freopen("cau2.out", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        dt tmp;
        tmp.u = u;
        tmp.v = v;
        nhap.push_back(tmp);
    }
    cc = demCanhCau(m+1);
    int res = 0;
    for(int i = 0; i < m; i++){
        int k = demCanhCau(i);
        if( k > cc){
            res ++;
        }
    }
    cout << res;
}
