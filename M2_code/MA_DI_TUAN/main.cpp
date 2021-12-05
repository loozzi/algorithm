#include <bits/stdc++.h>
using namespace std;
int n, dem = 0;
int a[15][15];
int X[8] = {-2, -2, -1, -1,  1, 1,  2, 2};
int Y[8] = {-1,  1, -2,  2, -2, 2, -1, 1};

void solve(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


void Try(int x, int y){
    dem++;
    a[x][y] = dem;
    if(dem == n*n){
        solve();
        exit(0);
    }
    for(int i = 0; i < 8; i++){
        int xx = X[i] + x;
        int yy = Y[i] + y;
        if(xx>=0 && xx < n && yy>=0 && yy < n && a[xx][yy] == 0)Try(xx, yy);
    }
    dem--;
    a[x][y] = 0;
}

int main()
{
    n = 6;
    Try(3,3);
}
