#include <bits/stdc++.h>

const int du = 999999;

using namespace std;

bool mark[du+1];

void init(){
    freopen("DEMDOAN.INP", "r", stdin);
    freopen("DEMDOAN.OUT", "w", stdout);
}

void process(){
    long long n;
    cin >> n;
    long long f[n+1];
    memset(f, 0, sizeof(f));
    memset(mark, false, sizeof(mark));
    for(long long i = 1; i <= n; i++){
        f[i] = (f[i-1] + i) % du;
        mark[f[i]] = true;
    }

    int res = 0;
    for(int i = n; f[i] >= n; i--){
        if(mark[f[i] - n])
            res++;
    }

    cout << res;
}

int main()
{
    init();
    process();
}
