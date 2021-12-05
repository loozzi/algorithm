#include <bits/stdc++.h>


using namespace std;

void doc(){
    freopen("LIQ.INP", "r", stdin);
    freopen("LIQ.OUT", "w", stdout);
}

void xuli(){
    int n, res = 0;
    cin >> n;
    int a[n], f[n];
    int k = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    f[0] = 1;
    for(int i = 1; i < n; i++){
        f[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[i] > a[j])
                f[i] = max(f[i], f[j]+1);
        }
    }
    for(int i = 0; i < n; i++)
        res = max(res, f[i]);

    cout << res - 1 << endl;
}

int main()
{
    doc();
    xuli();
}
