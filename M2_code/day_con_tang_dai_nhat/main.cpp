#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, res = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = 1;
        for(int j  = 0; j < i; j++){
            if(a[i]>a[j] && b[j]+1 > b[i]){
                b[i] = b[j]+1;

            }
        }
        res = max(res, b[i]);
    }


    cout << res << endl;
}
