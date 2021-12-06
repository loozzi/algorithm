#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DAY0.INP", "r", stdin);
    freopen("DAY0.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    memset(b, 0, sizeof(b));
    b[0] = a[0];
    for(int i = 1; i < n; i++){
        b[i] = a[i] + b[i-1];
    }
    bool kt = false;
    for(int i = n - 1; i > 0, !kt; i--){
        for(int j = 0; j < i; j++){
            if(b[i]-b[j] == 0){
                cout << j+2 << " " << i+1;
                kt = true;
                break;
            }
        }
    }
}
