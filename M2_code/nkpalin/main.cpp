#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string lcs(string a, string b) {
    int m, n;
    a = " " + a;
    b = " " + b;
    m = a.length();
    n = b.length();
    vector<vector<int> > f(m+1, vector<int>(n+1, 0));

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i]==b[j])
                f[i][j] = f[i-1][j-1] + 1;
            else
                f[i][j] = max(f[i-1][j], f[i][j-1]);
        }
    }

    string res = "";
    while(f[m][n]){
        if(a[m]==b[n]){
            res += a[m];
            m--;
            n--;
        } else {
            if(f[m][n] == f[m-1][n])
                m--;
            else
                n--;
        }
    }
    res.erase(0, 1);
    // cout << f[m][n]-1;
    return res;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    string a; cin >> a;
    string b = a;
    reverse(b.begin(), b.end());
    cout << lcs(a, b);
}
