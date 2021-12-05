#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TICHMAX.INP", "r", stdin);
    freopen("TICHMAX.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
    }

    cout << max(a[0]*a[1]*a[n-1], a[n-1]*a[n-2]*a[n-3]);
}

