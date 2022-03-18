#include<bits/stdc++.h>
using namespace std;

int n, u, v;
int a[1001];
int tree[4004];

void build(int l, int r, int id){
    if(l == r){
        tree[id] = a[l];
        return;
    }
    int m = (l+r)/2;
    build(l, m, id*2);
    build(m+1, r, id*2+1);
    tree[id] = max(tree[id*2], tree[id*2 + 1]);
}

int query(int l, int r, int u, int v, int id){
    if(r < u || l > v){
        return INT_MIN;
    }
    if(l == r)
        return tree[id];
    
    int m = (l+r)/2;
    return max(query(l, m, u, v, id*2), query(m+1, r, u, v, id*2+1));
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    cin >>u >> v;

    build(1, n, 1);

    cout << query(1, n, u, v, 1);

}