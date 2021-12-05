#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void process(){
    int n;
    cin >> n;
    vector<int> a[n+1];
    int tmp;
    bool k;
    for(int i = 0; i < n; i++){
        k = false;
        for(int j = 0; j < n; j++){
            cin >> tmp;
            if(tmp == 1){
                cout << j + 1 << " ";
                k = true;
            }
        }
        if(k) cout << "\n";
    }
}

int main()
{
    init();
    process();
}
