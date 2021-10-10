#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("square.inp", "r", stdin);
    freopen("square.out", "w", stdout);
}

void process(){
    int n;
    cin >> n;
    int xmax = 0, xmin=101, ymax = 0, ymin = 101, x, y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        xmin = min(xmin, x);
        ymin = min(ymin, y);
        xmax = max(xmax, x);
        ymax = max(ymax, y);
    }
    cout << max(xmax-xmin, ymax-ymin)*max(xmax-xmin, ymax-ymin);
}

int main()
{
    init();
    process();
}
