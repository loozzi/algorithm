#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("MAUAO.INP", "r", stdin);
    freopen("MAUAO.OUT", "w", stdout);
}

void xuli1(){
    int n, res = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i!=j && a[i]==b[j])
                res++;
        }
    }
    cout << res;
}

void xuli2(){
    long long x, y, n, a[100000], b[100000], res = 0;
    cin >> n;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        a[x]++;
        b[y]++;
    }
    for(long long i = 0; i < 100000; i++)
        res += a[i]*b[i];

    cout << res;
}

int main()
{
    doc();
    //xuli1();
    xuli2();
}
