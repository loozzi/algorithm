#include <bits/stdc++.h>

using namespace std;

vector<int> ke[3001];
bool mark[3001];
int n, m, u, v;
vector<pair<int, int> > canh;

void init(){
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
}

void reset(){
    for(int i = 0; i < 3001; i++)
        ke[i].clear();
    memset(mark, false, sizeof(mark));
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        mark[top] = true;
        for(int i = 0; i < ke[top].size(); i++){
            int k = ke[top][i];
            if(!mark[k])
                q.push(k);
        }
    }
}

int tplt(){
    int res = 0;
    for(int i = 1; i <= n; i++){
        if(!mark[i]){
            res++;
            BFS(i);
        }
    }
    return res;
}

int canh_cau(int k){
    reset();
    for(int i = 0; i < m; i++){
        if(i!=k){
            ke[canh[i].first].push_back(canh[i].second);
            ke[canh[i].second].push_back(canh[i].first);
        }
    }
    return tplt();
}

void process(){
    reset();
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
        pair<int, int> tmp;
        tmp.first = u;
        tmp.second = v;
        canh.push_back(tmp);
    }

    int t = tplt();
    for(int i = 0; i < m; i++){
        if(t < canh_cau(i)){
            cout << canh[i].first << " " << canh[i].second << endl;
        }
    }
}

int main()
{
    init();
    process();
}
