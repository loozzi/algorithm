#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, tmp;
    cin >> n >> m;
    bool a[m+1];
    a[0] = true;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        a[tmp] = true;
        for(int j = m; j >= tmp; j--){
            if(a[j - tmp] == true)
                a[j] = true;
        }
    }
    if(a[m] == true)
        cout << "YES";
    else
        cout << "NO";
}