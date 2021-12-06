#include <bits/stdc++.h>

using namespace std;

struct toado{
    int x;
    int y;
};

int main()
{
    freopen("KC.INP", "r", stdin);
    freopen("KC.OUT", "w", stdout);
    int n;
    cin >> n;
    toado td[n];
    int _min = 2147483647, result;
    for(int i = 0; i < n; i++){
        cin >> td[i].x >> td[i].y;
    }
    for(int i = 0; i < n - 1; i++){
        int d = 0;
        for(int j = i+1; j < n; j++){
            d += sqrt(pow(td[i].x - td[j].x, 2) + pow(td[i].y - td[j].y, 2));
        }
        if(d < _min){
            _min = d;
            result = i;
        }
    }
    cout << result + 1 << endl << td[result].x << " " << td[result].y;
}
