#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TIMSO.INP", "r", stdin);
    freopen("TIMSO.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    cout << a[0] << " " << a[n-1] << endl;
    for(int i = 1; i < n; i++){
        for(int j = a[i-1]+1; j < a[i]; j++){
            cout << j << " ";
        }
    }
}
