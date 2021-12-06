#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DAO.INP", "r", stdin);
    freopen("DAO.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    int id[n];
    for(int i = 0; i < n; i++){
        id[i] = 1;
    }
    cin >> a[0];
    for(int i = 1 ; i < n; i++){
        cin >> a[i];
        if(a[i]==a[i-1]){
            id[i] = id[i-1]+1;
        }
    }
    int res = id[0];
    for(int i = 0; i < n; i++){
        res = max(res, id[i]);

    }
    cout << res;
}
