#include <bits/stdc++.h>

using namespace std;

void sx_noi_bot(vector<int> a, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                a[i] += a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
}


int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    vector<int> a;
    int tmp;
    while(cin >> tmp){
        a.push_back(tmp);
    }
    sx_noi_bot(a, sizeof(a)/sizeof(int));
    for(int i = 0; i < sizeof(a)/sizeof(int); i++){
        cout << a[i] << " ";
    }
}
