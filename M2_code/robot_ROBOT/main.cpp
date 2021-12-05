#include<bits/stdc++.H>

using namespace std;

int main()
{
    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);
    int n, m, k;
    string s;
    cin >> n >> m >> k;
    int a[n][m];
    for(int i  = 0; i < n ;i++)
        memset(a[i], 0, m);
    int tmp1, tmp2;
    while(k--){
        cin >> tmp1 >> tmp2;
        a[tmp1][tmp2] = 1;
    }
    cin >> s;
    int x = 0, y = 0;
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == 'R') x++;
        else if(s[i] == 'L') x--;
        else if(s[i] == 'U') y--;
        else if(s[i] == 'D') y++;
        if(x < 0 || y < 0 || x >= m || y >= n || a[x][y] == 1){
            cout << -1 << " " << -1;
            return 0;
        }
    }
    cout << x - 1 << " " << m+1-y;
}
