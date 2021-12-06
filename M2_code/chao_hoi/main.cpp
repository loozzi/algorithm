#include <bits/stdc++.h>

using namespace std;

const int N = 200001;

int n, u, v;
vector<int> ke[N];
int gift[N], vung_dat[N];
bool mark[N];
int truoc[N];

void init(){
    freopen("CHAOHOI.INP", "r", stdin);
    freopen("CHAOHOI.OUT", "w", stdout);
}


void bfs(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        mark[top] = true;
        for(int i = 0; i < ke[top].size(); i++){
            int v = ke[top][i];
            if(!mark[v]){
                q.push(v);
                truoc[v] = top;
            }
        }
    }
}

int solve(int u, int k){
    int res = 0;
    vector<int> st;
    while(u != 1){
        st.push_back(truoc[u]);
        u = truoc[u];
    }
    for(int i = 0 ; i < st.size(); i++){
        if(gift[st[i]] < k)
            res++;
    }
    return res;

}

void process(){
    int n;
    cin >> n;
    memset(mark, false, sizeof(mark));
    for(int i = 0; i < n - 1; i++){
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    for(int i = 1; i <= n; i++){
        cin >> vung_dat[i];
        gift[vung_dat[i]] = i;
    }

    bfs(1);

    for(int i = 1; i <= n; i++){
        cout << solve(vung_dat[i], gift[vung_dat[i]]) << endl;
    }


}

int main()
{
    init();
    process();
}
