#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("BIENDOI.INP", "r", stdin);
    freopen("BIENDOI.OUT", "w", stdout);
}

void xuli(){
    doc();
    int n, res = 0;
    cin >> n;
    int a[n], b[n], vt[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];

    for(int i=0; i < n; i++){
        vt[i] = -1;
        for(int j = i; j < n; j++){
            if(a[j]==b[i]){
                vt[i] = j;
                break;
            }
        }
        if(vt[i]!=-1){
            res += vt[i] - i;
            for(int j = vt[i]-1; j >= i; j--){
                a[j] += a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
            }
        } else {
            cout << -1;
            exit(0);
        }
    }

    cout << res << endl;
    for(int i = 0; i < n; i++){
        for(int j = vt[i] - 1; j >= i; j--){
            cout << j+1 << " ";

        }
    }
}

int main()
{
    xuli();
}
