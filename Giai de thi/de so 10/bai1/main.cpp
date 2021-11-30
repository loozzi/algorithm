#include <bits/stdc++.h>

using namespace std;

bool snt[10000001];

int main()
{
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);

    int n;
    cin >> n;
    int k = pow(10, n) + 1;
    memset(snt, true, sizeof(snt));
    for(int i = 2; i <= sqrt(k); i++)
        if(snt[i])
            for(int j = i*i; j<=k; j+=i)
                snt[j] = false;

    snt[0] = snt[1] = false;
    vector<int> res;
    for(int i = pow(10, n-1); i < pow(10, n); i++){
        bool check = true;
        int tmp = i;
        while(tmp){
            if(!snt[tmp]){
                check = false;
                tmp = 0;
            }
            tmp /= 10;
        }
        if(check)
            res.push_back(i);
    }

    for(int i = 0; i < res.size(); i++)
        cout << res[i] << endl;
}
