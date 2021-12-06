#include<bits/stdc++.h>

using namespace std;

const int N = 1001;
int n;
int a[N], tree[N * 4];

void init(){
	freopen("INPUT.INP", "r", stdin);
	freopen("OUTPUT.OUT", "w", stdout);
}

void buildTree(int id, int l, int r){
	if(l == r){
		tree[id] = a[l];
		return;
	}
	int m  = (l + r) / 2;
	buildTree(id * 2, l, m);
	buildTree(id * 2 + 1, m + 1, r);
	tree[id] = max(tree[id * 2], tree[id * 2 + 1]);
}

int getVal(int id, int l, int r, int u, int v){
	if(l > v || r < u)
		return INT_MIN;
    if(l == r)
        return tree[id];
	int m = (l + r)/2;
	return max(getVal(id * 2, l, m, u, v), getVal(id * 2 + 1, m + 1, r, u, v));
}

void process(){
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];

	buildTree(1, 1, n);
	cout << getVal(1, 1, n, 2, 3);
}

int main(){
	init();
	process();
	return 0;
}
