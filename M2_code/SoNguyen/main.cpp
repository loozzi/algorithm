#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("SONGUYEN.INP", "r", stdin);
    freopen("SONGUYEN.OUT", "w", stdout);
    int n;
    map<int, int> data;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        data[a[i]] = 0;
    }
    for(int i = 0; i< n; i++){
        data[a[i]]++;
    }
    map<int, int>::iterator i;
    for (i = data.begin(); i != data.end(); i++)
        cout << i->first << " " << i->second << endl;
}
