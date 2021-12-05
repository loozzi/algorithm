#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("XEPGACH.INP", "r", stdin);
    freopen("XEPGACH.OUT", "w", stdout);
    int n, sum = 0, res = 0;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    for(int i = 0; i < n; i++){
        res += abs(sum/n - arr[i]);
    }
    if(res!=0)
        cout << res/2;
    else
        cout << "-1";

}
