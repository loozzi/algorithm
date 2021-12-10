#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    vector<int> f;
    f.push_back(0);
    f.push_back(1);
    f.push_back(2);
    f.push_back(3);
    while(t--){
        cin >> n;
        while(n > f.size()-1){
            f.push_back(f[f.size() - 1] + f[f.size() - 2]);
        }
        cout << f[n] << endl;
    }
}