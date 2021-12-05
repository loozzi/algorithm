#include <bits/stdc++.h>

using namespace std;


vector<int> a[1001];
vector<pair<int, int> > canh;
bool mark[1001];
int n, m, u, v, res = 0;


void init()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void reset()
{
    memset(mark, false, sizeof(mark));
    for(int i = 0; i <= 1000; i++)
        a[i].clear();
}

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int top = q.front();
        q.pop();
        mark[top] = true;
        for(int i = 0; i < a[top].size(); i++)
        {
            if(!mark[a[top][i]])
                q.push(a[top][i]);
        }
    }
}

// dem so thanh phan lien thong
int tplt()
{
    memset(mark, false, sizeof(mark));
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!mark[i])
        {
            res++;
            BFS(i);
        }
    }
    return res;
}

void canh_cau(int index)
{
    reset();
    for(int i = 0; i < m; i++)
    {
        if(i != index)
        {
            a[canh[i].first].push_back(canh[i].second);
            a[canh[i].second].push_back(canh[i].first);
        }
    }
    if(res < tplt())
        cout << canh[index].first << " " << canh[index].second << " ";
}

void process()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
        pair<int, int> tmp;
        tmp.first = u;
        tmp.second = v;
        canh.push_back(tmp);
    }

    res = tplt();
    for(int i = 0; i < m; i++)
    {
        canh_cau(i);
    }
    cout << endl;
}


int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        reset();
        process();
    }
}
