#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CANDI.INP", "r", stdin);
    freopen("CANDI.OUT", "w", stdout);
    int n, res = 1;
    for(int i = 2; i <= sqrt(n); i++){
    cin >> n;
        if(n%(i+1)==0)
            res+=2;
    }
    cout << --res;
}
