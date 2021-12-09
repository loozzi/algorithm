#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("countpl.inp", "r", stdin);
	freopen("countpl.out", "w", stdout);
	string s;
	cin >> s;
	int n = s.length();
	bool f[n+1][n+1];
	int d[n+1];
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= n - i - 1; j++){
			if(i==0)
				f[j][j] = true;
			else if(i==1){
				if(s[j] == s[j+1]) f[j][j+1] = true;
				else f[j][j+1] = false;
			} else {
				if(s[j] != s[i+j]) f[j][j+i] = false;
				else f[j][j+i] = f[j+1][i+j-1];
			}
		}
	}

	d[0] = 1;
	for(int i = 1; i < n; i++){
		if(f[0][i]) d[i] = 1;
		else{
			int min = INT_MAX;
			for(int j = 1; j <= i; j++){
				if(f[j][i] && d[j-1] + 1 < min)
					min = d[j-1] + 1;
			}
			d[i] = min;
		}
	}
	cout << d[n-1];
}