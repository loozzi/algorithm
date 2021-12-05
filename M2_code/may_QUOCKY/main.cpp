#include <bits/stdc++.h>

using namespace std;

int main()
{
    struct kich_thuoc{
        float x;
        float y;
    };
    freopen("QUOCKY.INP", "r", stdin);
    freopen("QUOCKY.OUT", "w", stdout);
    int n, k, y;
    cin >> n >> k >> y;
    kich_thuoc kt[n];
    kt[k-1].y = y;
    kt[k-1].x = (2*kt[k-1].y)/(sqrt(5)-1);
    for(int i = k; i < n; i++){
        kt[i].x = kt[i-1].y;
        kt[i].y = (sqrt(5)-1)*kt[i].x / 2;
    }
    for(int i = k-1; i >= 0;i--){
        kt[i].y = kt[i+1].x;
        kt[i].x = (2*kt[i].y)/(sqrt(5)-1);
    }
    cout << kt[0].y << " " << kt[0].x << endl;
    cout << kt[n-1].y << " " << kt[n-1].x;

}
