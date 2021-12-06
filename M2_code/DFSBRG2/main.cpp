#include <bits/stdc++.h>

using namespace std;

vector<int> a[3001];
vector<pair<int, int> >c, b;
bool mark[3001];
int n, m, k, u, v;

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
        for(int i = 0; i < a[top].size(); i++){
            if(!mark[a[top][i]]){
                q.push(a[top][i]);
            }
        }
    }
}

void reset(){
    for(int i = 0; i <= 3000; i++)
        a[i].clear();
    memset(mark, false, sizeof(mark));
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

int tplt_bd(){
    reset();
    for(int i = 0; i < c.size(); i++){
       a[c[i].first].push_back(c[i].second);
       a[c[i].second].push_back(c[i].first);
    }
    return tplt();
}

int tplt_new(pair<int, int> p){
    reset();
    c.push_back(p);
    for(int i = 0; i < c.size(); i++){
       a[c[i].first].push_back(c[i].second);
       a[c[i].second].push_back(c[i].first);
    }
    return tplt();
}

void process(){
    cin >> n >> m >> k;
    for(int i = 0; i< m; i++){
        cin >> u >> v;
        pair<int, int> tmp;
        tmp.first = u;
        tmp.second = v;
        c.push_back(tmp);
    }
    for(int i = 0; i < k; i++){
        cin >> u >> v;
        pair<int, int> tmp;
        tmp.first = u;
        tmp.second = v;
        b.push_back(tmp);
    }

    int tplt_start = tplt_bd();
    int dem = 0;
    for(int i = 0; i < b.size(); i++){
        int tmp = tplt_new(b[i]);
        if(tmp < tplt_start){
            tplt_start = tmp;
            c.push_back(b[i]);
            dem++;
        }
    }
    cout << dem;
}

int main()
{
    init();
    process();
}
